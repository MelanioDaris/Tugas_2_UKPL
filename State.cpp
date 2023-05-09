#include <iostream>
using namespace std;

int main()
{
    int bilangan;

    cout << "Masukkan sebuah bilangan: ";
    cin >> bilangan;

    if (bilangan % 2 == 0)
    {
        cout << "Bilangan genap\n";
    }
    else
    {
        cout << "Bilangan ganjil\n";
    }

    cout << "Program selesai\n";
    return 0;
}