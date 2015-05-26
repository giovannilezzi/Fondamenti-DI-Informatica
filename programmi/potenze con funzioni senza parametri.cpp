#include <iostream>
#include <cstdlib>

using namespace std;

void LetturaPotenza();
void CalcoloPotenza();

int main()
{
	LetturaPotenza();
	CalcoloPotenza();
	
	system("PAUSE");
	return 0;
}

void LetturaPotenza()
{
	int base,esp;
	cout<<"Inserire la base"<<endl;
	cin>>base;
	cout<<"Inserire l'esponente"<<endl;
	cin>>esp;
}

void CalcoloPotenza()
{
	int base,esp,i,pot;
	if(esp<=0)
	{
		cout<<"L'operazione non è possibile"<<endl;
	}
	else if(base==0 && esp==0)
	{
		cout<<"L'operazione non è possibile"<<endl;
	}
	else
	{
		i=0;
		pot=1;
		while(i<esp)
		{
			pot=pot*base;
			i++;
		}
		
		cout<<"Il risultato è :"<<pot<<endl;
		
	}
}







