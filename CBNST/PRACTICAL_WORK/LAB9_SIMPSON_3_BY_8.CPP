// Simpson's rule 3/8

#include<iostream>
#include <math.h>
#include<vector>

using namespace std;

// Given function to be integrated
float func( float x)
{
	return (1 / ( 1 + x * x ));
}



float calculate(float ll, float ul, int n)
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

    // Calculation
    float res = 0;

	for (int i = 0; i <= n ; i++)
	{
		if (i == 0 || i == n)
			res += fx[i];
        else if (i % 3 == 0)
			res = res + 2 * fx[i];
		else
			res = res + 3 * fx[i];
	}
    res = res * ( 3 * h / 8 ) ;
	return res;
}

// Driver Code
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
	

	cout << calculate(lower_limit, upper_limit,n);
	return 0;
}



/* sample test case

lower limit = 1
upper limit = 10
n (intervel) value = 10


EXPECTED OUTPUT : 0.687927

*/