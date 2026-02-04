#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
    
    int x;
    cout<<"Choose your first number: ";
    cin>>x;
    
    int y;
    cout<<"Choose your second number: ";
    cin>>y;
    
    string sign;
    int sum;
    sum = x+y;
    cout<<"Choose what you want to use: ";
    cin>>sign;
    
    int product = x*y;
    int subtraction = x-y;

    if (sign == "+"){

        cout<<""<<sum<<endl;

    } else if (sign == "-"){

        cout<<""<<subtraction<<endl;

    } else if (sign == "*"){

        cout<<""<<product<<endl;

    } else if (sign == "/"){

        if (y == 0){

            cout<<"Cannot divide by 0"<<endl;
            return 1;

        } else {
            
            double divison = (double)x/y;
            cout<<""<<divison<<endl;
            
        }

    }

return 0;

}