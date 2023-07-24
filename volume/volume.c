// Modifies the volume of an audio file

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

// Number of bytes in .wav header
const int HEADER_SIZE = 44;

int main(int argc, char *argv[])
{
    // Check command-line arguments
    if (argc != 4)
    {
        printf("Usage: ./volume input.wav output.wav factor\n");
        return 1;
    }

    // Open files and determine scaling factor
    FILE *input = fopen(argv[1], "r");
    if (input == NULL)
    {
        printf("Could not open file.\n");
        return 1;
    }

    FILE *output = fopen(argv[2], "w");
    if (output == NULL)
    {
        printf("Could not open file.\n");
        return 1;
    }

    float factor = atof(argv[3]);

    // TODO: Copy header from input file to output file

    uint8_t header[44];
    int16_t buffer;

    int debug = fread(header, 1, 44, input);  //leitura do header
    long write = 0;


    write = fwrite(header, 1, 44, output);





    // TODO: Read samples from input file and write updated data to output file

    debug = fread(&buffer, 2, 1, input);
    for(int i = 0; debug > 0; i++)
    {

        buffer = factor*buffer;                // using the factor to increment the volume of the audio file
        write = fwrite(&buffer, 2, 1, output);
        debug = fread(&buffer, 2, 1, input);

    }



    // Close files
    fclose(input);
    fclose(output);
}
