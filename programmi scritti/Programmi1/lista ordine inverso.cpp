#include <iostream>
#include <cstdlib>
using namespace std;
struct elemento
{
	int valore;
	elemento* succ;
};
 
 elemento* p=NULL;
 typedef elemento* pelem;
 
void CreaListaOrdineInverso(pelem & p,int n);
void StampaLista(pelem & p);



int main()
{int n,i;
cout<<"Di quanti elementi e' composta la lista?";
cin>>n;
pelem l;
CreaListaOrdineInverso(l,n);
StampaLista(l);

system("PAUSE");
 return 0;
}



void CreaListaOrdineInverso(pelem & p,int n)
{   
   pelem paux;
   p=NULL;
   for(int i=0;i<n;i++)
   {  
     paux=new elemento;
     cin>>paux->valore;
     paux->succ=p;
     p=paux;
   }
}
