#include <iostream>
using namespace std;

int main() {
	int w;                                          //(1)
	cout << "\nBitte den Wert von 'w' eingeben: ";  //(2)
	cin >> w;                                       //(3)
	cout << "Der Wert von 'w' mal 2 ist " << w*2;   //(4)
	return 0;
}

//(1)   Wir sagen mit "int w;" das wir einen integer anlegen, der w heißt
//(2)   Textaufforderung das der Nutzer einen Wert für "int w;" eingeben soll.
//(3)   Nutzer kann durch "cin >> w;" den Wert eingeben.
//(4)   Der Wert w wird nach der Textausgabe mit 2 multipliziert
