#include <iostream>
#include <cstdlib>
using namespace std;


int main()
{ 
 int n,i,s,p;
 const int DIM=100;
 typedef int vettore[DIM];
 p=0;
 cout<<"questo programma fa il prodotto scolare tra due vettori";
 cout<<"inserire la dimensione dei vettori";
 cin>>n;
 vettore v1,v2;
 for(i=0;i<n;i++)
 {
 cout<<"inserire il"<<i+1<<"valore";
 cin>>v1[i];
 }
 cout<<endl;
 for (i=0;i<n;i++)
 {
 cout<<"inserire il"<<i+1<<"valore";
 cin>>v2[i];
 }
 for(i=0;i<n;i++)
 {
 s=p+v1[i]*v2[i];
 p=v1[i]*v2[i];
 }
 cout<<s;


 
 system("PAUSE");
 return 0;
}

