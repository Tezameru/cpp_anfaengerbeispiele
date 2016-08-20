//Diese Beispieldatei soll dafür sorgen zu erlaeutern wie ein simples program aufgebaut ist und aus was es besteht.

//Dass sind Kommentare. Sie werden etwa auf einzelnen Zeilen mit // eingeleitet
/* oder damit in
bloecke gebracht die erst aufhören wenn man sie mit einem weiteren zeichen beendet, naemlich */
//Wir nehmen das klassische "Hello World!"-Programm und schauen es uns Zeile fuer Zeile an.

#include <iostream>           //(1)
                              //(2)
int main(){                   //(3)
std::cout << "Hello World!";  //(4)
}                             //(5)


//(1) Die erste Zeile gibt an, welche Praeprozessoren genutzt werden. hier iostream, der ein- und ausgabe regelt.
//(2) Die zweite Zeile ist leer. Das macht überhaupt nichts aus. Leere Zeilen werden einfach ignoriert, helfen dazu beim lesen.
//(3) Die dritte Zeile beinhaltet main, welche in jedem ausfuehrbaren program einmal vorkommen darf und muss.
//(4) Die vierte Zeile beinhaltet ist ein statement.
