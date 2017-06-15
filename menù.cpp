#include "Fantacalcio2017.h"
#include <iostream>
using namespace std;
 
 void menu_principale()
 {  
    cout<<"1.TEAM"<<endl;
    cout<<"2.CALENDARIO E RISULTATI"<<endl;
    cout<<"3.CLASSIFICA"<<endl;
    cout<<"4.REGOLAMENTO"<<endl;
    
    int a; //valore utilizzato come indicatore per permettere all'utente di scegliere che pagina aprire
    
//	Classifica 2016_2017;
//    
//	scelta_squadre_e_rose la_mia_squadra;
//    
//	Regolamento vedi_regole;
    
//  Calendario
    
    do
	{
		cin>>a;
	}
	while(a<1||a>3);
	
	if(a==1)
	cout<<" ";
	//la_mia_squadra.squadre_totali;

	else{
		if(a==2)
	    cout<<" ";
		//Calendario;
	
		else{
		    
			if(a==3)
		    cout<<" ";
		//	2016_2017.visualizza_classifica;
			
				else{
		           cout<<" ";
				   //  vedi_regole.s_regolamento;
				}
				
		}
		}
 }
  int main()
  {
  }
