#include <iostream>
using namespace std;

int main() {
	cout << "\n" << sizeof(12.);            //(1)
	cout << "\n" << sizeof(12.f);           //(2)
	cout << "\n" << sizeof(12.L);           //(3)
	return 0;
}

/*(1)   Hier wird aus der Zahl 12 wegen dem angehaengten punkt die fliesskommazahl 12,0 gemacht.
        Sie wird automatisch zum double dadurch. sizeof zeigt uns dabei an, wieviel speicher diese fliesskommazahl braucht.*/
/*(2)   Durch anhaengen des f hinter der 12. sagen wir, mach diese fliesskommazahl zum typ float.
        sizeof gibt auch hier wieder zurueck wieviel speicher gebraucht wird dafuer*/
/*(3)   Durch anhaengen des L hinter der 12. sagen wir, mach diese fliesskommazahl zum typ long double.
        sizeof zeigt hier etwa 8 oder 12 an, das haengt vom compiler ab.*/
