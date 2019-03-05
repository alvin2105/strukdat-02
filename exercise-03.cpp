/*
NAMA	: ALVIN
NPM		:140810180013
KELAS	: A
TGL		: 5 MARET 2019
DESC	: exercise-03
*/
#include <iostream>
#include <stdlib.h>

using namespace std;


struct data
{
    char NIP[30];
    char nama[30];
    int gol;
    int gaji;
};

void banyakData(int& n);
void dataPegawai(data pegawai[], int& n);
void daftarGaji(data pegawai[], int& n);
void sortingGol(data pegawai [], int& n);
void rataRata(data pegawai[], int& n);
void gajiTertinggi(data pegawai[], int& n);
void gajiTerendah(data pegawai[], int& n);
void sortingNIP(data pegawai[], int& n);

int main()
{
    char pilih;
    int n;
    data pegawai[20];

    menu:
  

    banyakData(n);
	dataPegawai(pegawai,n);
	daftarGaji(pegawai,n);
	rataRata(pegawai,n);
	sortingGol(pegawai,n);
	gajiTertinggi(pegawai,n);
	gajiTerendah(pegawai,n);
	sortingNIP(pegawai,n);

    cout<<"ulangi?: "; cin>>pilih;
    if(pilih=='Y' || pilih=='y')
    {
        system("cls");
        goto menu;
    }
    else
    {
        cout<<endl;
    }
}

void banyakData(int& n)
{
    cout<<"Masukan Jumlah Pegawai : "; cin>>n; cout<<endl;
}

void dataPegawai(data pegawai[], int& n)
{
    for(int i=0; i<n; i++)
    {
        cout<<"Masukan Data Pegawai Ke-" <<(i+1) <<endl;
        cout<<"Masukan Nama Pegawai\t\t: "; cin.ignore(); cin.getline(pegawai[i].nama, 30);
        cout<<"Masukan NIP Pegawai\t\t: "; cin.ignore(); cin.getline(pegawai[i].NIP, 30);
        menuGol:
        cout<<"Masukan Golongan Pegawai (1-4)\t: ";cin>>pegawai[i].gol;
        if(pegawai[i].gol<1 || pegawai[i].gol>4)
        {
            cout<<"Masukan Golongan Yang Benar!" <<endl;
            goto menuGol;
        }
        cout<<endl;
    }
}

void daftarGaji(data pegawai[], int& n)
{
    for(int i=0; i<n; i++)
    {
        if(pegawai[i].gol==1)
        {
            pegawai[i].gaji=2000000;
        }
        else if(pegawai[i].gol==2)
        {
            pegawai[i].gaji=3000000;
        }
        else if(pegawai[i].gol==3)
        {
            pegawai[i].gaji=5000000;
        }
        else if(pegawai[i].gol==4)
        {
            pegawai[i].gaji=8000000;
        }
    }
}

void sortingGol(data pegawai[], int& n)
{
    for(int i=1; i<n; i++)
    {
        data val;
        int index;

        val=pegawai[i];
        index=i;
        while(index>0 && pegawai[index-1].gol>val.gol)
        {
            pegawai[index]=pegawai[index-1];
	        index = index-1;
        }
	    pegawai[index]= val;
    }
}

void rataRata(data pegawai [], int &n)
{
    int gajiTotal, rataGaji;

    gajiTotal=0;
	for(int i=0; i<n; i++)
    {
        gajiTotal+=pegawai[i].gaji;
    }
	rataGaji=gajiTotal/n;
	cout<<"Rata-rata Gaji Karyawan\t\t: Rp." <<rataGaji <<endl <<endl;
}

void gajiTertinggi (data pegawai[], int &n)
{
    cout<<"Pegawai Dengan Gaji Tertinggi\t: ";
	for (int i=0; i<n ; i++)
    {
        if (pegawai[i].gol==pegawai[n-1].gol)
        {
            cout<<pegawai[i].nama <<",";
        }
    }
	cout<<"\b Dengan Gaji Rp." <<pegawai[n-1].gaji <<endl <<endl;
}

void gajiTerendah (data pegawai[], int &n)
{
    cout<<"Pegawai Dengan Gaji Terendah\t: ";
	for (int i=0; i<n; i++)
    {
        if (pegawai[i].gol==pegawai[0].gol)
        {
            cout<<pegawai[i].nama <<",";
        }
    }
	cout<<"\b Dengan Gaji Rp." <<pegawai[0].gaji <<endl <<endl;
}

void sortingNIP(data pegawai[], int &n)
{
    for(int i=1; i<n; i++)
    {
        data val;
        int index;

        val = pegawai[i];
        index = i;
	    while(index>0 && pegawai[index-1].NIP>val.NIP)
	    {
            pegawai[index] = pegawai[index-1];
            index = index-1;
        }
	    pegawai[index]= val;
    }
	cout<<"Urutan Pegawai Berdasarkan NIP (Ascending)" <<endl;
    for (int i=0; i<n; i++)
    {
        cout<<(i+1)<<". "<<pegawai[i].nama<<endl;
    }
    cout<<endl;
}
