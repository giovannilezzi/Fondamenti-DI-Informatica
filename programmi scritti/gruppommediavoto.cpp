#include <iostream>
#include <cstdlib>
#include <string>
#include <cmath>
using namespace std;

struct data
{
       int giorno;
       int mese;
       int anno;
};

struct esame
{
       string nome;
       int voto;
};

struct studente
{
       string nome;
       string cognome;
       string matricola;
       data datanascita;
       int numesami;
       esame* esamisuperati;
};


void LetturaStudenti (studente* & gruppo, int & n);
void StampaStudenti (studente* gruppo, int n);
void MediaVoto (studente* gruppo, int n);

int main()
{
    int n;
    studente* g;
    LetturaStudenti (g,n);
    StampaStudenti (g,n);
    MediaVoto(g,n);
    system ("PAUSE");
    return 0;
}

void LetturaStudenti (studente* & gruppo, int & n)
{
     cout<<"Inserisci numero studenti"<<endl;
     cin>>n;
     int v;
     gruppo=new studente[n];
     for (int i=0;i<n;i++)
     {
         cout<<"Studente "<<i+1<<endl;
         cout<<"Nome:"<<endl;
         cin>>gruppo[i].nome;
         cout<<"Cognome:"<<endl;
         cin>>gruppo[i].cognome;
         cout<<"Matricola:"<<endl;
         cin>>gruppo[i].matricola;
         cout<<"Data di nascita"<<endl;
         cout<<"Giorno:"<<endl;
         cin>>gruppo[i].datanascita.giorno;
         cout<<"Mese:"<<endl;
         cin>>gruppo[i].datanascita.mese;
         cout<<"Anno:"<<endl;
         cin>>gruppo[i].datanascita.anno;
         cout<<"Numero esami sostenuti:"<<endl;
         cin>>gruppo[i].numesami;
         v=gruppo[i].numesami;
         gruppo[i].esamisuperati= new esame[v];
         for (int j=0;j<v;j++)
         {
             cout<<"Esame N. "<<j+1<<endl;
             cout<<"Nome esame:"<<endl;
             cin>>gruppo[i].esamisuperati[j].nome;
             cout<<"Voto:"<<endl;
             cin>>gruppo[i].esamisuperati[j].voto;
         }
     }
}

void StampaStudenti (studente* gruppo, int n)
{
     int v;
     for (int i=0;i<n;i++)
     {
         cout<<"Studente "<<i+1<<endl;
         cout<<"Nome:"<<endl;
         cout<<gruppo[i].nome;
         cout<<"Cognome:"<<endl;
         cout<<gruppo[i].cognome;
         cout<<"Matricola:"<<endl;
         cout<<gruppo[i].matricola;
         cout<<"Data di nascita"<<endl;
         cout<<"Giorno:"<<endl;
         cout<<gruppo[i].datanascita.giorno;
         cout<<"Mese:"<<endl;
         cout<<gruppo[i].datanascita.mese;
         cout<<"Anno:"<<endl;
         cout<<gruppo[i].datanascita.anno;
         cout<<"Numero esami sostenuti:"<<endl;
         cout<<gruppo[i].numesami;
         v=gruppo[i].numesami;
         for (int j=0;j<v;j++)
         {
             cout<<"Esame N. "<<j+1<<endl;
             cout<<"Nome esame:"<<endl;
             cout<<gruppo[i].esamisuperati[j].nome<<endl;
             cout<<"Voto:"<<endl;
             cout<<gruppo[i].esamisuperati[j].voto<<endl;
         }
     }
}

void MediaVoto (studente* gruppo, int n)
{
     string numero;
     float tot=0;
     int v;
     float media;
     cout<<"Inserire numero di matricola dello studente:"<<endl;
     cin>>numero;
     for (int i=0;i<n;i++)
           if (numero==gruppo[i].matricola)
              {
               v=gruppo[i].numesami;
               for (int j=0;j<v;j++)
                    tot=tot+gruppo[i].esamisuperati[j].voto;
               media=tot/gruppo[i].numesami;
               cout<<"La media dello studente e':"<<media;
              }
     if (tot==0)
     cout<<"Nessuna dato relativo"<<endl;
}
