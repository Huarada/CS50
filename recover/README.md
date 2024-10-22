# Recover - CS50x 2023

## Descrição

Este programa recupera imagens JPEG de um arquivo **forense** em formato RAW. Ao analisar o arquivo em blocos de 512 bytes, o programa identifica o início de imagens JPEG e reconstrói cada uma delas, salvando os arquivos recuperados.

## Funcionalidades

- **Identificação de Imagens JPEG**: O programa percorre o arquivo RAW e identifica blocos de dados que representam o início de um arquivo JPEG.
- **Recuperação de Imagens**: Quando um arquivo JPEG é identificado, o programa recupera o restante da imagem e a salva em um arquivo separado.
- **Criação Automática de Arquivos**: Cada imagem recuperada é automaticamente salva com um nome incremental (ex: `001.jpg`, `002.jpg`, etc.).

## Como executar

1. Compile o programa com o seguinte comando:

   ```bash
   make recover
   ```
2. Execute o programa passando o arquivo RAW como argumento:
   ```bash
   ./recover card.raw
   ```

O programa irá gerar arquivos JPEG recuperados, nomeados sequencialmente (ex: 000.jpg, 001.jpg, etc.).

## Estrutura do Código

 - main: Função principal que recebe o arquivo RAW como entrada e coordena a recuperação de imagens.
 - Identificação de JPEG: O programa verifica se os primeiros 4 bytes de cada bloco de 512 bytes correspondem à assinatura de um JPEG (0xff 0xd8 0xff 0xe0 ou 0xe1).
 - Recuperação de Blocos: Ao encontrar um novo JPEG, o programa continua gravando blocos de 512 bytes no arquivo até que um novo JPEG seja encontrado ou o fim do arquivo seja alcançado.

## Exemplo de Uso

Se o arquivo card.raw contiver imagens JPEG, o programa irá gerar uma série de arquivos xxx.jpg onde xxx é o número da imagem, começando em 000.jpg:
   ```bash
   ./recover card.raw
   ```
Saída esperada:
   ```bash
   001.jpg
  002.jpg
  003.jpg
   ```
## Detalhes de Implementação

 - O programa lê o arquivo RAW em blocos de 512 bytes.
 - Ele verifica cada bloco em busca de uma assinatura de JPEG e começa a gravar um novo arquivo assim que encontra uma assinatura válida.
 - O processo é repetido até o final do arquivo RAW, gerando imagens JPEG recuperadas.

## Referências
Este projeto faz parte do curso CS50x da Universidade de Harvard.


