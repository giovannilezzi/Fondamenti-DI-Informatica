#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

int main()
{
   int numero,quoziente,resto, base,i,cifra;  
   cout<<"Conversione da base 10 a base qualsiasi";
   cout<<endl;
   cout<<"Inserire il numero in base 10 da convertire? ";
   cin>>numero;
   cout<<"In che base va convertito il numero? ";
   cin>>base;  
   i=1;
   quoziente=numero;
   string numeroconv="";
   char restoc;
    
   while (quoziente!=0)
   {
         resto=quoziente%base;
         if (resto>=0 && resto<=9)
            restoc=resto+'0';
         else
            restoc=resto+'A'-10;
         
         numeroconv=restoc+numeroconv;
         quoziente=quoziente/base;
         i=i+1;
   }
     
   cout<<numeroconv<<endl;    
               
     system("PAUSE");
     return 0;
}



   
