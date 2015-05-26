#include <iostream>
#include <cstdlib>
#include <string>
#include <cmath>
using namespace std;

const int MAXRANGO=50;
typedef int matrice[MAXRANGO][MAXRANGO];
void LetturaRango(int & n);
void LetturaMatrice(int n,matrice mat);
void StampaMatrice(int n,matrice mat);
void ProdottoMatrici (int n,matrice a,matrice b, matrice mat);

int main ()
{
    int r;
    matrice A,B,C;
    LetturaRango(r);
    LetturaMatrice(r,A);
    StampaMatrice(r,A);
    LetturaMatrice(r,B);
    StampaMatrice(r,B);
    ProdottoMatrici(r,A,B,C);
    cout<<"La matrice C sara'l risultato del prodotto A*B."<<endl;
	StampaMatrice(r,C);
    
    system ("PAUSE");
    return 0;
}

void LetturaRango(int & n)
{
     cout<<"Inserisci il rango delle matrici:"<<endl;
     cin>>n;
}

void LetturaMatrice(int n,matrice mat)
{
     for(int i=0;i<n;i++)
       for(int j=0;j<n;j++)
          {
          cout<<"Inserisci l'elemento ["<<i<<"]["<<j<<"]"<<endl;
          cin>>mat[i][j];
          }
}

void StampaMatrice(int n,matrice mat)
{
     cout<<"La matrice e':"<<endl;
     for (int i=0;i<n;i++)
     {
       for (int j=0;j<n;j++)
          {
          cout.width(4);
          cout<<mat[i][j];
          }
          cout<<endl;
       }
}

void ProdottoMatrici(int n,matrice a,matrice b,matrice mat)
{
               for (int i=0; i<n; i++)
               for (int j=0; j<n; j++)
                   {
                         mat[i][j]=0;
                         for (int k=0; k<n; k++)
                         {
                             mat[i][j]= mat[i][j]+(a[i][k]*b[k][j]);
                             }
                   }
}
                         
