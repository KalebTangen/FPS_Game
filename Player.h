#pragma once

// Includes
# include <iostream>
# include <cmath>
# include <string>
# include <iomanip>
# include <fstream>


using namespace std;
class player
{
	private:
		string userName;
		int score;
		double accuracy;
		int* next;
		int currency;


	public:
		player(string,int *);
		string displayPlayername();
		double getAccuracy();
		int getscore();
		int getcurrency();
};






