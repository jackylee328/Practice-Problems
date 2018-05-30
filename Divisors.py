# 04 Divisors

num = input("Give me a number: ")

intNum = int(num)

for i in range(1, intNum+1):
    if (intNum % i == 0):
        print(str(i))
