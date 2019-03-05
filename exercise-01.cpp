/*
NAMA	: ALVIN
NPM		:140810180013
KELAS	: A
TGL		: 5 MARET 2019
DESC	: exercise-01

*/
#include <iostream>//library yang digunakan
#include <string.h>

using namespace std;
struct Orang {//membuat struct orang
	int umur;//inisialisasi struct
	char nama[30],jk[2],goldar[3];
};

int main() {
Orang orang;//inisialisasi struct
orang.umur = 10;//input value struct umur
char jk,goldar;//inisisalisasi isi struct
strcpy(orang.nama, "fahmi");//input isi struct nama
strcpy(orang.goldar, "O");//input isi struct o
strcpy(orang.jk, "L");//input isi struct jk
cout << orang.umur << endl;//output hasil dari input
cout << orang.nama << endl;
cout << orang.goldar << endl;
cout << orang.jk << endl;

}
