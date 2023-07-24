


#include "helpers.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
// Convert image to grayscale
void grayscale(int height, int width, RGBTRIPLE image[height][width])
{
    BYTE mean = 0;

    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            mean = round((image[i][j].rgbtBlue + image[i][j].rgbtGreen + image[i][j].rgbtRed) /
                         3.0); // media para decidir o tom de cinza de cada pixel
            image[i][j].rgbtBlue = mean;
            image[i][j].rgbtGreen = mean;
            image[i][j].rgbtRed = mean;                   // caso todas as cores tenham mesmo valor, sera dada uma tonalidade de cinza ou branco
        }
    }

    return;
}

// Reflect image horizontally
void reflect(int height, int width, RGBTRIPLE image[height][width])
{
    RGBTRIPLE  firsttemp;
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < round(width / 2.0); j++)
        {
            firsttemp =  image[i][j];
            image[i][j] = image[i][width - j - 1];
            image[i][width - j - 1] = firsttemp;  //inverte horizontalmente em cada linha i de pixels


        }
    }
    return;
}

// Blur image
void blur(int height, int width, RGBTRIPLE image[height][width])
{
    RGBTRIPLE imagetemp[height][width];

    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width ; j++)
        {
            imagetemp[i][j] = image[i][j];
        }
    }


    for (int i = 0; i < height ; i++)
    {
        for (int j = 0; j < width; j++)
        {
             if (i == 0)   // se estiver na primeira linha a contagem será diferente
            {
                if (j == 0)                                               //está na quina superior esquerda
                {
                    image[i][j].rgbtBlue = round((imagetemp[i][j].rgbtBlue + imagetemp[i][j + 1].rgbtBlue  + imagetemp[i + 1][j].rgbtBlue + imagetemp[i
                                                  + 1][j + 1].rgbtBlue) / 4.0);
                    image[i][j].rgbtGreen = round((imagetemp[i][j].rgbtGreen + imagetemp[i][j + 1].rgbtGreen  + imagetemp[i + 1][j].rgbtGreen +
                                                   imagetemp[i + 1][j + 1].rgbtGreen) / 4.0);
                    image[i][j].rgbtRed = round((imagetemp[i][j].rgbtRed + imagetemp[i][j + 1].rgbtRed  + imagetemp[i + 1][j].rgbtRed + imagetemp[i +
                                                 1][j + 1].rgbtRed) / 4.0);
                }
                else if (j == width - 1)                                //esta na quina superior direita
                {
                    image[i][j].rgbtBlue = round((imagetemp[i][j].rgbtBlue + imagetemp[i][j - 1].rgbtBlue  + imagetemp[i + 1][j - 1].rgbtBlue +
                                                  imagetemp[i + 1][j].rgbtBlue) / 4.0);
                    image[i][j].rgbtGreen = round((imagetemp[i][j].rgbtGreen + imagetemp[i][j - 1].rgbtGreen  + imagetemp[i + 1][j - 1].rgbtGreen +
                                                   imagetemp[i + 1][j].rgbtGreen) / 4.0);
                    image[i][j].rgbtRed = round((imagetemp[i][j].rgbtRed + imagetemp[i][j - 1].rgbtRed  + imagetemp[i + 1][j].rgbtRed + imagetemp[i +
                                                 1][j - 1].rgbtRed) / 4.0) ;
                }
                else
                {
                                                      //percorre a primeira linha
                    image[i][j].rgbtBlue = round((imagetemp[i][j - 1].rgbtBlue + imagetemp[i][j].rgbtBlue + imagetemp[i][j + 1].rgbtBlue + imagetemp[i +
                                                  1][j - 1].rgbtBlue + imagetemp[i + 1][j].rgbtBlue + imagetemp[i + 1][j + 1].rgbtBlue) / 6.0);
                    image[i][j].rgbtGreen = round((imagetemp[i][j - 1].rgbtGreen + imagetemp[i][j].rgbtGreen + imagetemp[i][j + 1].rgbtGreen +
                                                   imagetemp[i + 1][j - 1].rgbtGreen + imagetemp[i + 1][j].rgbtGreen + imagetemp[i + 1][j + 1].rgbtGreen) / 6.0);
                    image[i][j].rgbtRed = round((imagetemp[i][j - 1].rgbtRed + imagetemp[i][j].rgbtRed + imagetemp[i][j + 1].rgbtRed + imagetemp[i +
                                                 1][j - 1].rgbtRed + imagetemp[i + 1][j].rgbtRed + imagetemp[i + 1][j + 1].rgbtRed) / 6.0);
                }

            }

            else if (i == height - 1)  // se estiver na ultima linha a contagem será diferente
            {
                if (j == 0)
                {
                    image[i][j].rgbtBlue = round((imagetemp[i][j].rgbtBlue + imagetemp[i][j + 1].rgbtBlue  + imagetemp[i - 1][j].rgbtBlue + imagetemp[i
                                                  - 1][j + 1].rgbtBlue) / 4.0);
                    image[i][j].rgbtGreen = round((imagetemp[i][j].rgbtGreen + imagetemp[i][j + 1].rgbtGreen  + imagetemp[i - 1][j].rgbtGreen +
                                                   imagetemp[i - 1][j + 1].rgbtGreen) / 4.0);
                    image[i][j].rgbtRed = round((imagetemp[i][j].rgbtRed + imagetemp[i][j + 1].rgbtRed  + imagetemp[i - 1][j].rgbtRed + imagetemp[i -
                                                 1][j + 1].rgbtRed) / 4.0);
                }
                else if (j == width - 1)
                {
                    image[i][j].rgbtBlue = round((imagetemp[i][j].rgbtBlue + imagetemp[i][j - 1].rgbtBlue  + imagetemp[i - 1][j - 1].rgbtBlue +
                                                  imagetemp[i - 1][j].rgbtBlue) / 4.0);
                    image[i][j].rgbtGreen = round((imagetemp[i][j].rgbtGreen + imagetemp[i][j - 1].rgbtGreen  + imagetemp[i - 1][j - 1].rgbtGreen +
                                                   imagetemp[i - 1][j].rgbtGreen) / 4.0);
                    image[i][j].rgbtRed = round((imagetemp[i][j].rgbtRed + imagetemp[i][j - 1].rgbtRed  + imagetemp[i - 1][j].rgbtRed + imagetemp[i -
                                                 1][j - 1].rgbtRed) / 4.0);
                }

                else
                {
                    image[i][j].rgbtBlue = round((imagetemp[i][j - 1].rgbtBlue + imagetemp[i][j].rgbtBlue + imagetemp[i][j + 1].rgbtBlue + imagetemp[i -
                                                  1][j - 1].rgbtBlue + imagetemp[i - 1][j].rgbtBlue + imagetemp[i - 1][j + 1].rgbtBlue) / 6.0);
                    image[i][j].rgbtGreen = round((imagetemp[i][j - 1].rgbtGreen + imagetemp[i][j].rgbtGreen + imagetemp[i][j + 1].rgbtGreen +
                                                   imagetemp[i - 1][j - 1].rgbtGreen + imagetemp[i - 1][j].rgbtGreen + imagetemp[i - 1][j + 1].rgbtGreen) / 6.0);
                    image[i][j].rgbtRed = round((imagetemp[i][j - 1].rgbtRed + imagetemp[i][j].rgbtRed + imagetemp[i][j + 1].rgbtRed + imagetemp[i -
                                                 1][j - 1].rgbtRed + imagetemp[i - 1][j].rgbtRed + imagetemp[i - 1][j + 1].rgbtRed) / 6.0);
                }

            }

            //percorre a primeira coluna, note que as quinas ja foram computadas no primeiro metodo, e n tem como ser aqui por causa do else
            else if (j == 0)
            {
                image[i][j].rgbtBlue = round((imagetemp[i - 1][j].rgbtBlue + imagetemp[i - 1][j + 1].rgbtBlue + imagetemp[i][j].rgbtBlue +
                                              imagetemp[i][j + 1].rgbtBlue + imagetemp[i + 1][j].rgbtBlue + imagetemp[i + 1][j + 1].rgbtBlue) / 6.0);
                image[i][j].rgbtGreen = round((imagetemp[i - 1][j].rgbtGreen + imagetemp[i - 1][j + 1].rgbtGreen + imagetemp[i][j].rgbtGreen +
                                               imagetemp[i][j + 1].rgbtGreen + imagetemp[i + 1][j].rgbtGreen + imagetemp[i + 1][j + 1].rgbtGreen) / 6.0);
                image[i][j].rgbtRed = round((imagetemp[i - 1][j].rgbtRed + imagetemp[i - 1][j + 1].rgbtRed + imagetemp[i][j].rgbtRed +
                                             imagetemp[i][j + 1].rgbtRed + imagetemp[i + 1][j].rgbtRed + imagetemp[i + 1][j + 1].rgbtRed) / 6.0);
            }

            else if (j == width - 1)
            {
                image[i][j].rgbtBlue = round((imagetemp[i - 1][j - 1].rgbtBlue + imagetemp[i - 1][j].rgbtBlue + imagetemp[i][j - 1].rgbtBlue +
                                              imagetemp[i][j].rgbtBlue + imagetemp[i + 1][j - 1].rgbtBlue + imagetemp[i + 1][j].rgbtBlue) / 6.0);
                image[i][j].rgbtGreen = round((imagetemp[i - 1][j - 1].rgbtGreen + imagetemp[i - 1][j].rgbtGreen + imagetemp[i][j - 1].rgbtGreen +
                                               imagetemp[i][j].rgbtGreen + imagetemp[i + 1][j - 1].rgbtGreen + imagetemp[i + 1][j].rgbtGreen) / 6.0);
                image[i][j].rgbtRed = round((imagetemp[i - 1][j - 1].rgbtRed + imagetemp[i - 1][j].rgbtRed + imagetemp[i][j - 1].rgbtRed +
                                             imagetemp[i][j].rgbtRed + imagetemp[i + 1][j - 1].rgbtRed + imagetemp[i + 1][j].rgbtRed) / 6.0);
            }



            else
            {
                image[i][j].rgbtBlue = round((imagetemp[i - 1][j - 1].rgbtBlue + imagetemp[i - 1][j].rgbtBlue + imagetemp[i - 1][j + 1].rgbtBlue +
                                              imagetemp[i][j - 1].rgbtBlue + imagetemp[i][j].rgbtBlue + imagetemp[i][j + 1].rgbtBlue + imagetemp[i + 1][j - 1].rgbtBlue +
                                              imagetemp[i + 1][j].rgbtBlue + imagetemp[i + 1][j + 1].rgbtBlue) / 9.0);
                image[i][j].rgbtGreen = round((imagetemp[i - 1][j - 1].rgbtGreen + imagetemp[i - 1][j].rgbtGreen + imagetemp[i - 1][j + 1].rgbtGreen
                                               + imagetemp[i][j - 1].rgbtGreen + imagetemp[i][j].rgbtGreen + imagetemp[i][j + 1].rgbtGreen + imagetemp[i + 1][j - 1].rgbtGreen +
                                               imagetemp[i + 1][j].rgbtGreen + imagetemp[i + 1][j + 1].rgbtGreen) / 9.0);
                image[i][j].rgbtRed = round((imagetemp[i - 1][j - 1].rgbtRed + imagetemp[i - 1][j].rgbtRed + imagetemp[i - 1][j + 1].rgbtRed +
                                             imagetemp[i][j - 1].rgbtRed + imagetemp[i][j].rgbtRed + imagetemp[i][j + 1].rgbtRed + imagetemp[i + 1][j - 1].rgbtRed + imagetemp[i
                                                     + 1][j].rgbtRed + imagetemp[i + 1][j + 1].rgbtRed) / 9.0);
            }


        }
    }

    return;
}

