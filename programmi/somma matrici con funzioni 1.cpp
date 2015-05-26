#include <iostream>
#include <cstdlib>

using namespace std;

const int NR=10;
const int NC=10;
typedef int matrice[NR][NC];

void LetturaMatrice(matrice mat,int r,int co);
void SommaMatrici(matrice mat1,matrice mat2,matrice matsomma,int r,int co);
void StampaMatrice(matrice mat,int r,int co);

int main()
{
	matrice a,b;
	
	int n,m;
	cout<<"Inserire il numero di righe"<<endl;
	cin>>n;
	cout<<"Inserire il numero di colonne"<<endl;
	cin>>m;
	
	LetturaMatrice(a,n,m);
	SommaMatrici(a,b,a,n,m);
	StampaMatrice(a,n,m);
	
	system("PAUSE");
	return 0;
}

void LetturaMatrice(matrice mat,int r,int co)
{
	for(int i=0;i<r;i++)
	 for(int j=0;j<co;j++)
	 {
	 	cout<<"Inserire il :"<<i+1<<','<<j+1<<':';
	 	cin>>mat[i][j];
	 }
}

void SommaMatrice(matrice mat1,matrice mat2,matrice matsomma,int r,int co)
{
	for(int i=0;i<r;i++)
	 for(int j=0;j<co;j++)
	 {
	 	matsomma[i][j]=mat1[i][j]+mat2[i][j];
	 }
}

void StampaMatrice(matrice mat,int r,int co)
{
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<co;j++)
		{
			cout.width(4);
			cout<<mat[i][j];
		}
		cout<<endl;
	}
}















