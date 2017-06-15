#include <iostream>
#include<Fantacalcio2017.h>
#include <fstream>
#include <string>
using namespace std ;
class lettura_squadre{public:
	ifstream SaveFile ("C:\\Users\\utente\\Documents\\prova_salvataggio.txt") ;
	char ch;
	while(!SaveFile.eof())
	{SaveFile.get(ch);
    cout << ch;
	}

	SaveFile.close();
	
}
