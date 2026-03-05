#include <iostream>
#include <string>
using namespace std;
int arr[20]; //Deklarasi ukuran arr
int n; //Deklarasi n

void input()
{ //Prosedur input
    int d;
    while (true)
    {
        cout << "Masukan banyaknya elemen pada arry : ";
        cin >>n;
        if (n <= 20)
            break;    //keluar dari loop
        else
        {
            cout << "\nArry dapat mempunyai maksimal 20 elemen.\n";
        }
    }
    cout << endl;
    cout << "==================" << endl;
    cout << "Masukan Elemen Arry" << endl;
    cout << "==================" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << "Data ke- " <<(i + 1) <<": ";
        cin >> arr[i];
    }

}
