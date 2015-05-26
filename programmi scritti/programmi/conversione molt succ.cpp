#include <iostream>
#include <cstdlib>
using namespace std;
 

int main()
{
   int  base,i;
   float numero; 
    
   cout<<"Conversione da base 10 a base qualsiasi per una parte frazionaria";
   cout<<endl;
   cout<<"Inserire il numero in base 10 da convertire? (0. ....)";
   cin>>numero;
   cout<<"In che base va convertito il numero? ";
   cin>>base;
   
   cout<<"inserire il numero di cifre decimali del risultato"<<endl;
   int precmax;
   cin>>precmax;
   
   int precisione=1;
   int parteint;
   
   cout<<"risultato=0.";
   while (numero!=0 && precisione<=precmax)
   {
         numero=numero*base;
         parteint=numero; 
         cout<<parteint;
         numero=numero-parteint;
         precisione=precisione+1;
   }
     cout<<endl;          
     system("PAUSE");
     return 0;
}
