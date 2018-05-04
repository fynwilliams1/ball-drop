
#include "stdafx.h"
#include <iostream>
#include "constants.h"

double height()
{
	std::cout << "Enter height: ";
	double y;
	std::cin >> y;
	// the user inputs a starting height from where the ball will fall
	return y;
}

double distFallen(double time)
{
	return (Gravity * (pow(time, 2)) / 2);
	//this formula calculates how far the ball has fallen afeter x seconds
}

int main()
{
	double input1 = height();

	double secs = 0;
	double x = input1;

	while (x >= 0)
	{
		x = input1;
		//makes x what ever the user defined to be the height at the start of this loop. see below

		std::cout << "At " << secs << " seconds, the ball is at height: " << input1 - distFallen(secs) << std::endl;
		secs = secs + 1;
		x = x - distFallen(secs);
		//if i didnt reset x the original number before ever loop it would end sooner that it should do.
		if (x <= 0)
		{
			std::cout << "The ball is on the ground at " << secs << " seconds." << std::endl;
		}
	}
	//something was going wrong when i used input1 for the loop so i created a new variable just for the loop 


	return 0;
}
