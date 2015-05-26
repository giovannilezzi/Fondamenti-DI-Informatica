#include <iostream>
#include <cstdlib>
using namespace std;
 

 int main()
 {
float spesa,sconto;
cout<<"Questo programma calcola la somma spesa da un cliente in un negozio";
cout<<"la spesa effettuata è di euro?";
cin>>spesa;
if (spesa<=50)
sconto=spesa-spesa*10/100;
else
if(spesa>=51 && spesa<=100)
sconto=spesa-spesa*20/100;
else
sconto=spesa-spesa*30/100;
cout<<"la spesa scontata è di:"<<spesa;       
    
system("PAUSE");
     return 0;
 }

