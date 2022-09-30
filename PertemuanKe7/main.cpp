#include <iostream>
using namespace std;

int main()
{
    char a2, b2, c2, x2;
    a2 = 'A';
    b2 = 'B';
    c2 = 'C';
    x2;

    int a3, b3, c3, x3;
    a3 = 1;
    b3 = 2;
    c3 = 3;
    x3;

    string akun, nama, X2, X3, emoji;
    akun    = " A = Mahasiswa (Admin)\n B = Dosen\n C = User\nMasukkan Input Anda: ";
    X2      = "";
    X3      = "";
    emoji   = "(- w-) lagi iseng ya?";
    nama;



    cout << "Saya Belajar Menggunakan C++" << endl;
    cout << "Hello World!" << endl << endl;

    //Statement Tugas Daspro
    cout << "Daspro Pertemuan Ke-7" << endl;
    cout << "Tugas 4 - Memilih Jurusan" << endl;
    cout << "==========JURUSAN==========" << endl;
    cout << " 1. Teknik Informatika" << endl;
    cout << " 2. Sitem Informasi" << endl;
    cout << " 3. DKV" << endl << endl;


    //PEMASUKKAN CASE 1
    cout << "Masukkan Pengguna Akun Sebagai" << endl << akun;
    cin >> x2;

    if( x2 == a2){
            X2 = "Mahasiswa (Admin) ";
    }
    else if( x2 == b2){
            X2 = "Dosen ";
    }
    else if( x2 == c2){
            X2 = "User ";
    }
    else{
        cout << "(Akun Anda Tidak Terdaftar)            " << emoji << endl << endl;
        cout << "404 Error Code Not Found. " << "('" << x2 << "')" << endl;
        cout << "Press Any Key To Exterminate The Code" << endl << endl;
    return 0;
    }

    //PEMASUKKAN CASE 2
    cout << "Masukkan Jurusan Anda: ";
    cin >> x3;

    if( x3 == a3){
            X3 = "Teknik Informatika";
    }
    else if( x3 == b3){
            X3 = "Sistem Informasi";
    }
    else if( x3 == c3){
            X3 = "DKV";
    }
    else{
        cout << "(Jurusan Anda Tidak Terdaftar)         " << emoji << endl << endl;
        cout << "404 Error Code Not Found. " << "('" << x3 << "')" << endl;
        cout << "Press Any Key To Exterminate The Code" << endl << endl;
    return 0;
    }

    // RESULT LOGIN
    if( x2 == a2){
        cout << "\n==========WELCOME==========" << endl;
        cout << "Nama   : Avien Kusuma" << endl;
        cout << "Nim    : A11.2022.xxx" << endl;
        cout << "Kelp   : Daspro 4117" << endl;
        cout << "Kota   : Kota Semarang" << endl;
        cout << "Jurusan: " << X3 << endl;
    }
    else{
        cout << "Masukkan Nama Panggilan Anda: ";
        cin >> nama;

        cout << "\n==========WELCOME==========" << endl;
        cout << "" << X2 << "" << nama << " Jurusan " << X3 << endl;
    }
    return 0;
}
