// simpson's 1/3 rule

#include <iostream>
#include <math.h>
#include<vector>

using namespace std;

// Function to calculate f(x)
float func(float x)
{
	return log(x);
}


float simpsons_(float ll, float ul, int n)
{
	// Calculating h
	float h = (ul - ll) / n;

	
	vector<float> x, fx;

	// Calculating the x and f(x)

	for (int i = 0; i <= n; i++) {
		float tmp = ll + i * h;
        
        x.push_back(tmp);
		fx.push_back(func(tmp));

	}


	// Calculating result
	float res = 0;
	for (int i = 0; i <= n; i++) {
		if (i == 0 || i == n)
			res += fx[i];
		else if (i % 2 == 0)
			res += 2 * fx[i];
		else
			res += 4 * fx[i];
	}
	res = res * (h / 3);
	return res;
}


int main()
{
	float lower_limit, upper_limit;
    int n;

    cout<<"Enter lower limit : ";
    cin >> lower_limit;

    cout<<"Enter upper limit : ";
    cin >> upper_limit;

    cout<<"Enter no of intervel : ";
    cin >> n;
	cout << simpsons_(lower_limit, upper_limit, n);
	return 0;
}


/* sample test case

lower limit = 4
upper limit = 5.2
n (intervel) value = 6


EXPECTED OUTPUT : 1.82785

*/