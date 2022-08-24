#include <iostream>
#include <math.h>
using namespace std;

float f(float x){
    return x * x * x - 4 * x - 9;
}

bool isValidGuess(float x1, float x2){
    cout <<"Here, f(x1)= " << f(x1) << " , f(x2) " << f(x2) << " , f(x1) * f(x2)= " << (f(x1) * f(x2)) << endl;
    if (f(x1) * f(x2) < 0){
        return true;
    }
}

int main(){
    cout << "BIsection method\n";
    float x0, x1, x2, e;
    cout << "Initial guess: ";
    cin >> x1;
    cout << "Final guess: ";
    cin >> x2;

    x0 = (x1 + x2)/2;
    cout << "Error value e = ";
    cin >> e;

    if(isValidGuess(x1, x2)){
        cout<< "n" << "\t\t\t" << "x1" << "\t\t\t" << "x2" << "\t\t\t" << "f(x0) * f(x1)" << "\t\t\terror=|f(x0)| \n\n";
        int n = 1;
        while (fabs(f(x0)) > e){
            cout << n << "\t\t\t" << x1 <<"\t\t\t" << x2 <<"\t\t\t" << f(x0)*f(x1) << "\t\t\t" << fabs(f(x0)) << "\n";
            if( f(x0) * f(x1) < 0){
                x2 = x0;
            }
            else{
                x1 = x0;
            }
            x0 = (x1 + x2)/2;
            n++;

        }
        cout << "The root is " << x0;
    }
    else {
        cout << "Invalid input";
    }
    return 0;
}