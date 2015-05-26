#include <iostream>
#include <cstdlib>
#include <string>
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
      data dataNascita;
      int numEsami;
      esame* esamiSuperati;
};
void LetturaStudenti(studente* & gruppo, int n)
{
      int v;
      gruppo=new studente[n];
      for (int i=0; i<n; i++)
      {
          cout<<"studente "<<i+1<<endl;
          cout<<"cognome=";
          cin>>gruppo[i].cognome;
          cout<<"nome=";
          cin>>gruppo[i].nome;
          cout<<"matricola=";
	      cin>>gruppo[i].matricola;
          cout<<"giorno di nascita=";
          cin>>gruppo[i].dataNascita.giorno;
          cout<<"mese di nascita=";
          cin>>gruppo[i].dataNascita.mese;
          cout<<"anno di nascita=";
          cin>>gruppo[i].dataNascita.anno;
          cout<<"numero esami sostenuti=";
          cin>>gruppo[i].numEsami;
          v=gruppo[i].numEsami;
          gruppo[i].esamiSuperati = new esame[v];
          for (int j=0; j<v; j++)
          {
            cout<<"esame n. "<<j+1<<endl;           
            cout<<"nome esame=";
            cin>>gruppo[i].esamiSuperati[j].nome;
            cout<<"voto=";
            cin>>gruppo[i].esamiSuperati[j].voto;
          }
      }
}

float CalcolaMediaStudente(studente* gruppo, int n,string c)
{
      int pos;
      for (int i=0; i<n; i++)
      {
            if (gruppo[i].cognome==c) pos=i;
      }
      
      int v=gruppo[pos].numEsami;
      float somma=0;
      for (int j=0; j<v; j++)
         somma=somma+gruppo[pos].esamiSuperati[j].voto;
      float media=somma/v;
      return media;
}   
         

int main()
{
    int n;
    studente *g;
    cout<<"numero di studenti?";
    cin>>n;
    LetturaStudenti(g,n);
    float m;
    cout<<"cognome dello studente";
    string cognome;
    cin>>cognome;
    m=CalcolaMediaStudente(g,n,cognome);
    cout<<"La media degli esami sostenuti da "<<cognome<<" = "<<m;
    system("PAUSE");
    return 0;
}
