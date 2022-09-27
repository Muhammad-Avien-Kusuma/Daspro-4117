#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    //instalasi atau deklarasi
    int x = 2022;
    int a2 = 19;
    int a3 = 175;
    int a4 = 4117;
    float b = 171.5;
    string c = "Muhammad Avien Kusuma";
    string c2 = "A11.2022.xxx";
    string c3 = "Game, Music, Fishing";

    //output identitas
    cout << "Hello world!" << x;

    printf("\n\nIdentitas");
    cout << "\nNama     :   " << c;
    cout << "\nNim      :   " << c2;
    cout << "\nKelp     :   " << a4;

    //data pribadi
    printf("\n\nData Pribadi");
    cout << "\nUmur     :   " << a2;
    cout << "\nTinggi   :   " << a3;
    cout << "\nFavorite :   " << c3;

    printf("\n\nDaspro Pertemuan ke-3");
    return 0;
}
