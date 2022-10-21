# Number Memory Game

"""
Try remember as many numbers as possible, the average person can remember
7 digit numbers in their working memory at any given time.

Here you will be given a number to remember and difficulty will increase
incrementally as you progress through the game!
"""

# Imports
import random
import os, time
import colorama as c

# Starting set up
digits = ["1", "2", "3", "4", "5", "6", "7", "8", "9", "0"]
level = 1

# This is where the game starts
print(f"""{c.Fore.BLUE}{c.Style.BRIGHT}== NUMBER MEMORY GAME ==
{c.Style.RESET_ALL}
{c.Fore.CYAN}You will be shown a number for a short period of time.

Try remember it and then the game will ask you to enter 
the number you just saw. The number of digits in the 
number will increase as the game continues.

Good luck.""")

play = input(f"{c.Fore.MAGENTA}{c.Style.BRIGHT}\nPress [enter] to start... ")
os.system("clear")

while play == "":
  num = ""
  deco = ""

  for i in range(level):
    x = random.choice(digits)
    num += x

    deco += "="

  print(f"""{c.Fore.CYAN}{deco}\n{c.Style.BRIGHT}{c.Fore.WHITE}{num}\n{c.Fore.CYAN}{deco}""")
  time.sleep(level / 2)
  os.system("clear")

  ans = input(f"{c.Style.NORMAL}{c.Fore.CYAN}What was the number?{c.Fore.BLUE}\nAnswer:{c.Fore.WHITE} ")
  os.system("clear")

  print(f"""{c.Fore.WHITE}
    Your answer was: {c.Style.BRIGHT}{c.Fore.MAGENTA}{ans}{c.Style.RESET_ALL}
    The number was: {c.Style.BRIGHT}{c.Fore.MAGENTA}{num}{c.Style.RESET_ALL}
    """)
  
  if ans == num:
    print(f"Your answer is {c.Fore.GREEN}{c.Style.BRIGHT}correct.{c.Style.RESET_ALL} Level increased!")
    
    level += 1

    print(f"You are now {c.Style.BRIGHT}{c.Fore.BLUE}Level {level}.")
  else:
    print(f"Your answer is {c.Fore.RED}{c.Style.BRIGHT}wrong{c.Style.RESET_ALL}.")
    print(f"You reached {c.Style.BRIGHT}{c.Fore.BLUE}Level {level}.")
    break

  play = input(f"{c.Fore.MAGENTA}{c.Style.BRIGHT}\nPress [enter] to continue... ")
  os.system("clear")

# End
print(f"{c.Fore.MAGENTA}{c.Style.NORMAL}\nThe game has ended.")
