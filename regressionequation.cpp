// WAP to find the regression equation
#include <iostream>
using namespace std;

int main(){
    float x[100], y[100], n, sxy, sx, sy, ssx;
    float a, b;

    cout << "Enter the value of n: ";
    cin >> n;

    for (int i = 0; i < n; i++){
        cout << "Enter the value of xi ";
        cin >> x[i];
        cout << "Enter the value of yi ";
        cin >> y[i];

    }
    for (int i = 0; i < n; i++){
        sxy+= x[i] * y[i];
        cout << "Sum of x * y is " << sxy <<endl;
        sx += x[i];
        cout << "Sum of x is " << sx << endl;
        sy += y[i];
        cout << "Sum of y is : "<<sy <<endl;
        ssx += sx * sx;
        cout << "Sum of square of x is: " << ssx << endl;

    }
    

    b = (n*ssx - sx * sy)/ (n* ssx - sx*sx);
    a = (sy - b* sx)/n;

    cout << "The required regression equation is: y = " << a <<" + " << b << "x";

}
