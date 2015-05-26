#include <iostream>
#include <cstdlib>
using namespace std;


int main()
{
  cout<<"Programma calcolo di un numero romano"<<endl;
  
  char ch;
  int valore;
  int risultato=0;
  
  int n;
  cout<<"inserisci il numero di cifre di cui e' composto il numero";
  cin>>n;
  
  int prec=0;
  
  for (int i=1;i<=n;i++)
  {
    cout<<"cifra=";
    cin>>ch;
  
    switch (ch)
    {
      case 'I': valore=1; break;
      case 'V': valore=5; break;
      case 'X': valore=10; break;
      case 'L': valore=50; break;
      case 'C': valore=100; break;
      case 'D': valore=500; break;
      case 'M': valore=1000; break;
      default: valore=0;
    }
    
    
    if (prec<valore)
       risultato=risultato-prec-prec+valore;
    else
       risultato=risultato+valore;
    prec=valore;
    
    
  }

  cout<<"valore="<<risultato<<endl;
  
               
     system("PAUSE");
     return 0;
}
