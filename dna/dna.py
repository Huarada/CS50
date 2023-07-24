import csv
import sys
import pandas as pd
import numpy as np

def main():
    str = []
    str_len = 0
    # TODO: Check for command-line usage
    if(len(sys.argv) != 3):
        return 1
    # TODO: Read database file into a variable
    data = pd.read_csv(sys.argv[1])

    #finds all necessary substrings from large/small csv
    for x in data.columns:
        if(x != 'name'):
            str.append(x)
            str_len += 1
    #initializing dictionary with correct set of substrings
    STR = {}
    for i in range(str_len):
        STR[str[i]] = 0


    # TODO: Read DNA sequence file into a variable
    #Importing string file
    #open text file in read mode
    dna_file = open(sys.argv[2], "r")

    #read whole file to a string
    dna_data = dna_file.read()

    #close file
    dna_file.close()


    # TODO: Find longest match of each STR in DNA sequence

    for name in STR:
        matches = longest_match(dna_data,name)
        STR[name] = matches

    #print(STR)
    # TODO: Check database for matching profiles

    name = data['name']
    data_clear = data.drop('name',axis = "columns")
    #print("dicionario foi: ", data_clear)

    find = False
    for i in range(len(data_clear)):
        data_dict = data_clear.iloc[i].to_dict()
        if(STR == data_dict):
            print(name[i])
            #print("data  eh: ",data_dict)
            find = True
            break
    if(not find):
       print("No match")


def longest_match(sequence, subsequence):

    """Returns length of longest run of subsequence in sequence."""


    # Initialize variables
    longest_run = 0
    subsequence_length = len(subsequence)
    sequence_length = len(sequence)

    # Check each character in sequence for most consecutive runs of subsequence
    for i in range(sequence_length):

        # Initialize count of consecutive runs
        count = 0

        # Check for a subsequence match in a "substring" (a subset of characters) within sequence
        # If a match, move substring to next potential match in sequence
        # Continue moving substring and checking for matches until out of consecutive matches
        while True:

            # Adjust substring start and end
            #each iteration gives the number of consecutive matches of one substring, then it breaks the True loop
            start = i + count * subsequence_length
            end = start + subsequence_length

            # If there is a match in the substring
            if sequence[start:end] == subsequence:
                count += 1

            # If there is no match in the substring
            else:
                break

        # Update most consecutive matches found
        longest_run = max(longest_run, count)

    # After checking for runs at each character in seqeuence, return longest run found
    return longest_run


main()
