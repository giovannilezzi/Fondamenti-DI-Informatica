#include <iostream>
#include <cstdlib>
using namespace std;
 

int main()
{
    const int MAXT = 4;
    const int NUMNASC =7;
    
    bool trovato=false;
    int i=1;
    int numero;
    
    while (i<=MAXT && ! trovato)
    {
        cout<<"numero=";
        cin>>numero;
        if (numero==NUMNASC)
           trovato=true;
        else cout<<"sbagliato!"<<endl;
        i=i+1;
    }
    
    if (trovato)
      cout<<"INDOVINATO IL NUMERO";
    else
      cout<<"RAGGIUNTO NUMERO MASSIMO TENTATIVI";
    
    cout<<endl;  
  
  
  
  
     system("PAUSE");
     return 0;
}
