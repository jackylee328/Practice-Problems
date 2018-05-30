# Odd Or Even

num = input("Give me a number: ")
check = input("Give me another number: ")

intNum = int(num)
              
if (intNum % 4 == 0):
    print("divisible by 4!")
elif (intNum % 2 == 0):
    print("even number")
else:
    print("odd number")

if (intNum % int(check) == 0):
    print("check divides evenly into num")
else:
    print("better luck next time")
