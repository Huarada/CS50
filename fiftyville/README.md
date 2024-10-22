# Fiftyville - CS50x 2023

## Descrição

**Fiftyville** é um projeto baseado em consultas SQL, onde o objetivo é resolver um mistério na cidade fictícia de Fiftyville, investigando dados de um banco de dados SQL. O projeto envolve a execução de várias consultas SQL para obter informações de tabelas que contêm dados sobre transações, cidadãos, locais e eventos na cidade.

## Funcionalidades

- **Consultas SQL**: O projeto permite que o usuário escreva consultas SQL para investigar um conjunto de dados e solucionar um mistério.
- **Exploração de Dados**: O banco de dados contém informações detalhadas sobre transações e atividades na cidade de Fiftyville, permitindo a criação de consultas complexas para encontrar padrões e informações cruciais.
- **Resolução de Mistério**: Ao final, o usuário deve ser capaz de responder perguntas baseadas nos dados para resolver o mistério.

## Como executar

1. Abra o arquivo SQL **`log.sql`** para visualizar as consultas feitas ao longo do projeto.
2. Para executar as consultas em um banco de dados SQL, utilize o seguinte comando no terminal:

   ```bash
   sqlite3 fiftyville.db < log.sql
   ```
## Como executar

Isso executará todas as consultas no banco de dados e retornará os resultados que ajudarão a solucionar o mistério.

## Estrutura do Código

- **`log.sql`**: Arquivo contendo uma série de consultas SQL que exploram o banco de dados **`fiftyville.db`**.
  - As consultas são projetadas para investigar informações como transações financeiras, registros de movimentações de pessoas e eventos na cidade de Fiftyville.

## Exemplo de Uso

1. **Consulta de Transações**:

   Uma consulta pode ser feita para descobrir transações suspeitas em um determinado período:

   ```sql
   SELECT * FROM transactions WHERE date BETWEEN '2023-01-01' AND '2023-12-31';
   ```
2.Consulta de Movimentações:
  Outra consulta pode verificar a movimentação de um cidadão em particular:
  ```sql
  SELECT * FROM movements WHERE citizen_id = 42;
  ```
## Banco de Dados

O banco de dados **`fiftyville.db`** contém tabelas que armazenam informações sobre:

- **Cidadãos**: Registros de indivíduos na cidade de Fiftyville, incluindo dados pessoais e identificadores únicos.
- **Transações**: Informações financeiras detalhadas sobre transações realizadas pelos cidadãos.
- **Movimentações**: Dados que rastreiam as movimentações dos cidadãos pela cidade, indicando locais visitados e horários.
- **Locais**: Registros dos locais na cidade e eventos importantes que ocorreram em cada um deles.

## Requisitos

- **SQLite**: O projeto utiliza **SQLite** para armazenar e consultar os dados no banco de dados. Certifique-se de que o SQLite está instalado no seu ambiente para executar as consultas necessárias.

## Investigação e Solução

O projeto é estruturado como uma investigação. Para resolver o mistério, o usuário deve usar consultas SQL para explorar o banco de dados, identificar padrões e obter informações relevantes. A solução do mistério depende de como as consultas são feitas e como os dados extraídos são interpretados.

## Referências

Este projeto faz parte do curso [CS50x](https://cs50.harvard.edu/x) da Universidade de Harvard.




