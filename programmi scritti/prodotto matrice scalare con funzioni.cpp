#include <iostream>
#include <cstdlib>
using namespace std;
int i,j,n;
const int MAXRANGO=10;
typedef int MATRICE[MAXRANGO][MAXRANGO];
void LetturaMatrice(MATRICE mat1);
void StampaMatrice(MATRICE mat1);
void Prodottomatricescalare(MATRICE mat1,int a,MATRICE mat2);


int main()
{
 int b;
 MATRICE A,B; 
 LetturaMatrice(A);
 StampaMatrice(A);
 Prodottomatricescalare(A,b,B);
 StampaMatrice(B);

 system("PAUSE");
 return 0;
}
void LetturaMatrice(MATRICE mat1)
{
	cout<<"inserire il rango delle matrici";
	cin>>n;
	for (i=0;i<n;i++)
	for(j=0;j<n;j++)
	{
	    cout<<"inserire il valore"<<i<<","<<j<<":";
	    cin>>mat1[i][j];
	}
}
void StampaMatrice(MATRICE mat1)
{
	for(i=0;i<n;i++)
	{for(j=0;j<n;j++)
	 {cout.width(4);
	  cout<<mat1[i][j];
	 }cout<<endl;
	}
}
void Prodottomatricescalare(MATRICE mat1,int a,MATRICE mat2)
{
  cout<<"inserire il numero";
  cin>>a; 
  for(i=0;i<n;i++)
  for(j=0;j<n;j++)
  mat2[i][j]=a*mat1[i][j];
}	

