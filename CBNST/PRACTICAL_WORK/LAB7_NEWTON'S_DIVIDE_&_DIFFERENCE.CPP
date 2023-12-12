//  newtons divide and difference method

#include <iostream>
#include<cmath>
#include<vector>

using namespace std;

int main()
{
    int n;
    cout << "enter no of records ";
    cin >> n;
    vector<vector<float>> mat(n, vector<float>(n + 1, 0));
    for (int i = 0; i < n; i++)
    {
        cin >> mat[i][0];
        cin >> mat[i][1];
    }
    for (int i = 2; i <= n; i++)
    {
        for (int j = 0; j < n - i + 1; j++)
        {
            mat[j][i] = (mat[j + 1][i - 1] - mat[j][i - 1]) / (mat[j + i - 1][0] - mat[j][0]);
        }
    }
    float ans = mat[0][1];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= n; j++)
            cout << mat[i][j] << "\t";
        cout << endl;
    }

    cout << "enter value to be: ";
    float x;
    cin >> x;
    float f = 1;
    for (int i = 2; i <= n; i++)
    {
        f *= (x - mat[i - 2][0]);
        ans += (f * mat[0][i]);
    }
    cout << "the answer of given integral is:" << ans << endl;
    return 0;
}