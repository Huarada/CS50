import math
# LEMBRANDO P AMANHA, PROVAVELMENTE MOD FUNCIONA DIFERENTE NESSE CARA
def main():

    scan_credit = input("Number: ")

    while not scan_credit.isdigit():
        scan_credit = input("Number: ")

    credit = int(scan_credit)

    div_count = 1
    first_num = credit
    two_numbers = credit
    sum = 0
    mod = 0

    while (first_num >= 10):  #this for will see all the numbers of credit, it iterates until it reaches the last number (first_num < 10)

        if(two_numbers >= 100):              #It stores the first two numbers

            two_numbers = math.floor(two_numbers / 10) # floor is necessary, when that code was translated from C, the previous language used the round logic from the int variables. That is not possible directly in Python, so we use the floor function
            #print("two numbers no ciclo ",div_count," vale ", two_numbers," e fisrt_num vale ", first_num)

        if(div_count % 2 == 0):              #Rule for the Rhull algorithm

            mod = first_num % 10

            if (2 * mod >= 10):

                mod = 2 * mod % 10
                sum = sum + 1 + mod

            else : sum = sum + 2*mod

        else:

            mod = first_num % 10
            sum = sum + mod


        first_num = math.floor(first_num/10)
        div_count += 1





#//////////// we need to repeate the conditionals for the case first num < 0 bcz it exits the loop before counting this case

    if( div_count % 2 == 0):

        mod = first_num % 10
        if(2* mod >= 10):

            mod = 2* mod % 10
            sum = sum + 1 + mod


        else: sum = sum + 2* mod

    else:

        mod = first_num % 10
        sum = sum + mod


#//////////////////////////////////////////////////////////////////////////





    if(sum % 10 == 0):                                    #It will see all the possibilites of the credit card number

        if (div_count == 15 and ( two_numbers == 34 or two_numbers == 37)) :

            print("AMEX\n")


        elif ( div_count == 16 and (51 <= two_numbers and two_numbers <= 55)):

            print("MASTERCARD\n")

        elif ((div_count == 16 or div_count == 13) and first_num == 4 ):

            print("VISA\n")

        else: print("INVALID\n")


    else: print("INVALID\n")

    #print("valor do primeiro algarismo detectado: ", first_num)
    #print("valor do ultimo algarismo detectado eh : ", two_numbers)
    #print("numero de algarismos eh: ", div_count)
    #print("valor da soma eh: ", sum)
main()