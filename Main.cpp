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

	if(gg.GuessTheNumber(num)==true) {
		cout<<" Correct!"<<endl;
	} else {
		cout<<" Incorrect! The Correct Number is "<<gg.GetNum()<<endl;
	}
return 0;
}


