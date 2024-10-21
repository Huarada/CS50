# C$50 Finance - CS50x 2023

## Descrição

Este programa é uma aplicação web que simula um mercado de ações. Os usuários podem se registrar, fazer login e, uma vez conectados, podem **comprar e vender ações**, **consultar cotações** e **visualizar o histórico de transações**. A aplicação é construída com Flask e usa um banco de dados SQLite para armazenar informações de usuários, suas transações, e o saldo em dinheiro.

## Funcionalidades

- **Registro e Login de Usuários**: Permite que novos usuários se registrem e façam login.
- **Consulta de Cotações**: Os usuários podem consultar os preços atuais de ações com base no símbolo da ação.
- **Compra de Ações**: Os usuários podem comprar ações, especificando o símbolo e a quantidade desejada.
- **Venda de Ações**: Os usuários podem vender as ações que possuem.
- **Histórico de Transações**: Exibe um histórico detalhado de todas as transações de compra e venda de ações do usuário.
- **Saldo em Dinheiro**: Exibe o saldo atual disponível para o usuário.

## Como executar

1. Instale os requisitos usando o `requirements.txt`:

   ```bash
   pip install -r requirements.txt
   ```
2. Crie e configure o banco de dados executando os comandos apropriados (garanta que o arquivo finance.db está presente).

3. Execute a aplicação Flask:
   ```bash
   flask run
   ```

## Estrutura de arquivos 
- app.py: O arquivo principal que contém a lógica do backend, incluindo rotas e integração com o banco de dados.
- helpers.py: Contém funções auxiliares, como consultas de cotações e validação de ações.
- finance.db: O banco de dados SQLite que armazena informações de usuários e suas transações.
- requirements.txt: Arquivo de dependências do Python para instalar os pacotes necessários.

## Templates (HTML)
- layout.html: Template base que define a estrutura HTML comum para todas as páginas.
- index.html: Página inicial que exibe o portfólio do usuário.
- buy.html: Página para compra de ações.
- sell.html: Página para venda de ações.
- quote.html: Página para consultar o preço de uma ação.
- quoted.html: Página que exibe o resultado da consulta de uma ação
- history.html: Página que exibe o histórico de transações
- register.html: Página para registro de novos usuários.
- login.html: Página para login de usuários existentes.
- apology.html: Página para exibir mensagens de erro]

## Requisitos:
- Flask: Framework web para Python.
- Flask-Session: Para gerenciar sessões de usuários.
- SQLite: Para armazenar dados dos usuários e transações
- requests: Biblioteca para fazer consultas à API de cotações.

## Exemplo de Uso
1. Registro: Um usuário novo pode se registrar criando uma conta.
2. Login: Após o registro, o usuário pode fazer login.
3. Comprar Ações: O usuário insere o símbolo de uma ação e a quantidade desejada para comprar ações.
4. Vender Ações: O usuário seleciona as ações que deseja vender.
5. Histórico: O usuário pode visualizar todas as transações de compra e venda de ações feitas até o momento.
6. Consultar Cotações: O usuário pode consultar o preço atual de uma ação pelo símbolo.

## Banco de Dados
O banco de dados finance.db contém tabelas para armazenar:
- Informações de usuários.
- Detalhes de ações compradas e vendidas.
- Histórico de transações.

Referências: 
Este projeto faz parte do curso CS50x da Universidade de Harvard.


