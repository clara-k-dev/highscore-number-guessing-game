#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>

int main(){
	
	//Setup
	srand(time(nullptr));
	int secret = 1; 
	int userchoise = 1;
	int difficulty = 0;
	int guess = 0;
	int attempts = 0;
	bool docontinue = true;
	int maxTries = 10;
	
	const int DEFAULT_HIGHSCORE = 100;
	int bestScore = DEFAULT_HIGHSCORE;
	std::ifstream myfile("highscore.txt");
	if (myfile.is_open()){
		myfile >> bestScore;
		myfile.close();
	}
	
	//Game
	while(docontinue){
	attempts = 0;
	
	//Preselection
	std::cout << "Select a difficulty (1=easy, 2=normal, 3=difficult).\n";
	std::cin >> difficulty;	

	switch(difficulty){
		case 1:
		secret = rand() % 10 + 1;
		std::cout<<"I've picked a number between 1 and 10. Can you guess, which it is? \n";
		break;
		case 2:
		secret = rand() % 100 + 1;
		std::cout<<"I've picked a number between 1 and 100. Can you guess, which it is? \n";
		break;
		case 3:
		secret = rand() % 1000 + 1;
		std::cout<<"I've picked a number between 1 and 1000. Can you guess, which it is? \n";
		break;
		default:
		std::cout<<"Invalid difficulty. Terminating game.";
		std::cout << "\nPress Enter to exit...";
		std::cin.ignore();
		std::cin.get();
		return 0;
	}
	
	//Gameplay
	for(int i=0;i<maxTries;i++){
	std::cout<<"Guess.\n";
	std::cin>> guess;
	attempts++;
	
	if(guess<secret) {
		std::cout<<"Too small.\n";
	}
	
	else if(guess>secret){
		std::cout<<"Too big.\n";
	}
	
	//Winning condition
	else if (guess==secret){
		std::cout<<"Great! That was the right one!\n";
		std::cout<< "You've needed "<< attempts <<" attempt(s) to win the game on difficulty "<< difficulty<<".\n";
		if (attempts < bestScore){
			std::cout<< "Congratulations! You have a new highscore!\nPrevious highscore: "<< bestScore << " attempt(s).\nNew highscore: "<< attempts<<" attempt(s).\n";
			
			std::ofstream myfile("highscore.txt");
			if (myfile.is_open()){
				myfile << attempts;
				myfile.close();
			}
		}
		else{
			std::cout<<"Current highscore is "<< bestScore<<" attempt(s).\n";
		}
			std::cout << "\nPress Enter to exit...";
			std::cin.ignore();
			std::cin.get();
			return 0;
	}
		
	}
	//Gameover
	std::cout<<"Gameover\nYou've exceeded the maximal number of allowed attempts.\nRetry?(1=yes, 0=no)\n";
	std::cin>>userchoise;
	if ( userchoise == 0){
		break;
		}
		else if(userchoise == 1){
			continue;
		}
		else {
			std::cout<<"Invalid choice. Terminating game.";
			std::cout << "\nPress Enter to exit...";
			std::cin.ignore();
			std::cin.get();
			return 0;
		}
	}
	
	std::cout<<"See you next time!";
	std::cout << "\nPress Enter to exit...";
	std::cin.ignore();
	std::cin.get();
	return 0;
}
