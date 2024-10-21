Este projeto implementa diversos filtros de processamento de imagens, comumente usados em softwares de edição de fotos. Os filtros incluem conversão para tons de cinza, reflexão, desfoque e detecção de bordas. O programa foi escrito em C e processa arquivos de imagem BMP.

## Funcionalidades

O programa inclui os seguintes filtros:

1. **Tons de Cinza (Grayscale)**:
   Converte a imagem para tons de cinza, calculando a média dos valores vermelho, verde e azul de cada pixel. Todos os três canais de cor são definidos para essa média, criando o efeito de tons de cinza.

2. **Reflexão (Reflect)**:
   Reflete a imagem horizontalmente, trocando os pixels ao longo do eixo vertical central.

3. **Desfoque (Blur)**:
   Aplica um efeito de desfoque à imagem. Isso é feito ao calcular a média dos valores de cor dos pixels vizinhos e aplicando essa média ao pixel.

4. **Detecção de Bordas (Edges)**:
   Detecta bordas na imagem usando o operador Sobel. O Sobel calcula o gradiente da imagem nas direções x e y, e usa esses gradientes para destacar as bordas.

## Arquivos

- **`helpers.c`**: Contém a implementação dos filtros. Cada filtro é aplicado à imagem nesse arquivo.
- **`helpers.h`**: Arquivo de cabeçalho que declara as funções usadas no `helpers.c`.
- **`Makefile`**: Contém as instruções para compilar o programa.

## Uso

1. Para compilar o programa, execute o seguinte comando:
   ```
   make filter
   ```

2. Para aplicar um filtro a uma imagem, use o seguinte comando:

```
./filter [nome_do_filtro] infile.bmp outfile.bmp
```
- nome_do_filtro: O filtro que você deseja aplicar. As opções são -g (grayscale) , -r (reflect) , -b (blur), ou -e (edges).
- infile.bmp: O arquivo BMP de entrada que será processado. Pode ser uma das opções dentro da pasta images
- outfile.bmp: O arquivo de saída onde a imagem processada será salva.


**Exemplo**
Para aplicar o filtro de grayscale a uma imagem:

```
./filter -g images/yard.bmp out.bmp
```

Detalhes dos Filtros
Tons de Cinza
Na função grayscale(), os valores de vermelho, verde e azul de cada pixel são calculados pela média, e o resultado é aplicado a cada canal de cor. Isso dá ao pixel uma tonalidade de cinza baseada no brilho original.

**Reflexão**
A função reflect() inverte a imagem horizontalmente, trocando os pixels do lado esquerdo com os do lado direito.

**Desfoque**
A função blur() aplica um desfoque calculando a média dos valores RGB de um pixel e seus vizinhos circundantes (até uma grade de 3x3 ao redor do pixel).

**Detecção de Bordas**
Em edges(), o operador Sobel é aplicado para detectar bordas na imagem. A função calcula o gradiente do brilho do pixel nas direções horizontal (Gx) e vertical (Gy), e então combina esses gradientes para determinar a intensidade das bordas.


   
