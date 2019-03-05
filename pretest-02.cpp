/*
NAMA	: ALVIN
NPM		:140810180013
KELAS	: A
TGL		: 5 MARET 2019
DESC	: PRETEST-02
PROG	: MOVE ZERO TO THE END OF ARRAY
*/
#include<iostream>
using namespace std;

#include <iostream>

using namespace std;

void moveZeroToEnd(int arr[], int n)
{
    int count = 0;

    for (int i = 0; i < n; i++)
        if (arr[i] != 0)
            arr[count++] = arr[i];

    while (count < n)
        arr[count++] = 0;
}

void input(int (&arr)[100], int& n)
{
    cout << "Masukan Panjang Data   : "; cin >> n; cout <<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<"Masukan Data Ke- " <<(i+1) << " : " ; cin >> arr[i];
    }
}

void output(int arr[], int n)
{
    cout << "Hasilnya   : " <<endl;
    for (int i = 0; i < n; i++)
    {
         cout << arr[i] << " ";
    }
}

int main()
{
    int arr[100];
    int n;
    input(arr, n);
    moveZeroToEnd(arr,n);
    output(arr, n);
}
