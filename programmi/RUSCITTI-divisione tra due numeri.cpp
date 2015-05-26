#include <iostream>
#include <cstdlib>
using namespace std;

int main ()

{
	float a,b,c;  
	
	cout<<"Programma che divide due numeri se possibile " << endl;
	
	cout<<"Inserisci il numeratore";
	cin>>a;
	
	cout<<"Inserisci il denominatore";
	cin>>b;
	
	if(b!=0)
	{
		c=a/b;
		cout<<"Il risultato è:" << c << endl;
	}
	else
	{
		cout<<"La divisione non è possibile " << endl;
	}
	
	system("PAUSE");
	return 0;
}
