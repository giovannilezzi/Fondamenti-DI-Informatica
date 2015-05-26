#include <iostream>
#include <cstdlib>

using namespace std;

const int NR=10;
const int NC=10;
typedef int matrice[NR][NC];

void LetturaMatrice(matrice mat,int righe,int colonne);
void ProdottoMatrici(matrice mat1,matrice mat2,matrice matprodotto,int righe,int colonne);
void StampaMatrice(matrice mat,int righe,int colonne);

int main()
{
	matrice a,b;
	
	int n,m;
	cout<<"Inserire il numero di righe"<<endl;
	cin>>n;
	cout<<"Inserire il numero di colonne"<<endl;
	cin>>m;
	
	LetturaMatrice(a,n,m);
	LetturaMatrice(b,n,m);
	ProdottoMatrici(a,b,a,n,m);
	StampaMatrice(a,n,m);
	
	system("PAUSE");
	return 0;
}

void LetturaMatrice(matrice mat,int righe,int colonne)
{
	for(int i=0;i<righe;i++)
	 for(int j=0;j<colonne;j++)
	 {
	 	cout<<"Inserire il :"<<i+1<<','<<j+1<<':';
	 	cin>>mat[i][j];
	 }
}

void ProdottoMatrici(matrice mat1,matrice mat2,matrice matprodotto,int righe,int colonne)
{
	for(int i=0;i<righe;i++)
	 for(int j=0;j<colonne;j++)
	 {
	 	matprodotto[i][j]=mat1[i][j]*mat2[i][j];
	 }
}

void StampaMatrice(matrice mat,int righe,int colonne)
{
	for(int i=0;i<righe;i++)
	{
		for(int j=0;j<colonne;j++)
		{
			cout.width(4);
			cout<<mat[i][j];
		}
		cout<<endl;
	}
}















