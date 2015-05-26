#include <iostream>
#include <cstdlib>
using namespace std;

int main ()

{
	
	int N,I,S,X;
	
	I=1;
    S=0;
	
	cout<<"Programma che somma N numeri :";
	
	cout<<"Inserire gli N numeri :";
	cin>>N;
	
	while(I<=N)
	{
		cout<<"Introduci i numeri :";
		cin>>X;
		S=S+X;
		I=I+1;
	}

		cout<<"Il risultato è :" << S << endl ;
	
	
	system("PAUSE");
	return 0;
}
