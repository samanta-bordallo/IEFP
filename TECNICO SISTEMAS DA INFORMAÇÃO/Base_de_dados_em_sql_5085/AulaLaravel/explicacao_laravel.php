-- Como fazer um projeto em Laravel
-- Instalar o composer e nodejs

***Correr todos estes comandos no terminal bash do visual code, ou outro compilador de código dentro da pasta onde está criado o projeto de laravel***

-- Criar o projeto laravel:

1. -- composer create-project laravel/laravel ./
No sítio de ./ deve se colocar o nome do projeto ou nome da pasta onde queremos que crie, ou utiliza-se ./ se estivermos dentro da pasta correta.

2. -- php artisan serve
Entramos no servidor atraves do: Abrir o browser no localhost:8000 (porta 8000 é a porta que o Laravel usa por defeito).
Após este comando para continuar a correr os comandos clicar: CTRL + C

3. -- composer require laravel/ui --dev
composer - é um gerenciador de packages do php.
require - subcomando do Composer usado para adicionar novas dependências aos projetos. Quando executado com composer require, ele adiciona um novo pacote ao teu arquivo composer.json e instala esse pacote juntamente com as suas dependências.
laravel/ui - é o pacote que estás a adicionar ao teu projeto. Este pacote fornece funcionalidades para criar interfaces de utilizador (UI) em aplicações Laravel, incluindo autenticação, scaffolding de frontend e outras características relacionadas com a interface de utilizador.

4. -- php artisan ui bootstrap --auth
php artisan - É o comando da linha de comandos do Laravel utilizado para executar tarefas relacionadas com o desenvolvimento da aplicação.
ui - É o subcomando que permite gerar as views e os controladores relacionados com a interface de utilizador.
bootstrap - neste caso estás a indicar ao Laravel para utilizar o Bootstrap como o framework CSS para a interface de utilizador.
auth - Este comando irá gerar as views para registo, login, logout e recuperação de senha, bem como os controladores associados para gerir estas operações.

5. -- npm install bootstrap-icons -save-dev
npm install -ele baixa e instala pacotes do registro npm (ou de outros repositórios configurados) no teu projeto.
bootstrap-icons - é o pacote que contém os ícones do Bootstrap.
save-dev -eEsta opção indica ao npm para adicionar o pacote bootstrap-icons como uma dependência de desenvolvimento no ficheiro package.json.
*** No meu caso foi necessário atualizar o npm para a versão 10.4 e o comando utilizado foi: npm install -g npm@10.4.0
Correr novamente o passo 5.

6. -- npm install
Todas as dependências do teu projeto serão instaladas, e ao executar.

7. -- npm run build
O teu código-fonte será compilado e construído para produção.

8. -- php artisan serve
Entramos no servidor atraves do: Abrir o browser no localhost:8000 (porta 8000 é a porta que o Laravel usa por defeito). E agora terás uma opção de registo e de login criada.


9. Criar um novo utilizador:
Primeiro no ficheiro .env alterar a parte indicada (linhas 11 a 16):
DB_CONNECTION=mysql
DB_HOST=127.0.0.1 - colocar o hostname da conexão do mysql
DB_PORT=3306 - colocar a porta da conexão do mysql
DB_DATABASE= filmes_teste - colocar o nome que querem dar à vossa base de dados
DB_USERNAME= localhost - Colocar o username da conexão do mysql
DB_PASSWORD= - Colocar a password caso tenham

.env - é onde se guarda as variáveis de ambiente. Este ficheiro não é carregado para o repositório pois são variaveis que são diferentes para cada ambiente local.
LOCAL/TEST : ambiente de desenvolvimento
STAGING : ambiente de testes antes de ir para produção
PRODUCTION:  Ambiente online, onde os clientes já tem acesso

Gravar o ficheiro .env

OPCIONAL -- php artisan make:migration create_categories_table --create=categories
OU
-- php artisan make:migration create_categories_table --table=categories (é para alterar a tabela categories neste caso)

Cria uma tabela categorias dentro da pasta database com o nome *2024_02_27_144026_create_categories_table.php*
Este comando (make:migration) pode ser utilizado para fazer alterações na base de dados sem fazer diretamente, ou seja, guarda todas as alterações que queremos fazer para depois então fazer a migração dos dados.

Dentro do ficheiro da tabela categories adicionar as colunas (dentro da tabela categories)
$table->id();
$table->string('name');
$table->string('icon')->nullable();

10. -- php artisan migrate
Correr no terminal bash
migrate - É o subcomando utilizado para executar as migrações do banco de dados.

11. -- php artisan serve
Entramos no servidor atraves do: Abrir o browser no localhost:8000 (porta 8000 é a porta que o Laravel usa por defeito).

12. No browser criar um utilizador. Podes depois verificar na tua base de dados criada (no workbench) se o teu utiizador foi criado.

