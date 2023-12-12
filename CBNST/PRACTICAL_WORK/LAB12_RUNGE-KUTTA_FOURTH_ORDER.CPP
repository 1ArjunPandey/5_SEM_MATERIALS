// Runge kutta fourth order

#include <iostream>

using namespace std;
float fun(float x, float y)
{
    return (y * y - x * x) / (y * y + x * x);
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
        float k2 = h * fun(x + h / 2, y + k1 / 2);
        float k3 = h * fun(x + h / 2, y + k2 / 2);
        float k4 = h * fun(x + h, y + k3);
        y = y + (k1 + 2 * k2 + 2 * k3 + k4) / 6;
        x = x + h;
    }
    cout << "the answer is: " << y << endl;
    
    return 0;
}