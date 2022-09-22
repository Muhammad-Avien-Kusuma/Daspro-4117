#include <iostream>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;

    cout << "Program menghitung luas lingkaran";

    float r, l;
    const float phi = 3.14;

    cout << "\n Masukkan jari-jari linkaran :";
    cin >> r;

    l = phi * r * r;

    cout << "luas linkaran adalah   :   " << l <<endl;

    return 0;
}
