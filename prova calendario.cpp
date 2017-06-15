#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <iostream>
#define max 50
using namespace std;

void menuprincipale();
void sottomenu();
void Campionato();
int Casuale(int Max);
void inseriscisquadra();
void Intestazione();
void StampaGiornata();

typedef struct{
        char nome_squadra[15];
        } Squadra;
        
typedef struct{
        int casa;
        int ospite;
        } Abbinamento;
                

Squadra Elenco_Squadre[max];
Abbinamento Elenco_Partite[max];

int n_squadre=10;


Squadra Partita_Casa[max];
Squadra Partita_Ospiti[max];

int main(int argc, char *argv[])
{     
    system("color 2e");
    menuprincipale();
                   }
                   
                   
/*********************** Funzioni Menu ***********************/ 


void menuprincipale(){
             
             int selezione;
            
            Intestazione();
            
             printf("Digita:\n"
                  "1) Creazione Calendario incontri \n"
                  "0) Esci \n");
                      
               
             scanf("%d", &selezione);
              
              switch(selezione){
                  
              case 1: 
                 sottomenu();
                 break;
             
              case 0:
                printf("\n Arrivederci.  \n\n");
                 break;
                 
            default: printf("ERRORE: Selezione non valida, effettuare una scelta corretta.\n");
            system("pause");
            
            }
}

void sottomenu(){
     system("cls");
     
     Intestazione();
     
     int selezione;
          
           printf("Scegli tipo di Calendario:\n"
                  "1) Calendario Fantacalcio \n"
                  "0) Torna al menù principale\n");
                      
               
             scanf("%d", &selezione);
              
              switch(selezione){
                  
              case 1: 
                 Campionato();
                 break;
              
              case 0:
                 system("cls"); 
                 menuprincipale();
                 break;
                 }
}


/*********************** Funzione Random ***********************/

int Casuale(int Max){
time_t t;
srand((unsigned) time(&t));

return rand()%Max;
} 
/*********************** Modalità Torneo ***********************/ 

void Campionato(){
      system("cls");
     
    Intestazione();
     
    int Num_Sorteggi=0;
    int i,k;
    int nonValido = 0;
    
//    printf("\n\n - Inserisci numero di squadre: \t\t\t\t");
//    scanf("%d",&n_squadre);
                           
                           //Richiamo la funzione nserisci squadra
                 inseriscisquadra();
             
             
    for(int i=0; i<n_squadre; i++){
             
            for(k=0;k<n_squadre;k++){
                                     if(k==i){
                                              continue;
                                              }
                                              Elenco_Partite[Num_Sorteggi].casa = k;
                                              Elenco_Partite[Num_Sorteggi].ospite = i;
                                              Num_Sorteggi++;
                                              }                  
    }  
    
	           
    system("Pause");         
             //Mescoliamo l'array 
           

             printf("ATTENDERE PREGO... \n\n");
                                       
//             for(i=0;i<46;i++){
//                                 system("echo prova > null \n");
//                                 
//                                 int swap = Casuale(Num_Sorteggi);
//                                 Abbinamento AUX = Elenco_Partite[Num_Sorteggi-1];
//                                 Elenco_Partite[Num_Sorteggi-1] = Elenco_Partite[swap];
//                                 Elenco_Partite[swap] = AUX;
//                                 }
//	
          
             for(i = 0;i<Num_Sorteggi;i++){
                   
                  StampaGiornata();
                   
                  }
                   system("pause");                         
}


void inseriscisquadra(){
     int selezione;
     int i;
                           for(i=0; i<n_squadre; i++){                                   
                           printf("\n - Inserire il nome della squadra:  \t\t\t\t");
                           scanf("%s", Elenco_Squadre[i].nome_squadra);                 
                           }
}     
                     
                              
void Intestazione(){
      printf("                                                   ********************************\n");    
      printf("                                                    *     Calendario Fantacalcio    *\n");
      printf("                                                     ********************************\n");
     }
     
void StampaGiornata() {
     int NumGiornate;
     int  k=n_squadre-1;
     int j=(n_squadre/2)*2*k;
	 system("pause");     
     //for(int = 0; NumGiornat  e=j-1; NumGiornate++){
     //	cout<<"NumGiornate "<<NumGiornate<<endl;
     // 	printf("Giornata numero %d", NumGiornate);
     int a[90];
     int b[90];
     
	    
	      
	 
	  for(int i=0; i<j; i++){
             cout << Elenco_Squadre[Elenco_Partite[i].casa].nome_squadra<<"    "<< Elenco_Squadre[Elenco_Partite[i].ospite].nome_squadra<<endl;
			  
       };

	 for (int i=0;i<90;i++){cout << "inserisci i risultati";
   	cin >> a[i];
    	cin >> b[i];
    	cout<<endl;
	 	//}	
     };
	 for(int i=0; i<j; i++){
             cout << Elenco_Squadre[Elenco_Partite[i].casa].nome_squadra<<" "<<a[i]<<"    "<< Elenco_Squadre[Elenco_Partite[i].ospite].nome_squadra<<" "<<b[i]<<endl;
			  
       };

}










