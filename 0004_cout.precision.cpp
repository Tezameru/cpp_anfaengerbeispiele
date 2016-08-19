/*
Was macht cout.precision?
legt fest, wieviele stellen eines wertes cout anzeigen soll. Es brauch nur einen wert, wieviele stellen denn gewollt sind.
cout.precision(3) wuerde also nur 3 stellen anzeigen insgesammt.
cout.precision(10) wuerde somit 10 stellen anzeigen.
*/

#include <iostream>
using namespace std;

int main() {
	float a;                      //(1)
	double b;                     //(2)
	a=10.12345678901234567890;
	b=10.12345678901234567890;
	cout << "\n" << a;
	cout << "\n" << b;            //(3)
	cout.precision(16);           //(4)
	cout << "\n" << a;
	cout << "\n" << b;            //(5)
	return 0;
}

//(1)   Float ist eine Fließkommazahl  die auf bis zu 7 stellen genau ist. 32-bit
//(2)   double ist ebenfalls eine fließkommazahl die aber bis zu 15 stellen genau ist. 64-bit
//(3)   Die ausgabe der werte a und b zeigt an, das cout standardmäßig nur 4 stellen hinter dem komma ausgibt.
//(4)   Hier legen wir mit cout.precision(16) fest, das cout jedoch bis zu 16 stellen anzeigen soll anstatt 4.
//(5)   Durch die erneute ausgabe sehen wir damit, das float und double tatsächlich nur bis zu einem bestimmten punkt.
