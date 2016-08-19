#include <iostream>
using namespace std;

int main() {
	char x=65,y='B';                        //(1)
	cout << "\n" << x << " " << y << " ";   //(2)
	cout << "\n" << (x+y);                  //(3)
	return 0;
}

//(1)   Wir legen 2 Char-werte an, die mit einem Komma getrennt sind. Also erst x mit dem wert 65 und y mit dem wert B.
/*(2)   Da Char nur Buchstaben ausgibt, wird die 65 als ASCII-wert 65 ausgegeben, also A. B wird genau so dargestellt wie 
        wir es angegeben haben. \n ist eine escape-sequenz. Diese hier lässt alles nach ihr folgende in eine neue Zeile 
        rutschen. Sie müssen ebenfalls in anfuehrungszeichen stehen.*/
/*(3)   Hier passiert etwas besonderes. Da die zwei Werte zusammengezählt werden geht der Compiler davon aus, das er die
        ASCII-werte zusammenrechnen soll und tut dies auch. Also 65 für A + 66 fuer B.*/
