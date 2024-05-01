#include "funcionario.h"


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
            if (cargo == 1){
                interface_visitante();
                while(1)
                {
                    escolha = ler_numero();
                    switch (escolha)
                    {
                    case 1:
                        break;
                    case 0:
                        printf("Saindo do programa...\n");
                        return 0;
                        break;
                    default:
                        printf("Opção inválida. Tente novamente.\n");
                        break;
                    }
                    if (escolha == 1);{
                        break;
                    }
                }
            }
            if (cargo != -1 && cargo != 1)
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