#include <iostream>
#include <cstdlib>
using namespace std;

int main ()

{
	int N,I,P,X;
	
	cout<<"Programma per moltiplicare N numeri"<<endl;
	
	cout<<"Inserire il numero di numeri da moltiplicare";
	cin>>N;
	
	
	P=1;
	
	for(I=1;I<=N;I=I+1)
	{
		cout<<"Inserire i numeri"<<endl;  //oppure lo possiamo anche fare con il ciclo while
		cin>>X;
		
		P=P*X;
		
	}
	
	cout<<"Il prodotto è :" << P << endl;
	
	system("PAUSE");
	return 0;
}