// Detect edges
void edges(int height, int width, RGBTRIPLE image[height][width])
{

    int Gx[3][3] = {{-1, 0, 1}, {-2, 0, 2}, {-1, 0, 1}};
    int Gy[3][3] = {{-1, -2, -1}, { 0, 0, 0}, {1, 2, 1}};
    int Gxred, Gyred, Gxgreen, Gygreen, Gxblue, Gyblue, Gfinalred, Gfinalblue, Gfinalgreen  = 0;
    int Countx, County = 0;



    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)     //esses for são pra varrer a imagem em cada pixel
        {
            for (int w = 0; w <= 2; w++)
            {
                for (int z = 0 ; z <= 2; z++)  //esses for são para fazer o calculo da soma ponderada de Gx e Gy
                {
                    if (w + i >= 0 || w + i < width)               //já protege a lógica dos termos nos cantos de cima e baixo
                    {
                        Gxred = Gxred + Gx[w][z] * image[i + w][j + z].rgbtRed;
                        Gxgreen = Gxgreen + Gx[w][z] * image[i + w][j + z].rgbtGreen;
                        Gxblue = Gxblue + Gx[w][z] * image[i + w][j + z].rgbtBlue;
                        Countx ++;


                    }

                    if (z + j >= 0 || z + j < width)
                    {
                        Gyred = Gyred + Gy[w][z] * image[i + w][j + z].rgbtRed;
                        Gygreen = Gygreen + Gy[w][z] * image[i + w][j + z].rgbtGreen; //necessario colocar -1 em cada termo de image[][]
                        Gyblue = Gyblue + Gy[w][z] * image[i + w][j + z].rgbtBlue;
                        County++;
                    }
                }
            }

            //printf("Gxred = %i, Gyred = %i", Gxred, Gyred );

            Gfinalred = round(sqrt(pow((Gxred / Countx), 2) + pow((Gyred / County), 2)));
            Gfinalblue = round(sqrt(pow((Gxblue / Countx), 2) + pow((Gyblue / County), 2)));
            Gfinalgreen = round(sqrt(pow((Gxgreen / Countx), 2) + pow((Gygreen / County), 2)));
            // printf("Gfinalred[%i][%i] = %i, Gfinalblue = %i, Gfinalgreen = %i ", i,j, Gfinalred, Gfinalred, Gfinalgreen );
            if (Gfinalred > 255)
            {
                image[i][j].rgbtRed = 255;
            }
            else
            {
                image[i][j].rgbtRed = Gfinalred;
            }

            if (Gfinalblue > 255)
            {
                image[i][j].rgbtBlue = 255;
            }
            else
            {
                image[i][j].rgbtBlue = Gfinalred;
            }

            if (Gfinalgreen > 255)
            {
                image[i][j].rgbtGreen = 255;
            }
            else
            {
                image[i][j].rgbtGreen = Gfinalred;
            }

            Countx = 0;
            County = 0;
            Gfinalred = 0;
            Gfinalblue = 0;
            Gfinalgreen = 0;
            Gxred = 0;
            Gxblue = 0;
            Gxgreen = 0;
            Gyred = 0;
            Gyblue = 0;
            Gygreen = 0;

        }
    }


    return;
}

