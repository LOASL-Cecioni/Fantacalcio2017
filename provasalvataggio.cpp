#include <iostream>
#include<Fantacalcio2017.h>
#include <fstream>
using namespace std ;
class salvataggio{public:
	fstream SaveFile ;
	SaveFile.open("C:\\Users\\utente\\Documents\\prova_salvataggio.txt", ios::out) ;
	SaveFile << "sola" ;
	SaveFile.close();
	
}
