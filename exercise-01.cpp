#include <iostream>
#include <string.h>

using namespace std;
struct Orang {
	int umur;
	char nama[30],jk[2],goldar[3];
};

int main() {
Orang orang;
orang.umur = 10;
char jk,goldar;
strcpy(orang.nama, "fahmi");
strcpy(orang.goldar, "O");
strcpy(orang.jk, "L");
cout << orang.umur << endl;
cout << orang.nama << endl;
cout << orang.goldar << endl;
cout << orang.jk << endl;

}
