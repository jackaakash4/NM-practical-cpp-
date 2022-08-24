#include <iostream>
using namespace std;

int main(){
    float x[100], y[100], x0, a=0 ,b=0;
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    for(int i = 0; i < n; i++){
        cout << "Enter the value of x["<<i+1<<"]: " ;
        cin >> x[i];
        }

    for(int i = 0; i < n; i++){
        cout << "Enter the value of y["<<i+1<<"]: " ;
        cin >> y[i];
        }   
    
    cout << "Enter the value of x0 whose value is to be find: ";
    cin >> x0;

    for (int i = 0; i < n; i++){
        float l = 1;
        for( int j= 0; j < n; j++){
        
        if ( i!= j){
            l *= ((x0 - x[j])-(x[i] - x[j]));
        }
        }
        a += y[i] * l;
        b += a;
    }
    cout << "The value of y when x = " << x0 << " is " << b;

return 0;
}