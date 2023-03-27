// Includes
# include <iostream>
# include <cmath>
# include <string>
# include <iomanip>
# include "Player.h"
# include "fstream"

using namespace std;

player::player(string name, int* nextPlayer)
{
	this->userName = name;
	this->next = NULL;
	this->score = 0;
	this->accuracy = 100.00;
	this->currency = 0;

}
string player::displayPlayername()
{

	return this -> userName;

}

double player::getAccuracy() 
{
	return this->accuracy;
}

int player::getscore()
{
	return this->score;
}

int player::getcurrency()
{
	return this->currency;
}