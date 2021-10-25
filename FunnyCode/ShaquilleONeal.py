#How tall are you in Shaqs?

print("The ex-basketball player Shaquille O'Neal is 216cm tall. How tall are you in Shaqs?")
height = int(input("Insert your height in centimeters (ex.: 170): "))
ratio = height/216
if ratio != 1:
    print("You're approximately {:.2f} Shaqs tall.".format(ratio))
else:
    print("You're exactly 1 Shaq tall. Are you secretely Shaquille O'Neal????")