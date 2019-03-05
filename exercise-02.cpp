/*
NAMA	: ALVIN
NPM		:140810180013
KELAS	: A
TGL		: 5 MARET 2019
DESC	: exercise-02
*/
#include <iostream>
#include <string.h>

using namespace std;
struct Theater {
	int room;
	char seat[3],movieTitle[30];
};

int main() {
Theater tht;

char jk,goldar;
tht.room=7;
strcpy(tht.seat, "J9");
strcpy(tht.movieTitle, "adit & jarwo");
cout << tht.room << endl;
cout << tht.seat << endl;
cout << tht.movieTitle << endl;


}
