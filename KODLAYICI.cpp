#include <iostream>

using namespace std;

int main()
{
    int sayi;

    cout << "Bir sayi giriniz: \n";
    cin >> sayi;

    if (sayi<10)
        sayi=sayi+10;
    cout << "sayi: "<<sayi;
         sayi=sayi-10;
    cout << "sayi: "<<sayi;


    return 0;

}
