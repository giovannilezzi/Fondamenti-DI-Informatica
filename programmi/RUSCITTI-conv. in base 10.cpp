#include <iostream>
#include <cstdlib>

using namespace std;

int main ()

{
	int N,base,Potenza,Valore,cifra,I;
	
	cout<<"Programma per la conversione in base 10"<<endl;
	
	cout<<"Inserire il numero di cifre"<<endl;
	cin>>N;
	
	cout<<"Inserire la base "<<endl;
	cin>>base;
	
	I=1;
	Potenza=1;
	Valore=0;
	
	while(I<=N)
	{
		cout<<"Inserisci le cifre"<<endl;
		cin>>cifra;
		Valore=Valore+(cifra*Potenza);
		Potenza=Potenza*base;
		I++;
	}
	
	cout<<"Il risultato è :" <<Valore<< endl;
	
	system("PAUSE");
	return 0;
	
}
