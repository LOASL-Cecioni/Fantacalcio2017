#include <string.h>
#include <iostream>
using namespace std;

class Regolamento {
private:	
	int scelta,  orario,  bonus,  voti;
public:
 	int s_regolamento(){	
	    cout <<"Visualizza Regolamento"<<endl;
	  	cout << "Scegli cosa visualizzare" <<endl;
	  	cout << "1. Visualizza orario" <<endl;
	  	cout << "2. Visualizza bonus" <<endl;
	  	cout << "3. Visualizza voti" <<endl;
	  	cout << "4. Esci dal regolamento" <<endl;
	  	cout << "scelta: ";
     	cin >> scelta;
	
		if(scelta==1){
			cout<<"La formazione dovrà essere inserita entro due ore dall'inizio della prima gara della giornata corrente." <<endl;
		}else if(scelta==2){
			cout<<"goal= +3, assist= +1, autogol= -2, cartellino giallo= -0.5, cartellino rosso (doppio giallo), cartellino rosso (diretto)= -2." <<endl;cout << "5.torna indietro" << endl ;
		}else if(scelta==3){
			cout<< "votazioni: da 60 a 66= 1 gol, da 66 a 70= 2 gol, da 70 a 74= 3 gol, da 74 a 80 = 4 gol, da 80+ = 5+ gol." <<endl;cout << "5.torna indietro" << endl ;
		}else {
			cout<< "Esci dal regolamento"<<endl;
		}
	  return scelta;
	}
};

int main(){
	Regolamento scelta;
	int scelta_pg;
	do{
		scelta_pg = scelta.s_regolamento();
		system("Pause");
		system("cls");	  
	}while(scelta_pg!= 4);
	cout<< "Fine"<<endl;
	system("Pause");
}
