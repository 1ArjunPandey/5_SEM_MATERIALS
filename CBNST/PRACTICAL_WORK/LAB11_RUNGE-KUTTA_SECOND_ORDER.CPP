// Runge Kutta second order method

#include <iostream>

using namespace std;

float fun(float x, float y)
{
    return x * x + y;
}

int main()
{
    float x, y, h, z;
    cout << "enter initial value of x and f(x) : " << endl;
    cin >> x;
    cin >> y;
    cout << "enter step size: ";
    cin >> h;
    cout << "enter value for approximation: ";
    cin >> z;
    int n = (z - x) / h;
    for (int i = 0; i < n; i++)
    {
        float k1 = h * fun(x, y);
        float k2 = h * fun(x + h, y + k1);
        y = y + (k1 + k2) / 2;
        x = x + h;
    }
    cout << "the answer is: " << y;
    
    return 0;
}