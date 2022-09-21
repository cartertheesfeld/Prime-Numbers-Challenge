#include <iostream>

using namespace std;

//determinds wether the number is prime or not
bool prime;
//
int main()
{
	//makes a loop to go through every number from 1-1000
	//i is the number tested and j tests to see if any number less than itself can divide into i
	for (int i = 1; i <= 1000; i++) 
	{
		bool prime = true;
		
		//runs through all numbers less than i to see if it is devisable
		for (int j = 2; j < i; j++) 
		{
			//if the number ever equals 0 then a number devides into it. or if the i==j then the for loops stops and moves to the prime is true 
			if (i % j == 0 || i == j) 
			{
				prime = false;
				break;
			}
		}
		//if the number remains true after everything than it is prime
		if (prime == true) 
		{
			cout << i << " is prime." << endl;
		}
	}

	return 0;
}