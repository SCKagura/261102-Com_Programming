#include<iostream>
#include<string>
#include <ctime>
using namespace std;

string cardNames[] = {"","A","2","3","4","5","6","7","8","9","10","J","Q","K"};
int cardScores[] = {0,1,2,3,4,5,6,7,8,9,10,10,10,10};

int drawCard(void){
	int random ;
	random = (rand()%13)+1 ;
	return random ;
}
int calScore(int x,int y,int z){

	int CS1=cardScores[x] ;
	int CS2=cardScores[y] ;
	int CS3=cardScores[z] ;
	int cs=(CS1+CS2+CS3)%10 ;
return cs ;
}

int findYugiAction(int s){	
	if(s == 9) return 2; 
	else if(s < 6) return 1;

	int rdyk ;
	    rdyk =(rand()%100)+1  ;
	    if (rdyk>69) {
	        return 2 ;
	   }
	       return 1 ;
	       
}

void checkWinner(int p, int y){
	// Write condition for cout in this function
	cout << "\n---------------------------------\n";
	if(p==y)
	{
	cout <<   "|             Draw!!!           |"; // when p is equal to y
	}
	if(p>y)
	{
	cout <<   "|         Player wins!!!        |"; // when p is greater than y
	}
	if(p<y)
	{
	cout <<   "|          Yugi wins!!!         |"; // when p is less than y
	}
	cout << "\n---------------------------------\n";
}

int main(){	
	srand(time(0)) ;
	int playerScore, yugiScore, playerAction, yugiAction;
	int playerCards[3] = {drawCard(), drawCard(), 0};
	int yugiCards[3] =  {drawCard(), drawCard(), 0};
	
	
	cout << "---------ORE NO TURN, DRAW!!!------------\n";
	cout << "Your cards: " << cardNames[playerCards[0]] << " " << cardNames[playerCards[1]] << "\n";
	playerScore = calScore(playerCards[0],playerCards[1],playerCards[2]);
	cout << "Your score: " << playerScore << "\n";
	do{
		cout << "(1) Destiny draw (2) Stay, SELECT: ";
		cin >> playerAction;
		
	}while(playerAction != 1 and playerAction !=2 ); 
	if(playerAction == 1){

		cout << "Player draws the 3rd card!!!" << "\n";
		playerCards[2]=drawCard() ;
		cout << "Your 3rd card: " <<cardNames[playerCards[2]] <<"\n";
		cout << "Your new score: " <<calScore(playerCards[0],playerCards[1],playerCards[2]) <<"\n";
		
	}
	cout << "------------ Turn end -------------------\n"<<"\n";
	playerScore=calScore(playerCards[0],playerCards[1],playerCards[2]) ;
	

	cout << "---------YUGI'S TURN, DRAW!!!------------\n";
	cout << "Yugi's cards: "<<cardNames[yugiCards[0]] << " " << cardNames[yugiCards[1]]<<" " << "\n";
	yugiScore = calScore(yugiCards[0],yugiCards[1],yugiCards[2]) ;
	cout << "Yugi's score: " << yugiScore << "\n";
	yugiAction = findYugiAction(yugiScore);
	if(yugiAction == 1){
		cout << "Yugi draws the 3rd card!!!\n";
		yugiCards[2]=drawCard() ;
		cout << "Yugi's 3rd card: " <<cardNames[yugiCards[2]] <<"\n" ;
			yugiScore = calScore(yugiCards[0],yugiCards[1],yugiCards[2]) ;
		cout << "Yugi's new score: "<<yugiScore<<"\n"; 
	}	
	cout << "------------ Turn end -------------------\n";

	
	checkWinner(playerScore,yugiScore);
}
