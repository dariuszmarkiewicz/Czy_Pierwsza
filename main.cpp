#include <iostream>

using namespace std;

bool CzyPierwsza(int n)
{
    for (int i=2; i<n; i++)
        if (n%i==0) return 0;
    return 1;
}

int main()
{
    int liczba;

    cout << "Podaj liczbe: ";
    cin >> liczba;

    if(CzyPierwsza(liczba)==1)
        cout << "Liczba pierwsza" << endl;
    else
        cout << "Liczba zlozona" << endl;

    return 0;
}
