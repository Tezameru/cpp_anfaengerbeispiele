#include <iostream>
using namespace std;

int main() {
	int wert1;
	float wert2;
	double wert3;           //(1)
	wert1=4;
	wert2=7.3;
	wert3=wert1+wert2;      //(2)
	cout << "\n" << wert3;
	wert3=wert1+int(wert2); //(3)
	cout << "\n" << wert3;  //(4)
	return 0;
}

//(1)	Wir deklarieren drei werte, ein integer, zwei fließkomma, einer als float und einer als double
//(2)	dem dritten wert sagen wir einfach das er aus der addition von wert1 und wert2 besteht
/*(3)	Nach der ersten Ausgaben sagen wir aber, das wert3 jetzt aus wert1 besteht, und wert2 das jetzt ke
		in float mehr sein soll, sondern integer*/
/*(4)	Also sehen wir hier das anstatt 11,3 wie bei der ersten ausgabe nur noch 11 herauskommt,
		da int keine kommazahlen mitnimmt
