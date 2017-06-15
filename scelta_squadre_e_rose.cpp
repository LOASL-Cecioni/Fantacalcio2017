#include<Fantacalcio2017.h>
#include<iostream>
#include<string>


struct s_giocatore{
 	string nome;
 	string cognome;
 	string squadra;
 	string ruolo;
                 };


	struct s_squadra {
		string nome_squadra;
		s_giocatore rosa_giocatori[11];
          	};

s_squadra squadre_totali[10];
class scelta_squadre_e_rose{
public:	
	s_squadra[10] squadre_totali(){
	

for(int i=0;i<10;i++){
	cout << "scegli i nomi delle squadre" << endl ;
	cin >> squadre_totali[i].nome_squadra;	
   for (int j=0;j<11;j++){
 	cout << "scrivi nome, cognome, squadra e ruolo del giocatore" << endl ;
   	    cin >> squadre_totali[i].rosa_giocatori[j].nome ;
   	    cin >> squadre_totali[i].rosa_giocatori[j].cognome ;
   	    cin >> squadre_totali[i].rosa_giocatori[j].squadra ;
        cin >> squadre_totali[i].rosa_giocatori[j].ruolo ; 
		cout << squadre_totali[i].nome_squadra << ":  ";
	 	cout << squadre_totali[i].rosa_giocatori[j].nome<< "  " ;
	 	cout <<  squadre_totali[i].rosa_giocatori[j].cognome<< "  " ;
	 	cout <<  squadre_totali[i].rosa_giocatori[j].squadra<< "  " ;
	 	cout << squadre_totali[i].rosa_giocatori[j].ruolo ; 
		                                      
		};

	 };return s_squadra[11];
};
 };         
 
 

