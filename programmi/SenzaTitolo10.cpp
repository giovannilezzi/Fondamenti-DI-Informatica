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
void StampaLista(pelem p);

int main()
{
	int n;
	cout<<"Inserire la dimensione della lista"<<endl;
	cin>>n;
	pelem lista;
	CreaLista(lista,n);
	StampaLista(lista);
	
	system("PAUSE");
	return 0;
}

void CreaLista(pelem & p,int n)
{
	int base,potenza;
	cout<<"Inserire la base"<<endl;
	cin>>base;
	potenza=1;
	p=new elemento;
	pelem p1;
	p1=p;
	for(int i=0;i<n;i++)
	{
		p1->next=new elemento;
		p1=p1->next;
		potenza=potenza*base;
		p1->valore=potenza;
	}
	p1->next=NULL;
	p1=p;
	p=p->next;
	delete p1;
}

void StampaLista(pelem p)
{
	pelem p4=p;
	while(p4!=NULL)
	{
		cout<<p4->valore<<" ";
		p4=p4->next;
	}
}






















