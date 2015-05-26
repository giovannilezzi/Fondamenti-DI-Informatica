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
//void CreaListaInv(pelem & p,int n);
void InsTesta(pelem & p,int n);
void InsCoda(pelem & p,int n,int x);
void insIntermedio(pelem  p,int x);
void StampaLista(pelem p);
void DistruggiLista(pelem & p);

int main()
{
	int n,m,num,i;
	cout<<"Inserire il numero degli elementi"<<endl;
	cin>>n;
	pelem lista;
	CreaLista(lista,n);
	//CreaListaInv(lista,n);
	//InsTesta(lista,n);
	//InsCoda(lista,n,num);
	insIntermedio(lista,m);
	//StampaLista(lista);
	//DistruggiLista(lista); 
	//istruzione"<<endl;
	i=0;
	while(i<n)
	{
		pelem p1;
		if(p->valore<0)
		{
			p1->next=p;
			p=p->next; 
            i++; 
		}
		else
		{
			cout<<"Non ci sono modifiche"<<endl;
		}
	}
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
	for(int i=1;i<n;i++)
	{
		p1->next=new elemento;
		p1=p1->next;
		cout<<"elemento"<<i<<"=";
		cin>>p1->valore;
	}
	p1->next=NULL;
}

void InsTesta(pelem & p,int n)
{
	for(int i=1;i<n;i++)
	{
	   pelem p2=new elemento;
	   cout<<"elemento"<<i<<" = ";
	   cin>>p2->valore;
	   p2->next=p;
	   p=p2;
    }
}

void StampaLista(pelem p)
{
	while(p!=NULL)
	{
		cout<<p->valore<<"  ";
		p=p->next;
	}
}

void DistruggiLista(pelem & p)
{
	while(p!=NULL)
	{
		pelem p3=p;
		p=p->next;
		delete p3;
		 
	}
}

void InsCoda(pelem & p,int n,int x)
{
	 if(p==NULL)
		{
			  pelem p4=new elemento;
			  p4->valore=x;
	          p4->next=NULL;
	          
		
		}
		else
		{
			pelem p5=p;
			while(p5->next!=NULL)
			p5=p5->next;
			
			p5->next=new elemento;
			p5=p5->next;
			p5->valore=x;
			p5->next=NULL;
	    }
}

void insIntermedio(pelem p,int x)
{
	pelem p2,p3;
	p2=p->next->next->next;
	p3=p2->next;
	p2->next=new elemento;
	p2=p2->next;
	p2->valore=x;
	p2->next=p3;
} 

/*void CreaListaInv(pelem & p,int n)
{
	pelem p6;
	p=NULL;
	for(int i=0;i<n;i++)
	{
		p6=new elemento;
		cin>>p6->valore;
		p6->next=p;
		p=p6;
	}
}*/































