#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{ int n,i,s;
cout <<"Questo programma fa la somma degli elementi di un vettore"<<endl<<endl;
cout<<"inserie la dimensione del vettore";
cin>>n;
int v[n];
i=0;
s=0;
while (i<n)
{
cout<<"inserire il"<<""<<i+1<<"valore";
cin>>v[i];
s=s+v[i];
i++;
}
cout<<"la somma degli elementi del vettore e':"<<""<<s;

system("PAUSE");
     return 0;
}
