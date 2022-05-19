import random
guess=0
sumOfGuesses = 0
choice = input('Would you like easy, hard or NIGHTMARE?\n')
if choice.lower().startswith('e'):
    randNum = random.randint(1,10)
    while guess != randNum:
        guess = int(input('Please enter a number between 1-10\n'))
        if guess>randNum:
            print('Lower!')

        elif guess<randNum:
            print('Higher!')

        sumOfGuesses+=1
elif choice.lower().startswith('h'):
    randNum = random.randint(1,100)
    while guess != randNum:
        guess = int(input('Please enter a number between 1-100\n'))
        if guess>randNum:
            print('Lower!')

        elif guess<randNum:
            print('Higher!')
        sumOfGuesses+=1
elif choice.lower().startswith('n'):
    randNum = random.randint(1,1000)
    while guess != randNum:
        guess = int(input('Please enter a number between 1-1000\n'))
        if guess>randNum:
            print('Lower!')

        elif guess<randNum:
            print('Higher!')
        sumOfGuesses+=1

print('You found the number in',sumOfGuesses,"tries!")