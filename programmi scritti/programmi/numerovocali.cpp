#include <iostream>
#include <cstdlib>
using namespace std;


int main()
{
  cout<<"Programma calcolo del numero di vocali e consonanti di una parola"<<endl;
  
  cout<<"di quante lettere e' costituita la parola?";
  int n;
  cin>>n;
  
  char ch;
  int contaNonVocali=0,contaVocali=0;
  
  for (int i=1; i<=n; i++)
  {
    
    cout<<"lettera=";
    cin>>ch;  
  
    switch (ch)
    {
     case 'a':   
     case 'e':   
     case 'i':   
     case 'o':   
     case 'u':  contaVocali++; break;
     default: contaNonVocali++;
    }
  }
  
  cout<<"numero di vocali="<<contaVocali<<endl;
  cout<<"numero di consonanti="<<contaNonVocali<<endl;
  
               
     system("PAUSE");
     return 0;
}
