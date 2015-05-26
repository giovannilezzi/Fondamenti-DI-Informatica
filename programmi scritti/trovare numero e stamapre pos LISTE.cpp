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
 
void CreaLista(pelem & p,int n);
void CercaPos (pelem & p;int n,int & pos)
void StampaLista(pelem p);


int main()
{int num,n,pos;
 cout<<"Di quanti elemnti e' composta la lista?";
 cin>>n;
 pelem p;
 CreaLista(p,n);
 cout<<"La Lista e':";
 StampaLista(p);
 cout<<"quale numero bisogna controllare?";
 cin>>num;
 bool trovato=true;
 pos=0;
 while (pos<n && trovato)
 {
 if(p->valore!=num)
  {
  p=p->succ; 
  pos++; 
  }
 else trovato=false;
 }
 if (trovato)cout<<"-1";
 else cout<<"il valore cercato e' in posizione:   "<<pos<<endl;
 
 
 system("PAUSE");
 return 0;
}
 
 
 
 
 
 

void CreaLista (pelem & p,int n)
{
	p=new elemento;
	pelem p1=p;
	for (int i=0; i<n;i++)
	{ p1->succ=new elemento;
	p1=p1->succ;
	cout<<"inserire elemento"<<i<<"=";
	cin>>p1->valore;
	}
	p1->succ=NULL;
	p1=p;
	p=p->succ;
	delete p1;
}

 
 
 
 
 
 
 
 
 void StampaLista(pelem p)
{   
      pelem p1=p;
      while (p1!=NULL)
    { 
      cout<<p1->valore<<"  ";
      p1=p1->succ;
 
    } 
}
