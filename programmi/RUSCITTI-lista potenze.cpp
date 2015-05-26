#include <iostream>
#include <cstdlib>
using namespace std;

struct elemento
{
	int valore;
	elemento* succ;
};
typedef elemento* pelem;

void crealistapotenze(pelem & p,int n);
void stampalista(pelem & p);
int main ()
{ 
  int n;
  pelem l;
  cout<<"Di quanti numeri è composta la lista?";
  cin>>n;
  crealistapotenze(l,n);
  stampalista(l);
  system("PAUSE");
  return 0;

}


void crealistapotenze(pelem & p,int n)
{   int potenza=1;
    int base;
    cout<<"inserire la base";
	cin>>base;
	pelem paux=new elemento;
	paux->succ=p;
	p=paux;
	for (int i=0;i<n;i++)
	{   
	   paux->succ=new elemento;
	   paux=paux->succ;
	   potenza=potenza*base;
	   paux->valore=potenza*base;
	}
    paux->succ=NULL;
	paux=p;
	p=p->succ;
	delete paux;
}




void stampalista(pelem & p)
{
 while(p!=NULL)
 {
 cout<<p->valore<<" ";
 p=p->succ;
 }
}
