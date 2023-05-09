#include <iostream>
using namespace std;

bool validasiUmur(int umur)
{
    if (umur >= 17 && umur <= 65)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    // Uji nilai minimum
    bool hasil = validasiUmur(17);
    cout << "Apakah umur 17 tahun valid? " << (hasil ? "Ya" : "Tidak") << endl;

    // Uji nilai tepat di bawah nilai minimum
    hasil = validasiUmur(16);
    cout << "Apakah umur 16 tahun valid? " << (hasil ? "Ya" : "Tidak") << endl;

    // Uji nilai maksimum
    hasil = validasiUmur(65);
    cout << "Apakah umur 65 tahun valid? " << (hasil ? "Ya" : "Tidak") << endl;

    // Uji nilai tepat di atas nilai maksimum
    hasil = validasiUmur(66);
    cout << "Apakah umur 66 tahun valid? " << (hasil ? "Ya" : "Tidak") << endl;

    // Uji nilai di antara nilai minimum dan maksimum
    hasil = validasiUmur(30);
    cout << "Apakah umur 30 tahun valid? " << (hasil ? "Ya" : "Tidak") << endl;

    return 0;
}