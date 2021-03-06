// CST116SRS03
// Part 1: Quadratic

#include "stdafx.h"
#include <iostream>
#include <cmath>



	

int main()
{
	
	double a, b, c, x1, x2;

	
	std::cout << "The Quadratic equation is a(x^2) + bx + c = 0 " << std::endl;
	std::cout << "Input values of a, b, and c, followed by pressing Enter after each value: " << std::endl;
	std::cin >> a >> b >> c;
		

	x1 = (-b + sqrt((b*b) - 4 * a * c)) / (2 * a);
	
	x2 = (-b - sqrt((b*b) - 4 * a * c)) / (2 * a);

	std::cout << "The root of x1 = " << x1 << std::endl;	
	std::cout << "The root of x2 = " << x2 << std::endl;

		

    return 0;
}

