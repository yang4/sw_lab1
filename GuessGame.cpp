/*
 * GuessGame.cpp
 *
 *      Author: Thai Yang
 */

#include<iostream>
#include<stdlib.h>
#include<time.h>
#include"GuessingGame.h"

GuessingGame::GuessingGame () {
	srand(time(NULL));
	correctNum = rand()%10 + 1;
}

bool GuessingGame::GuessTheNumber (int num) {
	if(num==correctNum) {
		return true;
	}
return false;
}

int GuessingGame::GetNum () {
	return correctNum;
}
