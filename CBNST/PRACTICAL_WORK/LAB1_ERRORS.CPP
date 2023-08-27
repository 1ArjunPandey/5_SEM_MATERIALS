#include<bits/stdc++.h>

using namespace std;

void modd(double &s){
    if(s < 0) s = (-1)*s;
}

double rel_err(double a, double b){
    double ans = a-b;
    modd(ans);

    return ans;
}

int main(){
    double a, b;

    cout<<"Enter X : ";
    cin >> a;
    cout<<"Enter X' : ";
    cin >> b;

    double relative_error = rel_err(a, b);

    double absolute_error = relative_error / a;

    double percentage_error = absolute_error * 100;

    cout<<"Realtive Error : "<<relative_error<<endl;    
    cout<<"Absolute Error : "<<absolute_error<<endl;    
    cout<<"Percentage Error : "<<percentage_error<<endl;

    return 0;
}
