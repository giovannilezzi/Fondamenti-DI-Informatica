#include <iostream>
#include <cstdlib>

using namespace std;

const int DIM=100;
typedef int vettore[DIM];

void LetturaVettore(int* & vett,int dim);


int main()
{
	int n;
	cout<<"Inserire la dimensione"<<endl;
	cin>>n;
	int *p;
	
	LetturaVettore(p,n);
		
	cout<<*p;
	
	system("PAUSE");
	return 0;
}

void LetturaVettore(int* & vett,int dim)
{
	vett=new int[dim];
	for(int i=0;i<dim;i++)
	{
		cout<<"Inserire il :"<<i+1<<"valore"<<endl;
		cin>>vett[i];
	}
}



