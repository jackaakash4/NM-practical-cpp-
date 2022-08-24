//a program to calculate first and second derivative of the function using newton's forward formula 

#include <bits/stdc++.h>
using namespace std;



int main(){
    float t[100], y[100], dely[100], del2y[100], del3y[100], df, ds;    //df is first derivative and ds is second derivative
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    for (int i = 0; i < n; i++){
        cout <<"\nEnter the value of t: ";
        cin >> t[i];
        cout << "\nEntered value of t is: " << t[i];
    }
    for (int j = 0; j < n; j++){
        cout << "\nEnter the value of y ";
        cin >> y[j];
        cout << "\nEntered value of y is: " << y[j];
    }
    for (int i =0; i < n-1; i++){
        dely[i] = y[i+1] - y[i];
    }
    
    for (int i = 0; i < n-2; i++){
        del2y[i] = dely[i+1] - dely[i];
    }

    for (int i =0; i< n-3; i++){
        del3y[i] = del2y[i+1] - del2y[i];
    }
    float x, s;
    cout << "Enter the value of x: ";
    cin >> x;
    float h = t[1] - t[0];
    s = (x - t[0]) / h;
    
    df = (dely[0] + del2y[0] * (2 * s - 1 )/2 + del3y[0] * (3 * s * s - 6 * s + 2)/6 )/h;

    cout << "\nthe first derivative of given function is: " << df;
    



    return 0;
}