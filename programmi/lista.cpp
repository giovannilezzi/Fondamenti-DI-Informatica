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

int main()
{
	int n;
	cout<<"Inserire gli il num. degli elementi della lista"<<endl;
	cin>>n;
	pelem lista;
	CreaLista(lista,n);
}

void CreaLista(pelem & p,int n)
{
	p=new elemento;
	cout<<"elemento 0=";
	cin>>p->valore;
	pelem p1;
	p1=p;
	for(int i=1;i<=n;i++)
	{
		p1->succ=new elemento;
		p1=p1->succ;
		cout<<"elemento" <<i<<"=";
		cin>>p1->valore;
	}
	p1->succ=NULL;
}


