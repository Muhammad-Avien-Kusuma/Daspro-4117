#include <iostream>
using namespace std;

int main()
{
    cout << "The Fibonacci Sequence (kurang dari 100)" << endl;
    int a,b,c;
    a = 1;
    b = 1;
    c = a + b;
    cout << a << ", " << b << ", " << c;

    while(c < 1000){

        a = b;
        b = c;
        c = a + b;
        if(c > 1000){
            break;
        }

    cout << ", " << c;
    }
    return 0;
}
