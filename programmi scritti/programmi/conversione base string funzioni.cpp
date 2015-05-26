#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

void Conv10baseQuals(int x,int b,string & ris);
void ConvQualsbase10(string numero,int base,int & valore);

int main()
{
   int b1,b2;
   string numeroconv,numero; 
   int temp; 
   cout<<"Conversione di base";
   cout<<endl;
   cout<<"base del numero da convertire? ";
   cin>>b1;
   cout<<"Inserire il numero da convertire? ";
   cin>>numero;
   cout<<"In che base va convertito il numero? ";
   cin>>b2;  
   ConvQualsbase10(numero,b1,temp);
   cout<<"valore in base 10="<<temp<<endl;
   Conv10baseQuals(temp,b2,numeroconv);      
   cout<<"valore in base "<<b2<<"=";
   cout<<numeroconv<<endl;    
               
     system("PAUSE");
     return 0;
}

void ConvQualsbase10(string numero,int base,int & valore)
{   
   int n=numero.size();
   int i=0;
   valore=0;
   int cifra;
   while (i<n)
   {
        if (numero[i]>='0' && numero[i]<='9') 
            cifra=numero[i]-'0';
        else if (numero[i]>='A' && numero[i]<='F')
            cifra=numero[i]-'A'+10;
          valore=valore*base+cifra;
         i=i+1;
   }
}

void Conv10baseQuals(int x,int b,string & ris)
{  
   int quoziente=x;
   ris="";
   char restoc;
   int resto;
    
   while (quoziente!=0)
   {
         resto=quoziente%b;
         if (resto>=0 && resto<=9)
            restoc=resto+'0';
         else
            restoc=resto+'A'-10;
         
         ris=restoc+ris;
         quoziente=quoziente/b;
        
   }
}
