Um sistema simples de criação de conta e login, autenticação básica,
níveis de acesso e error handling básico.

Neste programa foi utilizado um header próprio, para facilitar a 
manuseabilidade do código.

O sistema de autenticação utilizado para o usuário logar
utiliza a função "strcmp" da biblioteca "string.h" para comparar as
informações dadas pelo usuário com as armazenadas no array que
contêm a lista de funcionários.

Visitantes só podem acessar a interface de visitantes,
Funcionário podem acessar o Workspace e
Administradores podem visualizar os usuários criado, função que é negada
para outros níveis de usuário, além de também poderem acessar o Workspace.