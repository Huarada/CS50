#include <cs50.h>
#include <stdio.h>

int main(void)
{
    long credit = get_long("Number:  \n");
    int  div_count = 1;
    long  first_num = credit;
    long  two_numbers = credit;
    int sum = 0;
    int mod = 0;

    for(int i = 0; first_num >= 10 ; i++)   //this for will see all the numbers of credit, it iterates until it reaches the last number (first_num < 10)
    {

        if(two_numbers >= 100){             //It stores the first two numbers

            two_numbers = two_numbers / 10;
            //printf("variavel two_numbers vale %li, e first_num vale %li no ciclo %i \n", two_numbers, first_num, div_count);
        }

        if(div_count % 2 == 0)              //Rule for the Rhull algorithm

        {
            mod = first_num % 10;
            if (2 * mod >= 10)
            {
                mod = 2 * mod % 10;
                sum = sum + 1 + mod;
            }

            else  sum = sum + 2* mod;

        }
        else
        {
            mod = first_num % 10;
            sum = sum + mod;
        }

        first_num = first_num/10;
        div_count ++;
    }

//////////// we need to repeate the conditionals for the case first num < 0 bcz it exits the loop before counting this case
    if( div_count % 2 == 0)
    {
        mod = first_num % 10;
        if(2* mod >= 10)
        {
            mod = 2* mod % 10;
            sum = sum + 1 + mod;
        }

        else sum = sum + 2* mod;
    }
    else
    {
        mod = first_num % 10;
        sum = sum + mod;
    }

//////////////////////////////////////////////////////////////////////////







    if(sum % 10 == 0)                                    //It will see all the possibilites of the credit card number
    {
        if(div_count == 15 && ( two_numbers == 34 || two_numbers == 37))
            {
                printf("AMEX\n");
            }

    else if( div_count == 16 && (51 <= two_numbers && two_numbers <= 55))
        {
            printf("MASTERCARD\n");
        }
    else if ((div_count == 16 || div_count == 13) && first_num == 4 )
        {
            printf("VISA\n");
        }
    else printf("INVALID\n");

    }
    else printf("INVALID\n");


/*printf("numero do primeiro digito eh: %ld \n",first_num);
printf("numero do segundo digito eh: %ld \n", two_numbers);
printf("numero de algatismos vistos eh: %i \n", div_count);
printf("valor da soma total eh: %i \n", sum); */
}