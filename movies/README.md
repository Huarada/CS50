# Movies - CS50x 2023

## Descrição

Este projeto utiliza um banco de dados de filmes para responder a perguntas complexas sobre relacionamentos entre atores, diretores e filmes. O banco de dados contém várias tabelas com informações detalhadas sobre filmes, atores e seus papéis, permitindo consultas avançadas utilizando **SQL**.

## Funcionalidades

- **Consultas SQL**: O projeto envolve a execução de múltiplas consultas SQL para obter informações sobre filmes, como o número de filmes em que atores específicos apareceram, o diretor de um determinado filme, entre outras.
- **Exploração de Dados**: O usuário pode explorar o banco de dados de filmes para encontrar respostas para perguntas pré-definidas através de scripts SQL.

## Como executar

1. Certifique-se de que o **SQLite** está instalado no seu ambiente.
2. Para executar qualquer um dos scripts SQL, use o seguinte comando no terminal:

  ```bash
   sqlite3 movies.db < [arquivo_sql]
   ```

Por exemplo, para executar o primeiro script:

  ```bash
   sqlite3 movies.db < 1.sql
   ```

3. Os arquivos SQL contêm consultas para resolver perguntas específicas sobre o banco de dados de filmes.

## strutura do Projeto

- movies.db: Banco de dados SQLite que contém as tabelas com informações sobre filmes, atores e diretores.
- Consultas SQL: Existem 13 arquivos SQL no total, numerados de 1.sql a 13.sql, que contêm consultas para as seguintes perguntas (exemplos):
    - 1.sql: Quantos filmes um determinado ator estrelou?
    - 2.sql: Quem dirigiu um determinado filme?
    - 3.sql: Quais são os atores que trabalharam juntos em mais de um filme?
    - 4.sql: Quais diretores trabalharam com o mesmo ator em múltiplos filmes?
    - (…continuação até o arquivo 13.sql)
 
## Estrutura do Banco de Dados
O banco de dados movies.db contém as seguintes tabelas principais:
 
  - movies: Armazena informações sobre os filmes (ID, título, ano, diretor).
  - actors: Contém dados dos atores (ID, nome).
  - directors: Contém dados dos diretores (ID, nome).
  - roles: Liga atores a filmes, indicando os papéis desempenhados (ID do ator, ID do filme).

## Referências
  Este projeto faz parte do curso CS50x da Universidade de Harvard.
