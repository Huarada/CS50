#include <cs50.h>
#include <stdio.h>
#include <ctype.h>

int main(int argc, string argv[])  //argc is the number of terms iputed on the terminal, with 1 indicating blank. argv is the key stored
{
    string key = argv[1];
    int len = 0;
    if (argc == 2)
    {
        for (int j = 0; (int) key[j] != 0; j++)        //getting the lenght of the keyword and if key is valid
        {
            len++;

            for (int z = 0; (int) key[z] != 0; z++)
            {
                if (key[z] == key[j] && z != j)
                {
                    printf("invalid key \n");
                    return 1;

                }
            }

            if (((33 <= (int) key[j] && (int) key[j] <= 64) || (91 <= (int) key[j] && (int) key[j] <= 96) || (123 <= (int) key[j]
                    && (int) key[j] <= 127)) && (int) key[j] != 0)  //ASCII invalid keys
            {
                printf("invalid key \n");
                return 1;

            }

        }

        if (len == 26)
        {
            string plain = get_string("plaintext:  ");

            for (int i = 0; (int) plain[i] != 0 ; i++)
            {
                if (islower(plain[i]))                        //writes the cipher in lower case
                {

                    plain[i] = (char) tolower(key[((int) plain[i]) - 97]) ;
                }

                else if (isupper(plain[i]))                  //else wirtes the cipher in upper case
                {
                    plain[i] = (char) toupper(key[((int) plain[i]) - 65]) ;
                }
                // if it fails in both conditionals, wirte the plain - numbers or spaces
            }

            printf("ciphertext: %s\n", plain);

        }

        else
        {
            printf("formato errado \n");
            return 1;
        }

        return 0;
    }

    else
    {
        return 1;
    }
}