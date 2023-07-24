# TODO

sheight = input("Height: ")

while not sheight.isdigit():
    sheight = input("Height: ")

height = int(sheight)

hashtag = []
if(height not in range(1,9)):
    height = int(input("Height: "))


for i in range(1,height + 1):

    for k in range(height - i):
        hashtag.append(" ")

    for j in range(i):
        hashtag.append("#")

    hashtag.append("  ")


    for j in range(i):
        hashtag.append("#")

    #printing
    for z in hashtag:
        print(z, end = '')
    print("")

    hashtag = []
