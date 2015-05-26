#include <iostream>
#include <cstdlib>
#include <string>
#include <cmath>
using namespace std;

struct elemento
{
       int valore;
       elemento* succ;
};

typedef elemento* pelem;

void CreaListaFib (pelem & p, int n);
void StampaLista(pelem p);

int main ()
{
int n;
pelem lista;
cout<<"Questa funzione crea una lista con inseriti i primi n numeri di Fibonacci, inserisci n (maggiore di 0):"<<endl;
cin>>n;
CreaListaFib(lista,n);
StampaLista(lista);
system ("PAUSE");
return 0;
}

void CreaListaFib(pelem & p, int n)
{
     p=new elemento;
     int f1,f2;
     f1=0;
     f2=1;
     p->valore=f2;
     pelem p1=p;
     for (int i=1;i<n;i++)
     {
         p1->succ=new elemento;
         p1=p1->succ;
         p1->valore=f1+f2;
         f1=f2;
         f2=p1->valore;
     }
     p1->succ=NULL;
}

void StampaLista(pelem p)
{
     while (p!=NULL)
     {
           cout<<p->valore<<" ";
           p=p->succ;
     }
     cout<<endl;
}
         
                 
