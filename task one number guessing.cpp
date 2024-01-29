#include<iostream>
#include<cstdlib>
using namespace std;

int main(){
	string name;
	string input;
	int userinput;
	int score;
	cout<<"Enter your name:    		";
	getline(cin, name);
	cout<<endl;
	
	do{
		srand(0);
		int variable = rand()%10 + 1;
		cout<<"Enter any Number in the Range between 1 to 10:		";
		cin>>userinput;
		
		if(userinput == variable){
			cout<<"Congratulation! (You guessed the Right Number)"; 
			score++;
		}
		else{
			cout<<"Sorry! (You guessed the Wrong Number)" <<endl; 
		}
		cout<<"Would you like to Play again yes/not: 		";
		cin>>input;
		cout<<endl;
			 
	}while(input != "not");
	cout<<"Thank you for Playing: "<<name <<endl;
	cout<<"Your Score is: " <<score <<endl;
	cout<<"Game end";
}
