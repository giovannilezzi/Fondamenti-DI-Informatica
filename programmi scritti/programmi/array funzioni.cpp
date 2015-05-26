#include <iostream>
#include <cstdlib>
using namespace std;

const int D=100;
typedef int vettore[D];

void LetturaVettore(vettore v,int d);
void SommaElementi(vettore v,int d,int & s);

int main()
{
    int n;
    vettore x;
    cout<<"Somma di valori";
    cout<<"inserire il numero di valori";
    cin>>n;
    int somma; 
    LetturaVettore(x,n); 
    SommaElementi(x,n,somma);  
    cout<<"la loro somma  e' "<<somma<<endl;
      
     system("PAUSE");
     return 0;
}

void SommaElementi(vettore v,int d,int & s)
{
   int i;
   s=0;
   for (i=0;i<d;i++)
      s=s+v[i];   
}

void LetturaVettore(vettore v,int d)
{ 
  int i;
  for (i=0;i<d;i++) 
  {
    cout<<"inserire il "<<i<<" valore";
    cin>>v[i];
  }
    
}


