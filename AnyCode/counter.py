a = int(input())

if a > 0:
    while a >= 0:
        print(a)
        a-= 1
elif a < 0:
    while a <= 0:
        print(a)
        a+= 1
else:
    print(a)