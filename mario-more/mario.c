#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //initialize variables
    int heigh = get_int("heigh: ");
    int i = 1;
    int j = 0;
    int line = 1;
    bool b = (0 >= heigh) || (heigh > 8);


    //while the value of h is not acceptable, the program asks the question again
    while (b)
    {
        heigh = get_int("heigh: ");
        b = (0 >= heigh) || (heigh > 8);
    }



    while (i <= heigh)
    {

        while (line < heigh)      //this loop alligns the lines
        {
            printf(" ");
            line++;
        }

        while (j < i)             //this loop writes the # of the left side of the pipe
        {
            printf("#");
            j++;
        }
        printf("  ");            //this printf creates a hole in the pipe
        j = 0;

        while (j < i)             //this loop alligns writes the # of the right side
        {
            printf("#");
            j++;
        }
        printf("\n");
        i++;

        j = 0;
        line = i;
    }

}

