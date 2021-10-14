"""
    program to reverse the given number by user
"""
num = int(input("Enter any integer : "))
rev = 0
while num != 0:
    rev = rev*10+(num % 10)
    num = num // 10

print(f"The reverse of the integer you provided is  : {rev}")
