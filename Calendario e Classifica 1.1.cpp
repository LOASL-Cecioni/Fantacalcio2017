#include <iostream> 
#include <cstdlib> 
#include <stdlib.h> 
#include <string.h> 
#define DIM 15
using namespace std; 

typedef struct { 
int squadre,nome; 
int partite_casa, partite_fuori, punti, vinte, pareggiate, perse, gol_fatti, gol_subiti; 
} SQUADRA ; 

typedef struct { 
char squadra_casa[15]; 
char squadra_fuori[15]; 
int punteggio_casa, punteggio_fuori; 
} PARTITA; 

typedef struct { 
PARTITA incontro; 
} GIORNATA; 

int main() 
{ 
int scelta, numero_squadre, i, j, numero_giornate, numero_incontri,squadra_fuori,squadra_casa, squadre_nome; 
SQUADRA *squadra;
PARTITA *incontro; 
GIORNATA *giornata; 
int squadra_nome [15];

do 
{ 

cout << "***************** GESTIONE TORNEO ***********************"; 
cout << "\\n\\n Scegli un'operazione da fare\\n\\n"<<endl;
cout << "1. Crea campionato\\n" <<endl; 
cout << "2. Inserisci i risultati\\n"<<endl ; 
cout << "4. Esci dal menu del campionato\\n"<<endl ; 
cout << "Scelta: " ; 
cin >> scelta; 
} while(scelta!=1 && scelta!=2 && scelta!=3 && scelta!=4 && scelta!=5); 

switch(scelta) 
{ 
case 1: 
{ 
cout << "\\n*****Hai scelto di creare un nuovo campionato*****\\n "<<endl; 
cout << "Inserisci il numero delle squadre del tuo campionato: "; 
cin >> numero_squadre; 

squadra = new SQUADRA; 
if(squadra == NULL) 
{ 
cout << "\\n Memoria esaurita! "; 
exit(1); 
} 

for(i=0; i<numero_squadre; i++) 
{ 
cout<< "Inserisci il nome della squadre: " << i+1 ; 
cin>>squadre_nome ,15; 

}


for(i=0; i<numero_squadre; i++) 
cout <<(numero_squadre ,15); 

delete squadra; 

numero_giornate = (numero_squadre-1)*2; 
cout << "\\n Il numero totale delle giornate da giocare sono: " << numero_giornate; 
cout << "\\n Delle quali " << numero_giornate/2 << " per l'andata e " << numero_giornate/2 << " per il ritorno"; 
numero_incontri = numero_squadre/2; 

incontro = new PARTITA[numero_incontri]; 
if(incontro == NULL) 
{ 
cout << "\\n Memoria esaurita! "; 
exit(1); 
} 

for(i=0; i<numero_giornate/2; i++) 
{ 
cout << "\n\\n Inserimento delle partite per la giornata numero " << i+1; 
for(j=0; j<numero_incontri; j++) 
{ 
cout << "\\n Partita numero " << j+1 << " squadra in casa:"; 
cin>>(incontro[j+1]. squadra_casa [14]); 
cout << "Partita numero " << j+1 << " squadra fuori casa: "; 
cin>>(incontro[j+1]. squadra_fuori [14]); 
delete incontro; 


break; 
case 2: 
cout << "Hai scelto il caso 2\\n\\n"<<endl; 
break; 
case 3: 
cout << "Hai scelto il caso 3\\n\\n"<<endl; 
break; 
case 4: 
cout << "Hai scelto di uscire dal menu...alla prossima!\\n\\n"<<endl; 
break; 


system("pause"); 
return EXIT_SUCCESS; 
}
}
}
}}
