



def count_letters(text):

    letter = "a"
    counter = 0
    i = 0

    while( i < len(text)):

        letter = text[i]

        if (letter.isalnum()):   #//it counts   letters in lower and upper case
             counter += 1

        i += 1

    return counter




def count_words(text):

    conta = 0
    i = 0

    for i in range(len(text)):

        if (text[i] == ' '):

            conta += 1

        i += 1


    conta += 1 #//bcz the last letter doesn't have a blank space after it


    return conta


def count_sentences(text):

    contagem = 0

    for i in range (len(text)):

        if (text[i] == '.' or text[i] == '!' or text[i] == '?'):   # //it counts sentences that finish with . ! or ?

            contagem += 1


    return contagem



def main():

    text = input("Text: ")

    letters = count_letters(text)
    words = count_words(text)
    sentences = count_sentences(text)
    #print("letters: ", letters)
    #print("words: ", words)
    #print("sentences: ", sentences)

    L = round((100* letters) / words)             #//it needs to be float to avoid approximation errors

    s = round((100* sentences)/words)
    #print("valor verdadeiro de s é: ",((100* sentences)/words))

    index = round(0.0588 * L - 0.296 * s - 15.8)

    #print("valor do index: ", index, " e valor do L eh ", L, "e valor de s eh: ", s)
    if( index <1):

        print("Before Grade 1")

    elif (index >= 16):

        print("Grade 16+")

    else:

        print("Grade ", index)





main ()