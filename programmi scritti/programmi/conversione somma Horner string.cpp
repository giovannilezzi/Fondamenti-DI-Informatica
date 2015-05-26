#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
 
int main()
{
   int n,base,i,valore; 
    
   cout<<"Conversione da base qualsiasi a base 10";
   cout<<endl;
   cout<<"In che base e' espresso il numero da convertire? ";
   cin>>base;
   
   i=0;
   valore=0;
   string cifra;
   cout<<"inserire il numero da convertire ";
   cin>>cifra;
   n=cifra.size();

   while (i<n)
   {
         valore=valore*base+cifra[i]-'0';
         i=i+1;
   }
   cout<<"Il valore del numero in base 10 e' = ";
   cout<<valore;
              
     system("PAUSE");
     return 0;
}
