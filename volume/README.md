# Volume - CS50x 2023

## Descrição

Este programa ajusta o volume de um arquivo de áudio **WAV**. Ele manipula diretamente os dados do arquivo de áudio, modificando a amplitude de cada amostra para aumentar ou diminuir o volume, conforme o fator especificado pelo usuário.

## Funcionalidades

- **Ajuste de Volume**: O programa ajusta o volume de um arquivo de áudio, multiplicando cada amostra por um fator fornecido pelo usuário.
- **Manipulação de Arquivos WAV**: O programa lê os dados de áudio de um arquivo WAV e grava o áudio modificado em um novo arquivo.
- **Preservação da Estrutura do Arquivo**: O cabeçalho do arquivo WAV é mantido intacto, garantindo que o formato do arquivo de saída seja válido.

## Como executar

1. Compile o programa com o seguinte comando:

   ```bash
   make volume
   ```
2.Execute o programa fornecendo o arquivo de entrada, o arquivo de saída e o fator de ajuste de volume:
```bash
./volume input.wav output.wav 2.0
```
Neste exemplo, o volume será aumentado em 2 vezes.

## Estrutura do Código
- main: Função principal que recebe os argumentos da linha de comando (arquivos e fator de volume), lê o arquivo WAV, aplica o fator de volume e grava o resultado em um novo arquivo.
- Manipulação de Arquivos WAV: O programa lê e processa o cabeçalho do arquivo WAV para preservar suas informações e manipula os dados de áudio para ajustar o volume.
- Cálculo de Volume: Cada amostra de áudio é multiplicada pelo fator de ajuste fornecido, resultando em um aumento ou diminuição do volume.


## Exemplo de Uso
Se você tiver um arquivo de áudio chamado input.wav e quiser aumentar o volume em 50%, execute o seguinte comando:

```bash
./volume input.wav output.wav 1.5
```
O arquivo output.wav conterá o áudio com o volume ajustado.

## Requisitos
- Linguagem C: O programa é escrito em C e utiliza operações de leitura e escrita em arquivos binários para processar arquivos WAV.
- Formato WAV: O programa foi projetado para manipular exclusivamente arquivos de áudio no formato WAV.

## Estrutura do Arquivo WAV
 - O arquivo WAV consiste em um cabeçalho seguido pelos dados de áudio. O programa manipula apenas os dados de áudio, preservando o cabeçalho para garantir a integridade do arquivo de saída.

## Referências
Este projeto faz parte do curso CS50x da Universidade de Harvard.
