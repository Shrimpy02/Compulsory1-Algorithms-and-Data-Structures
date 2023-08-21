#include "Main.h"
#include <iostream>

int main()
{
	print();

}

void print()
{

	// Factorial Text
	// ----------------------------
	std::cout << "Type a hole, positive number, 10 or lower to get the factorial: ";
	std::cin >> x;

	if (x > 10)
		std::cout << "That number is too high..." << std::endl;
	
	else if (x < 0)
		std::cout << "That number is negative..." << std::endl;
	
	else
		std::cout << "The factorial is: " << FacRecur(x) << std::endl;


	// Fibonacci Text
	// ----------------------------
	std::cout << " " << std::endl;
	std::cout << "What element of the fibonacci sequence do you want?: ";
	std::cin >> y;
	if (y > 20)
		std::cout << "That number is too high..." << std::endl;
	
	else
		std::cout << FibElement(y + 1) << " Is the number of the " << y << " element of the fibonacci sequence" << std::endl;
	
}

int FacRecur(int n)
{
	int sol;
	if(n==1 || n==0)
		sol = 1;

	else{
		// Factorial Logic
		sol = FacRecur(n - 1);
		sol = n * sol;
	}

	return sol;
}

int FibElement(int m)
{
	int sol;

	if(m == 1)
		sol = 0;
	
	if (m == 2)
		sol = 1;
	
	else
	{
		// Fibonacci Logic
		nextTerm = t1 + t2;
		t1 = t2;
		t2 = nextTerm;

		sol = FibElement(m - 1);
		sol = nextTerm;
	}

	return sol;
}
