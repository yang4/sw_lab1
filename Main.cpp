/*
 * Main.cpp
 *
 *      Author: Thai Yang
 */

#include<iostream>
#include"GuessingGame.h"

using namespace std;

int main () {

	// Create Object
	GuessingGame gg;

	// Guess
	cout<<"Enter guess a number between 1 - 10: ";
	int num;
	cin>>num;

	while(gg.GuessTheNumber(num)!=true) {
			cout<<" Incorrect!\nGuess again: ";
			cin>>num;
			gg.GuessTheNumber(num);
		}

		if(gg.GuessTheNumber(num)==true) {
			cout<<" Correct! The number is "<<gg.GetNum()<<"."<<endl;
		}
return 0;
}


