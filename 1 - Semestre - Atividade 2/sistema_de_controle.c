#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>

#define MAX_CHAR 50
enum Nivel
{
    VISITANTE = 1,
    FUNCIONÁRIO,
    ADMINISTRADOR
};

struct funcionario
{
    char nome[MAX_CHAR];
    int cargo;
    char senha[MAX_CHAR];
};

struct funcionario lista[25];
int registrado = 0;

void Menu_cargos()
{
    printf("|| Cargos ||\n");
    printf("[1]: Visitante\n");
    printf("[2]: Funcionário\n");
    printf("[3]: Administrador\n");
    printf("[0]: sair\n");
}

void Menu_acesso()
{
    printf("|| MENU DE ACESSO ||\n");
    printf("Caso não tenha uma conta crie uma escolhendo a opção 'SignUp'\n");
    printf("[1]: SignUp\n");
    printf("[2]: Login\n");
    printf("[0]: Sair\n");
}

void Menu_signup()
{
    printf("|| SIGN UP ||\n");
    printf("Digite seu nome e senha sem espaços.\n");
    printf("Crie sua conta:\n");
}

void Menu_login()
{
    printf("|| LOGIN ||\n");
    printf("Insira seus dados:\n");
}

void insert(struct funcionario novo_func)
{
    if (registrado < 25)
    {
        lista[registrado] = novo_func;
        registrado += 1;
    }
    else
    {
        printf("Limite de funcionários alcançado!\n");
    }
}

int interface_principal()
{
    printf("|| INTERFACE PRINCIPAL ||\n");
    printf("Bem-vindo\n");
    printf("[1]: Seus trabalhos\n");
    printf("[2]: Informações de funcionários (apenas para administradores)\n");
    printf("[3]: Voltar\n");
    printf("[0]: Sair\n");
}

void interface_visitante()
{
    printf("|| INTERFACE DE VISITANTES ||\n");
    printf("Visitantes não possuem acesso a mesma interface que funcionários.\n");
}

int ler_numero() //função para evitar loops infitos de inputs de caracteres no lugar de números
{
    char entrada[100];
    char *endptr;
    long num;

    while (1)
    {
        printf("Digite um número: ");
        if (fgets(entrada, sizeof(entrada), stdin) == NULL)
        {
            printf("Erro ao ler entrada.\n");
            exit(EXIT_FAILURE);
        }

        // Remove a quebra de linha (\n) da entrada
        entrada[strcspn(entrada, "\n")] = '\0';

        // Verifica se a entrada contém apenas números
        int tem_letras = 0;
        for (int i = 0; entrada[i] != '\0'; i++)
        {
            if (!isdigit(entrada[i]))
            {
                tem_letras = 1;
                break;
            }
        }

        if (!tem_letras)
        {
            // A entrada contém apenas números
            num = strtol(entrada, &endptr, 10);
            if (endptr != entrada && *endptr == '\0')
            {
                // Conversão bem-sucedida e não há caracteres extras
                return (int)num;
            }
        }

        printf("Entrada inválida. Digite apenas números.\n");
    }
}

void criar_novo_usurario()
{
    struct funcionario novo_func;
    printf("Nome: \n");
    scanf("%s", novo_func.nome);
    printf("Senha: \n");
    scanf("%s", novo_func.senha);
    do
    {
        printf("Cargo: \n");
        Menu_cargos();
        novo_func.cargo = ler_numero(); 
    } while (novo_func.cargo < VISITANTE || novo_func.cargo > ADMINISTRADOR);

    insert(novo_func);
}

int login()
{
    char nome[MAX_CHAR];
    char senha[MAX_CHAR];

    printf("Nome de usuário: ");
    scanf("%s", nome);

    printf("Senha: ");
    scanf("%s", senha);

    for (int i = 0; i < registrado; i++)
    {
        if (strcmp(lista[i].nome, nome) == 0 && strcmp(lista[i].senha, senha) == 0)
        {
            printf("Login bem-sucedido!\n");
            return lista[i].cargo;
        }
    }

    printf("Nome de usuário ou senha incorretos. Tente novamente.\n");
    return -1;
}

void mostrar_usuarios(enum Nivel nivel_acesso)
{
    if (nivel_acesso != ADMINISTRADOR)
    {
        printf("Acesso negado. Somente administradores podem visualizar os usuários.\n");
        return;
    }

    printf("Lista de usuários:\n");
    for (int i = 0; i < registrado; i++)
    {
        const char *cargo_str;
        switch (lista[i].cargo)
        {
        case VISITANTE:
            cargo_str = "Visitante";
            break;
        case FUNCIONÁRIO:
            cargo_str = "Funcionário";
            break;
        case ADMINISTRADOR:
            cargo_str = "Administrador";
            break;
        default:
            cargo_str = "Desconhecido";
            break;
        }
        printf("Nome: %s, Cargo: %s\n", lista[i].nome, cargo_str);
    }
}


int main(void)
{
    int escolha;
    setlocale(LC_ALL, "pt_BR.UTF-8");
    while (1)
    {
        Menu_acesso();
        escolha = ler_numero(); 
        switch (escolha)
        {
        case 1: //criar a conta
            Menu_signup();
            criar_novo_usurario();
            break;
        case 2: // logar na conta
            Menu_login();
            int cargo = login();
            if (cargo != -1)
            {
                interface_principal();
                while (1)
                {
                    escolha = ler_numero(); 
                    switch (escolha)
                    {
                    case 1:

                        printf("|| WORKSPACE ||\n");
                        printf("Esse é seu local de trabalho\n");
                        break;
                    case 2:
                        mostrar_usuarios(cargo);
                        break;
                    case 3:
                        // Voltar para o menu de acesso
                        break;
                    case 0:
                        printf("Saindo do programa...\n");
                        return 0;
                    default:
                        printf("Opção inválida. Tente novamente.\n");
                        break;
                    }
                    if (escolha == 3)
                        break;
                }
            }
            break;
        case 0:
            printf("Saindo do programa...\n");
            return 0;
        default:
            printf("Opção inválida. Tente novamente.\n");
            break;
        }
    }
}
