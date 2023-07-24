#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
int main(int argc, char *argv[])
{
    if ( argc != 2)                                   //protection against incorret use of the script, multiple inputs
    {
        printf("uso incorreto do codigo");
        return 1;
    }


    FILE *input = fopen(argv[1], "r");

    if (input == NULL)                              //protection if the program can't find the file
    {
        printf("arquivo nao encontrado.\n");
        return 1;
    }

    FILE *output = fopen("000.jpg", "w");
    char counterch[] = "0";
    char name[8] = "000.jpg";
    int detector = 0;
    int counter = 0;
    int dcounter = 0;
    int size = 255;
    uint8_t *sign;
    sign = (uint8_t *) malloc(size); // Mem. alloc. 4bytes , needed to reset the sign array after one loop



    while ( ( fread(sign, 1, 512, input ) == 512))     //this loop is used to read every byte of the archive before closing
    {

        for(int i = 0; i < 255 ; i++)                 //varre cada termo do bloco pra achar codigo JPG
        {
            if(  sign[i] == 0xff && sign[i+ 1] == 0xd8 && sign[i + 2] == 0xff && (sign[i +3] & 0xf0) == 0xe0 )
            {
                detector ++;
            }
        }

        if( detector == 2)
        {
            fclose(output);
            counter++;
            if(counter >9)
            {
                dcounter ++;
                counter =0;
            }
            name[1] = dcounter +'0';
            name[2]= counter +'0';

            /*
            printf("print funcionou");
            printf("abriu novo arquivo");
            printf(" %s",name);
            */

            *output = *fopen( name, "w");
            detector = 1;
        }

        if ( detector == 1)   // detector == 1 means that the code 1100 was found in another slot of memory, and we need to print the next slots as well to build an jpg
        {
            fwrite(sign, 1, 512, output);
        }

        memset(sign, 0, size); // Reset array
    }





    // Close files
    fclose(output);
    /*
    FILE *output2 = fopen("output2.jpg", "w");

    while (fread(sign, 1, 512, input ) == 512)
    {
        for(int i = 0; i <255 ; i++)                 //varre cada termo do bloco pra achar codigo 1100
        {

            if( sign[i] == 1 && sign[i+ 1] == 1 && sign[i + 2] == 1 && sign[i +3] == 0)
            {
                fwrite(sign, 1, 512, output);
            }

        }

        memset(sign, 0, size); // Reset array
    }

    fclose(output2);

    fclose(input);
    */
    return 0;


}