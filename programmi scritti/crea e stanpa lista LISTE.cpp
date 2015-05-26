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


int main()
{int n;
 cout<<"Di quanti elementi è composto la lista";
 cin>>n;
 pelem p;
 p= new elemento;
 cout<<"inserire il valore 0";
 cin>> p->valore;
 pelem p1;
 p1=p;
 for(int i=1;i<=n;i++)
 {
 p1->succ=new elemento;
 p1=p1->succ;
 cout<<"elemento"<<i<<"=";
 cin>>p1->valore;
}p1->succ=NULL;
 p1=p;
while (p1!=NULL)
{ cout<<p1->valore;
p1=p1->succ;
}

 
 system("PAUSE");
 return 0;
}

