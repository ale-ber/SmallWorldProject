#include "ReinforcementDie.h"
#include <time.h>
#include <vector>

ReinforcementDie::ReinforcementDie()
{

}

ReinforcementDie::~ReinforcementDie()
{

}

int ReinforcementDie::rollDie()
{
	//the following line is needed to achieve randomness
	srand(time(NULL));
	//create a vector with all the possible outcomes of the six-sided dice
	std::vector<int> dice{0, 0, 0, 1, 2, 3};
	//randomly choose an index between 0 and 5
	int index = rand() % dice.size();
	//return the value in the vector at the randomized index
	return dice[index];
}
