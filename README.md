# Highscore Number Guessing Game (C++)



## Overview



A simple console-based number guessing game implemented in C++.
The player tries to guess a randomly generated number within a limited number of attempts.
The game tracks the number of attempts and maintains a persistent highscore across sessions using a text file.

This project demonstrates:



* Basic C++ programming concepts (variables, loops, conditionals)
* Functions and modular code structure
* File input/output for persistent data
* User interaction through console input/output



---



## Features



* Choose difficulty level (Easy / Medium / Hard)
* Random number generation for the target number
* Attempt counter with maximum attempts
* Persistent highscore stored in `highscore.txt`
* Option to continue or exit the game at any time
* Clear and user-friendly console output



---



## How to Run



### Prerequisites



* C++ compiler installed (e.g., MinGW on Windows, g++ on Linux/macOS)
* Basic knowledge of running console applications

### 

### Compilation



Open a terminal in the project directory and run:



```bash
g++ src/main.cpp -o highscore.exe   # Windows

g++ src/main.cpp -o highscore       # Linux/macOS
```



### Execution



Run the compiled executable:



```bash
highscore.exe       # Windows

./highscore.exe     # Linux/macOS
```



The game will prompt you to select a difficulty and start guessing.



---



## Example Gameplay



```text
Select a difficulty (1=easy, 2=normal, 3=difficult).

1

I've picked a number between 1 and 10. Can you guess, which it is?
Guess.

5

Too small.
Guess.

9

Great! That was the right one!
You've needed 2 attempt(s) to win the game on difficulty 1.
Congratulations! You have a new highscore!
Previous highscore: 4 attempt(s).
New highscore: 2 attempt(s).

Press Enter to exit...
```



---



## File Structure



highscore-number-guessing-game/

├─ src/

│  └─ main.cpp

├─ highscore.txt

├─ README.md

└─ .gitignore



---



## Future Improvements



* Implement a GUI version for better user experience
* Check user input for data type to avoid unexpected behavior of the program



---



## Author



Clara Karczewski

Email: karczewski.clara@gmail.com

GitHub: https://github.com/clara-k-dev

