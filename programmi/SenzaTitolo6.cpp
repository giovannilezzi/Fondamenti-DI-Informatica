#include <iostream>
#include <cstdlib>
using namespace std;

struct elemento
{
	int valore;
	elemento* next;
};
elemento* p=NULL;

typedef elemento* pelem;

void CreaLista(pelem & p,int n);
void ConfrontaLista(pelem & p,int n);
void StampaLista(pelem p);

int main()
{
	int n;
	cout<<"Inserire la dimensione della lista"<<endl;
	cin>>n;
	pelem lista;
	CreaLista(lista,n);
	ConfrontaLista(lista,n);
	StampaLista(lista);
	
	system("PAUSE");
	return 0;
	
}

void CreaLista(pelem & p,int n)
{
	p=new elemento;
	cout<<"elemento 0 = ";
	cin>>p->valore;
	pelem p1;
	p1=p;
	for(int i=0;i<n;i++)
	{
		p1->next=new elemento;
		p1=p1->next;
		cout<<"elemento"<<i+1<<" = ";
		cin>>p1->valore;
	}
	p1->next=NULL;
}

void ConfrontaLista(pelem & p,int n)
{
	pelem p2,prec,p3;
	p2=p;
	while(p2!=NULL)
	{
		if(p2->valore%2!=0)
		{
			prec=p2;
			p3=new elemento;
			p3->valore=p2->valore;
			p3->next=p;
			p=p3;
		}
		//delete prec;
		p2=p2->next;
	}
	
	
}

void StampaLista(pelem p)
{
	pelem p4=p;
	while(p4!=NULL)
	{
		cout<<p4->valore<<"  ";
		p4=p4->next;
	}
}












































