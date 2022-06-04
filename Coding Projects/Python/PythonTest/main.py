print("Welcome to the jams, jellies and preserves club!")
choice = input("Which package do you have? (A,B or C)\n")
choice = choice.lower()
if choice == "a":
    print("Your package includes: \n 2 Jams per month, with each jam costing $5\n This package costs $8/month")
    purchasedJams = int(input("How many jams did you purchase this month? \n"))
    if purchasedJams <= 2:
        print("You only owe the monthly fee of $8!")
    else:
        purchasedJams -=2
        purchasedJams *=5
        print("You owe the monthly fee of $8 + a fee of $",purchasedJams,"\nThis is a total of $",purchasedJams+8)
if choice == "b":
    print("Your package includes: \n 4 Jams per month, with each jam costing $4\n This package costs $12/month")
    purchasedJams = int(input("How many jams did you purchase this month? \n"))
    if purchasedJams <= 4:
        print("You only owe the monthly fee of $12!")
    else:
        purchasedJams -=4
        purchasedJams *=4
        print("You owe the monthly fee of $12 + a fee of $",purchasedJams,"\nThis is a total of $",purchasedJams+12)
if choice == "c":
    print("Your package includes: \n 6 Jams per month, with each jam costing $3\n This package costs $15/month")
    purchasedJams = int(input("How many jams did you purchase this month? \n"))
    if purchasedJams <= 6:
        print("You only owe the monthly fee of $15!")
    else:
        purchasedJams -=6
        purchasedJams *=3
        print("You owe the monthly fee of $15 + a fee of $",purchasedJams,"\nThis is a total of $",purchasedJams+15)
print("Thanks for visiting! See you again soon!")
