
print ("WELCOME TO THE GAME")

import random
nothing =input("please enter name:")
if nothing == "Hari":

        while True:
                play_again = input("continue? (Yes/No): ")  
                if play_again == "No":
                        break
                player_choice= input("Choose your play(Rock,Paper,Scissors):")
                possible_choice= ["Rock","Paper","Scissors"]
                computer_choice= random.choice(possible_choice)
                print(f"You chose {player_choice}, opponent chose {computer_choice}")

                if player_choice == computer_choice:
                        print(f"LOLL..,You both chose the same, Its a tie!!")

                elif player_choice == "Rock":
                        if computer_choice == "Scissors":
                                print(f"congrats,rock destroys scissors.YOU WIN!!")
                        else:
                                print(f"Sorry bruh,paper covers Rock,YOU LOSE!!")
                        
                elif player_choice == "Paper":
                        if computer_choice == "Rock":
                                print (f"congrats,Rock is destroyed.YOU WIN!!")
                        else:
                                print(f"Sorry bruh,Scissors cut paper,YOU LOSE!!")
                elif player_choice == "Scissors":
                        if computer_choice == "Paper":
                                print(f"congrats,Scissors cut paper.YOU WIN!!")
                        else:
                                print(f"Sorry bruh,Rock destroys scissors,YOU LOSE!!")
                
                play_again = input("one more match? (Yes/No): ")
                if play_again == "No":
                        break
else:
        print(f"Unauthorized permission")
        

