#include <cs50.h>
#include <stdio.h>
#include <math.h>

int count_letters(string text);
int count_words(string text);

int count_sentences(string text);

int main(void)
{
    string text = get_string("Text:");

    int letters = count_letters(text);
    int words = count_words(text);
    int sentences = count_sentences(text);

    float L = (100* letters) / words ;             //it needs to be float to avoid approximation errors

    float s = (100* sentences)/words ;

    int index = round(0.0588 * L - 0.296 * s - 15.8);

    //printf("valor do letters de foi de %int, valor de words de %d e valor de sentences de %d \n",letters,words,sentences);
    //printf("valor do L foi de %f, valor de s de %f e valor de index de %d \n",L,s,index);

    if( index <1)
    {
        printf("Before Grade 1\n");
    }
    else if (index >= 16)
    {
        printf("Grade 16+\n");

    }
    else
    {
        printf("Grade %i\n", index);
    }
    return 0;

}



int count_letters(string text)
{
    char letter = 'a';
    int counter = 0;

    for (int i = 0; (int) text[i] != 0; i++)
    {

        letter = text[i];


        if ((65 <= (int) letter && (int) letter <= 90) || (97 <= (int) letter && (int) letter <= 122))   //it counts   letters in lower and upper case
        {


             counter++;
        }
    }



    return counter;
}



int count_words(string text)
{
    char letra = 'a';
    int conta = 0;

    for (int i = 0; (int) text[i] != 0 ; i++)
    {

        letra = text[i];


        if (letra == ' ')
        {

            conta++;
        }
    }

    conta++;  //bcz the last letter doesn't have a blank space after it


    return (conta);
}



int count_sentences(string text)
{
    int contagem = 0;

    for (int i = 0; (int) text[i] != 0 ; i++)
    {
        if ((int) text[i] == 33 || (int) text[i] == 63 || (int) text[i] == 46)   //it counts sentences that finish wit . ! or ?
        {
            contagem++;
        }
    }


    return contagem;
}
