#include <iostream>
#include <cstdlib>
using namespace std;
const int MAXRANGO=10;
typedef int MATRICE[MAXRANGO][MAXRANGO];
MATRICE a,trasposta;
int i,n,j;
void LetturaMatrice();
void TraspostaMatrice();
void StampaMatrice();

int main()
{ LetturaMatrice();
  TraspostaMatrice();
  StampaMatrice();

 system("PAUSE");
 return 0;
}
void LetturaMatrice()
{cout<<"inserire il rango della matrice";
cin>>n;
for(i=0;i<n;i++)
for(j=0;j<n;j++)
{
cout<<"inserire il valore "<<i<<","<<j<<":";
cin>>a[i][j];
}}
void TraspostaMatrice()
{
for(i=0;i<n;i++)
for(j=0;j<n;j++)
trasposta[i][j]=a[j][i];
}
void StampaMatrice()
{
for(i=0;i<n;i++)
{for(j=0;j<n;j++)
{cout.width(4);
 cout<<trasposta[i][j];
} cout<<endl;
}
}
