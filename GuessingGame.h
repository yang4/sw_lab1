/*
 * GuessingGame.h
 *
 *      Author: Thai Yang
 */

#ifndef GUESSINGGAME_H_
#define GUESSINGGAME_H_

class GuessingGame {
public:
	GuessingGame();
	bool GuessTheNumber(int num);
	int GetNum();
private:
	int correctNum;
};



#endif /* GUESSINGGAME_H_ */
