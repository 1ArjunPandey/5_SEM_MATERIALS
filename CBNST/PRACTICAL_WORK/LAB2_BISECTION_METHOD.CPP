// HERE WE HAVE TO SOLVE EQUATION USING BISECTION METHOD 
// THIS IS THE IMPLEMENTATION OF BISECTION METHOD


#include<bits/stdc++.h>
using namespace std;
#define EPSILON 0.01

// An example function whose solution is determined using
// Bisection Method. The function is x^3 - x^2 + 2
double func(double x)
{
	return x*x*x - x*x + 2;
}


void bisection(double a, double b)
{
	if (func(a) * func(b) >= 0)
	{
		cout << "You have not assumed right a and b\n";
		return;
	}

	double c = a;
	while ((b-a) >= EPSILON)
	{
		// Find middle point
		c = (a+b)/2;

		// Check if middle point is root
		if (func(c) == 0.0)
			break;

		// Decide the side to repeat the steps
		else if (func(c) < 0)
			a = c;
		else
			b = c;
	}
	cout << "The value of root is : " << c;
}


int main()
{

	double a =-200, b = 300;
    cout<<"Value of f(-200) = "<<func(a)<<endl;
    cout<<"Value of f(300) = "<<func(b)<<endl;
	bisection(a, b);
	return 0;
}
