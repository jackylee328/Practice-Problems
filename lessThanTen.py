# 03 List Less Than Ten

a = [1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89]
my_list = [];
your_list = [];

for i in a:
    if i < 5:
        print(str(i))
        my_list.append(i)

for j in my_list:
    print(str(j))

num = input("Give me a number: ")

for i in a:
    if i < int(num):
        your_list.append(i)
