#include <iostream>
#include <cstdlib>

using namespace std;

const int DIM=100;
typedef int vettore[DIM];

void LetturaVettore(int* & vett,int dim);
void SommaVettori(int *x,int *y,int* & z,int dim);
void StampaVettore(int* & vett,int dim);

int main()
{
	int n;
	cout<<"Inserire la dimensione"<<endl;
	cin>>n;
	
	int *a,*b,*c;
	
	a=new int;
	b=new int;
	
	LetturaVettore(a,n);
	LetturaVettore(b,n);
	SommaVettori(a,b,c,n);
	StampaVettore(c,n);
	
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

void SommaVettori(int *x,int *y,int* & z,int dim)
{
	z=new int[dim];
	for(int i=0;i<dim;i++)
	{
		z[i]=x[i]+y[i];
	}
}

void StampaVettore(int* & vett,int dim)
{
	for(int i=0;i<dim;i++)
	{
	   cout<<"v["<<i<<"]="<<vett[i]<<endl;
    }
}













