#include "Fantacalcio2017.h"
#include <string.h>
#include <iostream>
using namespace std;

class Classifica {
	int scelta, numero_squadre, numero_giornate, numero_incontri;
	
	void visualizza_classifica(){
				
			
		cout<<"Gestione Classifica"<<endl;
			
			do 
			{ 
			cout <<  "Scegli un'operazione da fare"<<endl;
			cout << "1. Crea classifica"<<endl;
			cout << "2. Inserisci i risultati"<<endl;
			cout <<  "3. Guarda la classifica"<<endl; 
			cout << "4. Esci dalla classifica"<<endl; 
			cout << "Scelta: "; 
		cin >> scelta; 
		} while(scelta!=1 && scelta!=2 && scelta!=3 && scelta!=4 && scelta!=5);
			
			switch(scelta) 
		{ 
		case 1: 
		{ 
		cout << "Hai scelto di creare una nuova classifica"<<endl; 
		cout << "Inserisci il numero delle squadre del tuo campionato: "<<endl; 
		cin >> numero_squadre;
		
		squadra = new SQUADRA[numero_squadre]; 
		if(squadra == NULL) 
		{ 
		cout << "Memoria esaurita!"<<endl;
		exit(1); 
		} 
		
		for(int i=0; i<numero_squadre; i++) 
		{ 
		cout << "Inserisci il nome della squadra " << i+1  <<endl ; 
		cin.getline(squadra[i+1].nome, 14); 
		} /* 
		cout << \"\\nI nomi delle squadre che hai inserito sono:\\n\"; 
		
		for(i=0; i<numero_squadre; i++) 
		
		cout << \"Squadra numero\" << i+1 << \": \" << squadra[i+1].nome << endl; */ 
		
		delete squadra; 
		
		numero_giornate = (numero_squadre-1)*2; 
		cout << "Il numero totale delle giornate da giocare sono: " <<endl << numero_giornate <<endl; 
		cout << "Delle quali " << numero_giornate/2 << " per l'andata e " << numero_giornate/2 << " per il ritorno" <<endl;
		numero_incontri = numero_squadre/2; 
		
		incontro = new PARTITA[numero_incontri]; 
		if(incontro == NULL) 
		{ 
		cout << "Memoria esaurita!"; 
		exit(1); 
		} 
		
		for(int i=0; i<numero_giornate/2; i++) 
		{ 
		cout << "Inserimento delle partite per la giornata numero" << i+1 <<endl;
		for(int j=0; j<numero_incontri; j++) 
		{ 
			cout << "Partita numero " << j+1 << ", squadra in casa: " <<endl;
		cin.getline(incontro[j+1].squadra_casa, 14); 
		cout << "Partita numero " << j+1 << ", squadra fuori casa: " <<endl; 
		cin.getline(incontro[j+1].squadra_fuori, 14); 
		delete incontro; 
		} 
		} 
		} 
		break; 
		
			case 2: 
		cout << "Hai scelto il caso 2" <<endl;
		break; 
		
		case 3: 
		cout << "Hai scelto il caso 3" <<endl;
		break; 
		
		case 4: 
		cout << "Hai scelto di uscire dal menu...alla prossima!"  <<endl;
		break; 
		
		case 5: 
		cout << "Hai scelto il caso 5" <<endl;
		break; 
		
		} 
		system("PAUSE"); 
	
	}
}; 
	
	

	


