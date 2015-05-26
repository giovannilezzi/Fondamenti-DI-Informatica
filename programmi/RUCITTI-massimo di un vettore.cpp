#include <iostream>
#include <cstdlib>
using namespace std ;

int main ()

{
	cout<<"Programma che riconosce il massimo di un vettore"<<endl;
	
	int i,max,n;
	
	const int DIM=100;
	int v[DIM];
	
	cout<<"Inserire la dimensione"<<endl;
	cin>>n;
	
	cout <<"Inserire il"<< 1 <<"valore";
	cin>>v[0];
	max=v[0];
	
	for(int i=0;i<n;i++)
	{
		cout<<"Inserire il :"<<i+1<<"valore"<<endl;
		cin>>v[i];
		
		if(v[i]>max)
		{
			max=v[i];
			cout<<"Il massimo è :"<<v[i]<<endl;
		}
		else
		{
			max=max;
			cout<<"Il massimo rimane :"<<max<<endl;
			
		}
	}
	
	system("PAUSE");
	return 0;
    }
