#include <iostream>
#include<conio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;
int direction(){
	int x;
	srand(time(0));	
    x=rand()%3 + 1 ;
    return x;
}

char direct[4]={'o','?','?','?'};

catchthethief(){
	
	int thief();
	int thloc;
	void playBoard();
	int location;
	int turn=1;
	int again;
	do{
		system("cls");
			cout << "Imagine a scenario of a policeman chasing a thief.\nHe stopped at a point where there are three streets in front of him\nGuess the street.\n\n";
		
		playBoard();
		
		cout << "\n\nWhere is the thief?\n";
	    cout << "Enter the location : 1 for Up -- 2 for Left -- 3 for Right ";
	    cout << "\nGuess the Street=:"; 
	
		
	thloc= direction();
	if(thloc==1){
		direct[1]='X';
	}
	else if(thloc==2){
		direct[2]='X';
	}
	else if(thloc==3){
		direct[3]='X';
	}
	cin>>location;
		
		if(location==1 && direct[1]=='X'){
			direct[1]='O';
			cout<<"Congrats!! You guessed the right street,You Won.";
		}
		else if(location==2 && direct[2]=='X'){
			direct[2]='O';
			cout<<"Congrats!! You guessed the right street,You Won.";
		}
		else if(location==3 && direct[3]=='X'){
			direct[3]='O';
			cout<<"Congrats!! You guessed the right street,You Won.";
		}
		else{
			cout<<"Your guess was wrong.";
		}
		playBoard();
		cout<<"\nX,O was the location of thief.";
		getch();
		turn=0;
		
	}while(turn==1);
	
}

void playBoard(){
	cout<<"\n";
	cout << "\t\t  " <<direct[1]  << endl;
	cout << "\t\t  /\\" << endl;
	cout << "\t\t  |" << endl;
	cout << "\t\t  |" << endl;
	cout << "\t\t  |" << endl;
	cout <<"\t  "<<direct[2] << "<-----  ----->" <<direct[3] <<endl;
	
	
	
}