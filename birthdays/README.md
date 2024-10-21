# Birthdays - CS50x 2023

## Descrição

Este programa é uma aplicação web que permite aos usuários **adicionar e visualizar aniversários** armazenados em um banco de dados SQLite. O objetivo do projeto é praticar a manipulação de dados com banco de dados, além de criar uma interface simples para interação com os usuários.

## Funcionalidades

- **Adicionar aniversários**: Os usuários podem inserir o nome de uma pessoa, o mês e o dia do seu aniversário através de um formulário.
- **Visualizar aniversários**: Exibe uma lista de todos os aniversários cadastrados no banco de dados.

## Como executar

1. Certifique-se de que o Python e as bibliotecas Flask e SQLite estão instalados no seu ambiente.

2. Inicie o servidor Flask com o comando:

   ```bash
   flask run
   ```

3. Use o formulário da aplicação para adicionar aniversários ou ver todos os aniversários já cadastrados.

## Estrutura do Código
 - **app.py**: Contém toda a lógica da aplicação, incluindo as rotas do Flask e a manipulação do banco de dados SQLite.
 - **index.html**: Página HTML principal que renderiza o formulário de inserção de aniversários e a tabela que exibe os aniversários cadastrados.
 - **birthdays.db**: Banco de dados SQLite que armazena os nomes, meses e dias dos aniversários.
 - **styles.css:** Arquivo de estilo que define a aparência da página, como o layout do formulário e da tabela.

## Estrutura do Banco de Dados
O banco de dados SQLite birthdays.db contém uma tabela chamada birthdays, estruturada da seguinte maneira:

  - **name:** Nome da pessoa (texto)
  - **month:** Mês do aniversário (inteiro).
  - **day:** Dia do aniversário (inteiro).

## Estilo e Aparência
  - O arquivo styles.css define o estilo da página, como o esquema de cores, os tamanhos de fontes e o design dos botões e campos de formulário.
  - A página foi projetada para ser simples e fácil de navegar, com um formulário claro para adicionar novos aniversários e uma tabela formatada para exibir os aniversários existentes.

## Exemplo de Uso
  1. Adicionar um novo aniversário: Preencha o formulário com o nome, mês e dia e clique em "Submit".
  2. Visualizar aniversários: A tabela na página exibirá todos os aniversários cadastrados.

## REFERÊNCIAS
Este projeto faz parte do curso CS50x da Universidade de Harvard.
   
