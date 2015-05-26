#include <iostream>
#include <cstdlib>

using namespace std;

const int DIM=100;
typedef int vettore[DIM];

void LetturaVettore(vettore vett);
void ConfrontoValori(vettore vett1);

int main()
{
	vettore v;
	
	LetturaVettore(v);
	ConfrontoValori(v);
	
	system("PAUSE");
	return 0;
}

void LetturaVettore(vettore vett)
{
	int n;
	cout<<"Inserire la dimensione"<<endl;
	cin>>n;
	
	for(int j=0;j<n;j++)
	   {
	 	cout<<"Inserire il "<<j+1<<"valore"<<endl;
	 	cin>>vett[j];
	   }
}

void ConfrontiValori(vettore vett1)
{
	int i,n;
	bool crescente=true;
	while(i<=n && crescente)
	{
		if(vett1[j]<vett1[j+1])
		{
			crescente=true;
		}
		else
		{ 
		    crescente=false;
		}
	}
	cout<<"errore"<<endl;
}
