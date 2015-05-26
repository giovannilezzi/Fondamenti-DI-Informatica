#include <iostream>
#include <cstdlib>
using namespace std;
 

int main()
{
   int numero,quoziente,resto, base,i,cifra,valore,potenza; 
    
   cout<<"Conversione da base 10 a base qualsiasi";
   cout<<endl;
   cout<<"Inserire il numero in base 10 da convertire? ";
   cin>>numero;
   cout<<"In che base va convertito il numero? ";
   cin>>base;
   
   i=1;
   quoziente=numero;
   
   cout<<"Il numero convertito e' il seguente ma devi considerare le cifre in ordine opposto:";
   cout<<endl;
   
   while (quoziente!=0)
   {
         resto=quoziente%base;
         cout<<resto<<" ";
         quoziente=quoziente/base;
         i=i+1;
   }
               
     system("PAUSE");
     return 0;
}
