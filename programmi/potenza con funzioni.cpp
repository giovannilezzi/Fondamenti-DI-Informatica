#include <iostream>
#include <cstdlib>

using namespace std;

void LetturaPotenza(int b,int e);
void CalcoloPotenza(int b,int e);


int main()
{
	int base,esp;
	
	LetturaPotenza(base,esp);
	CalcoloPotenza(base,esp);
	
	
	system("PAUSE");
	return 0;
}

void LetturaPotenza(int b,int e)
{
	cout<<"Inserire la base"<<endl;
	cin>>b;
	cout<<"Inserire l'esponente"<<endl;
	cin>>e;
}

void CalcoloPotenza(int b,int e)
{
	int i,pot;
	if(e<0)
	{
		cout<<"L'operazione non è possibile"<<endl;
	}
	else if(b==0 && e==0)
		{
			cout<<"L'operazione non è possibile"<<endl;
		}
    else
		{
			i=1;
			pot=1;
			while(i<e)
			{
				pot=pot*b;
				i++;
			}
			
			cout<<"Il risultato è :"<<pot<<endl;
			
		}
}

















