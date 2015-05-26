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
 void CancCoda(pelem & p);
int main ()
{ 
   int n,i;
   pelem p=new elemento;   //record generatore
   pelem p1=p;
   i=0;
   while(p1->valore!=0)
   { p1->succ=new elemento;
     p1=p1->succ;
     cout<<"elemento"<<i<<"=";
     cin>>p1->valore;
     i++;
   } p1->succ=NULL;
   p1=p;
   p=p->succ;
   delete p1;
   CancCoda(p);
   
   while (p!=NULL)
{ cout<<p->valore<<"  ";
p=p->succ;
}
   

system("PAUSE");
 return 0;
}


void CancCoda(pelem & p)
{
	if (p!=NULL)
{
elemento* paux=new elemento;  //record generatore
paux->succ=p;    //posto in testa alla lista originaria         
p=paux;          //la lista parte dal record generatore
while(paux->succ->succ!=NULL)	
 paux=paux->succ;
 delete paux->succ;
 paux->succ=NULL;
 paux=p;      //riportiamo paux ad inizio lista
 p=p->succ;   //la lista parte dal secondo elemento
 delete paux;  //deallocazione record generatore
}
}
