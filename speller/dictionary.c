// Implements a dictionary's functionality

#include <ctype.h>
#include <stdbool.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "dictionary.h"

// Represents a node in a hash table
typedef struct node
{
    char word[LENGTH + 1];
    struct node *next;
}
node;

// TODO: Choose number of buckets in hash table

const unsigned int N = 676;  //26*26

// Hash table
node *table[N];

// Returns true if word is in dictionary, else false
bool check(const char *word)
{
    int index = hash(word);
    //printf("index: %i \n", index);
    node *cursorw = table[index]->next;




    char *lcase = malloc(sizeof(char*) *strlen(word));

    for(int i = 0; i <= strlen(word); i++)
    {
        lcase[i] = tolower(word[i]);
    }
    //printf("palavra no lcase: %s", lcase);

    while(cursorw != NULL)
    {
        if(strcmp(lcase,cursorw->word) == 0 )
        {
           //printf("encontrou a palavra %s, no indice: %i \n", lcase ,in//printf("confirmacao de palavra %s \n", cursorw ->word);
            return true;
        }
        //printf("deu errado pq a palavra no cursor era: %s, e eu queria %s \n", cursorw ->word, lcase);
        cursorw = cursorw->next;
    }


/*//PRINTS QUE DEVERAO SER APAGADOS DEPOIS/////////////////
    printf("varreu lista mas n encontrou palavra %s, ", word);
    printf("termos do indice procurado: ");
    cursorw = table[index] ->next;
    while(cursorw != NULL)
    {
        printf("%s , ",cursorw->word);
        cursorw = cursorw->next;
    }
    printf("\n");
/////////////////////////////////////////////////////////////////// */
    return false;
}

// Hashes word to a number
unsigned int hash(const char *word)
{

// we want to make an table that goes from aa to zz, so that initially we can search using the first 2 letters of a word, then using the pointers next to find the correct word
// so we need the index of the 2 words in alphanum to make that hash table possible


int wordindex = 0;
if(strlen(word) == 0)
{
    return 0;
}
else if (strlen(word) == 1)
{
    wordindex = (toupper(word[0]) - 'A');
}
else
{
    wordindex = 26*(toupper(word[0]) - 'A') + (toupper(word[1]) - 'A');

}
return wordindex;
}

// Loads dictionary into memory, returning true if successful, else false
bool load(const char *dictionary)
{
    // TODO
    char name[LENGTH + 1];


    FILE *fp = fopen(dictionary,"r");  //alterar depois

    //printf("file abriu");


    if(fp == NULL)
    {
        fclose(fp);
        printf("file doesn t exist");
        return false;
    }

    if (!fp)
    {
        printf("Error opening file!\n");
        fclose(fp);
        return false;
    }

    //printf("teste funcionou");

    int index = 0;

    for(int i = 0; i < N; i++)
    {
        table[i] = (node*)malloc(sizeof(node));
        strcpy(table[i]->word, "//");  //word inicial da tabela não eh necessario, inicializado so para protecao
        //printf("letra do primeiro cursor: %s", table[index]-> next -> word);

    }

    node *cursor =  table[index];   //itiniallize pointer
    bool allocated = false;


    while(fscanf(fp,"%s", name) == 1)
    {

        //---------------------------------------------------------------------------------------
        //                                DEFINICAO DO INDEX
        //---------------------------------------------------------------------------------------
        if(strlen(name) == 0)
        {
            index = 0;
        }
        else if (strlen(name) == 1)
        {
            index = (toupper(name[0]) - 'A');
        }
        else
        {
            index = 26*(toupper(name[0]) - 'A') + (toupper(name[1]) - 'A');
        }
        //-----------------------------------------------------------------------

        //printf("palavra da vez %s \n",name);

        //printf("letra do primeiro cursor: %s", table[index]-> next->word);

        cursor =  table[index];
        allocated = false;



        while(!allocated)  //repeats while the nexts pointers are being utilized
        {

           if(cursor->next == NULL)            //if next doesn t point to anything, it means that there s a free space in the hash table to allocate the word, else cursor needs to walk through the nodes
            {

                node *new = malloc(sizeof(node)); //initializing new node for hash table
                strcpy(new->word, name);
                new->next = NULL;

                cursor->next = new;
                cursor = cursor->next;
                allocated = true;            //it allocates the word and exit the loop
                //printf("word: %s no index: %i \n",cursor->word, index);


            }
            else
            {
                cursor = cursor->next;

            }
        }

    }

//Apenas pra print, pode retirar depois
/*

    printf("verificação pra saber se a tabela hash saiu certo\n");
    printf("palavra 0: %s \n", table[index]->word);
    for(int i = 0; i < N; i++)
    {   if(table[i]->next != NULL)
        {
            printf("palavra 1: %s no index : %i \n", table[i]->next->word, i);
        }
    }
    printf("palavra 1: %s \n", table[52]->next->word);
    //printf("palavra 2: %s \n", table[52]->next->next->word);

*/


    fclose(fp);

    return true;
}

// Returns number of words in dictionary if loaded, else 0 if not yet loaded
unsigned int size(void)
{
    int c = 0;
    for(int i = 0; i< N; i++ )
    {
        if(table[i]->next != NULL) //it means that at least one part of table was loaded and adds one letter to counter
        {
            c += 1;
        }
    }

    return c;

}

// Unloads dictionary from memory, returning true if successful, else false
bool unload(void)
{
    for(int i = 0; i < N; i++)
    {
        free(table[i]);
    }
    return true;
}
