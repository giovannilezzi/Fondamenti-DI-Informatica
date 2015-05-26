#include <iostream>
#include <cstdlib>
using namespace std;

const int GIOCATORI=4;
const int FONDAMENTALI=4;
int tabellino[GIOCATORI][FONDAMENTALI];


string giocatori[GIOCATORI]={"Urbani","Masci","Ruscitti","Valentini"},
       fondamentali[FONDAMENTALI]={"3 Punti","2 Punti","Passaggio","Stoppata"};
       
int main(int argc,char *argv[])

{
	cout<<"PROGRAMMA DI UNO SCOUTER"<<endl;
	cout<<"Il giudizio va da 1 a 10"<<endl;
	
	for(int giocatore=0;giocatore<GIOCATORI;giocatore++)
	{
		cout<<"Stai per inserire il giocatore :"<<giocatori[giocatore]<<endl;
		
		for(int fondamentale=0;fondamentale<FONDAMENTALI;fondamentale++)
		{
			cout<<"Voto dei fondamentali :"<<fondamentali[fondamentale]<<endl; 
			cin>>tabellino[giocatore][fondamentale];
		}
		
		for(int giocatore=0;giocatore<GIOCATORI;giocatore++)
		{
		   for(int fondamentale=0;fondamentale<FONDAMENTALI;fondamentale++)
		   {
		   	    cout.width(20);
				cout<<tabellino[giocatore][fondamentale];
		   }
		   
		   cout<<endl;
	    }
	}
	    
	    system("PAUSE");
	    return 0;
}       
