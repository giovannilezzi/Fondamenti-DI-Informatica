#include <iostream>
#include <cstdlib>
using namespace std;
 

int main()
{
   int n,base,i,cifra,valore,potenza; 
    
   cout<<"Conversione da base qualsiasi a base 10";
   cout<<endl;
   cout<<"Di quante cifre e' composto il numero da convertire? ";
   cin>>n;
   cout<<"In che base e' espresso il numero da convertire? ";
   cin>>base;
   
   i=1;
   potenza=1;
   valore=0;
   
   cout<<"dato il numero cn-1 cn-2 ... c1 c0"<<endl;
   cout<<"inserire le cifre dalla cifra c0 alla cifra cn-1 "<<endl;
   
   while (i<=n)
   {
         cout<<"c"<<i-1<<"= ";
         cin>>cifra;
         valore=valore+cifra*potenza;
         potenza=potenza*base;
         i=i+1;
   }
   cout<<"Il valore del numero in base 10 e' = ";
   cout<<valore;
              
     system("PAUSE");
     return 0;
}
