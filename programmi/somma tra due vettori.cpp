#include <iostream>
#include <cstdlib>

using namespace std ;

int main ()
{
	cout<<"Programma per la somma tra due vettori"<<endl;

	const int DIM=3;
	
	typedef int vettore[DIM];
	

	vettore v1,v2,v3;
	
	for(int i=0;i<DIM;i++)
	{
		cout<<"Inserire il "<< i+1 <<" valore "<<endl;
		cin>>v1[i];
	}
	
	for(int i=0;i<DIM;i++)
	{
		cout<<"Inserire il "<< i+1 <<" valore "<<endl;
		cin>>v2[i];
	}
	
	for(int i=0;i<DIM;i++)
	{
		v3[i]=v1[i]+v2[i];
	}
	
	for(int i=0;i<DIM;i++)
	{
		cout<<"v["<<i<<"]="<<v3[i]<<endl;
	}
	
	system("PAUSE");
	return 0;
}

