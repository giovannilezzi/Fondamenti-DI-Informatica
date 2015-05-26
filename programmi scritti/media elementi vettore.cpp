#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{ int n,i,s;
float media;
cout<<"questo programma fa la media degli elementi"<<endl<<"di un vettore"<<endl;;
s=0;
i=0;
cout<<"Inserire la dimensione del vettore";
cin>>n;
int v[n];
for(i=0;i<n;i++)
{
cout<<"inserire il"<<i+1<<"valore";
cin>>v[i];
s=s+v[i];
}
media=s/n;
cout<<media;
system("PAUSE");
     return 0;
}
