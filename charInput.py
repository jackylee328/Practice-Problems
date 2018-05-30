# 01 Character Input

name = input("What is your name? ")
age = input("How old are you? ")

year = 2018 + (100 - int(age))

copies = input("How many copies? ")

for i in range (0, int(copies)):
    print("You will turn 100 years old in " + str(year) + " years.")
