#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

const int DIM=100;
typedef int vettore[DIM];
void LetturaDimensione (int & n);
void LetturaArray(int n,vettore vett);
void StampaArray (int n,vettore vett);
void OrdinaArray (int n,vettore vett);
int main ()
{
int num;
vettore v;
LetturaDimensione(num);
LetturaArray(num,v);
StampaArray(num,v);
OrdinaArray(num,v);
StampaArray(num,v);

system ("PAUSE");
return 0;
}

void LetturaDimensione(int & n)
{
     cout<<"Inserisci la dimensione dell'array:"<<endl;
     cin>>n;
}

void LetturaArray(int n,vettore vett)
{
     for (int i=0;i<n;i++)
        {
        cout<<"Inserisci l'elemento ["<<i+1<<"]:"<<endl;
        cin>>vett[i];
        }
}

void StampaArray(int n,vettore vett)
{
     cout<<"Array:"<<endl;
     for (int i=0;i<n;i++)
        cout<<vett[i]<<endl;
}

void OrdinaArray(int n,vettore vett)
{
     int min,scambio;
     for (int i=0;i<n-1;i++)
     {
         min=i;
         for (int j=i+1;j<n;j++)
            if (vett[j]<vett[min])
                {
                min=j;
                scambio=vett[i];
                vett[i]=vett[min];
                vett[min]=scambio;
                }
     }
}
