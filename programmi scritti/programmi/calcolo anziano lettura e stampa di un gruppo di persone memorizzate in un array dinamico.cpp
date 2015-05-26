#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;

struct indirizzo
{
       string via;
       int ncivico;
       string cap;
       string citta;
};
struct data
{
       int giorno;
       int mese;
       int anno;
};
struct persona
{
       string cognome;
       string nome;
       indirizzo indresidenza;
       data datanascita;
};
void StampaGruppo(persona* g, int n);
void LeggiGruppo(persona* & g, int & n);
persona Anziano(persona* g, int n);

int main()
{
    int n;
    persona *gruppo;
    LeggiGruppo(gruppo, n);
    StampaGruppo(gruppo, n);
    persona p=Anziano(gruppo,n);
    cout<<"La persona anziana e' "<<p.cognome;
    system("PAUSE");
    return 0;
}

persona Anziano(persona* g, int n)
{   
    persona pmin=g[0];
    int posmin=0;
    
    for(int i=1; i<n; i++)
    {
        if (g[i].datanascita.anno<pmin.datanascita.anno)
          posmin=i;
        else if (g[i].datanascita.anno==pmin.datanascita.anno)
               if (g[i].datanascita.mese<pmin.datanascita.mese)
                 posmin=i;
               else if (g[i].datanascita.mese==pmin.datanascita.mese)
                      if (g[i].datanascita.giorno<pmin.datanascita.giorno)
                        posmin=i;
       pmin=g[posmin];
    } 
    return pmin;
}

void StampaGruppo(persona *g, int n)
{
     for(int i=0; i<n; i++)
     {
             cout<<" persona " << i << endl;
             cout<<" cognome = ";
             cout<<g[i].cognome;
             cout<<" nome = ";
             cout<<g[i].nome;
             cout<<" via = ";
             cout<<g[i].indresidenza.via;
             cout<<" numero civico = ";
             cout<<g[i].indresidenza.ncivico;
             cout<<" cap = ";
             cout<<g[i].indresidenza.cap;
             cout<<" citta' = ";
             cout<<g[i].indresidenza.citta;
             cout<<" giorno di nascita = ";
             cout<<g[i].datanascita.giorno;
             cout<<" mese di nascita = ";
             cout<<g[i].datanascita.mese;
             cout<<" anno di nascita = ";
             cout<<g[i].datanascita.anno;
     }
}
void LeggiGruppo(persona* & g, int & n)
{
     cout<<"numero di persone ";
     cin>>n;
     g=new persona[n];
     for (int i=0;i<n;i++)
    {
        cout<<"persona "<<i<<endl;
        cout<<"cognome=";
        cin>>g[i].cognome;
	  cout<<"nome=";
        cin>>g[i].nome;
	  cout<<"via=";
        cin>>g[i].indresidenza.via;
        cout<<"numero civico=";
        cin>>g[i].indresidenza.ncivico;
	  cout<<"cap=";
        cin>>g[i].indresidenza.cap;
        cout<<"citta'=";
        cin>>g[i].indresidenza.citta;
	  cout<<"giorno di nascita=";
        cin>>g[i].datanascita.giorno;
	  cout<<"mese di nascita=";
        cin>>g[i].datanascita.mese;
	  cout<<"anno di nascita=";
        cin>>g[i].datanascita.anno;
    }

}
             
             
             
