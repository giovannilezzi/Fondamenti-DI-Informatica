#include <iostream>
#include <cstdlib>
#include <string>
#include <cmath>
using namespace std;

void CalcolaPotenza();
void StampaRisultato();
int potenza;

int main ()
{
    CalcolaPotenza();
    StampaRisultato();
    
    system ("PAUSE");
    return 0;
}

void CalcolaPotenza()
{
    int esponente,base;
    cout<<"Inserisci la base:"<<endl;
    cin>>base;
    cout<<"Inserisci l'esponente:"<<endl;
    cin>>esponente;
    if (esponente<0)
         cout<<"Errore, l'esponente inserito e' negativo!"<<endl;
    else
         if (esponente==0 && base ==0)
             cout<<"Errore, sia la base che l'esponente sono nulli."<<endl;
         else
              {
                            int i=0;
                            potenza=1;
                            while (i<esponente)
                               {
                                     potenza=potenza*base;
                                     i++;
                                     }
                                     }
}

void StampaRisultato()
{
    if (potenza==0)
       cout<<"La potenza e' nulla o e' avvenuto un errore."<<endl;
    else
       cout<<"Potenza="<<potenza<<endl;
}
