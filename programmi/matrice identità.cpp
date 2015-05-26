#include <iostream>
#include <cstdlib>
using namespace std;

const int NR=10;
const int NC=10;
typedef int matrice[NR][NC];

void LetturaMatrice(matrice mat,int r,int c);
void ConfrontoMatrice(matrice mat1,int r,int c);

int main()
{
	int n,m;
	matrice a;
	cout<<"Inserire le righe"<<endl;
	cin>>n;
	cout<<"INserire le colonne"<<endl;
	cin>>m;
	LetturaMatrice(a,n,m);
	ConfrontoMatrice(a,n,m);
	
	system("PAUSE");
	return 0;
}

void LetturaMatrice(matrice mat,int r,int c)
{
	for(int i=0;i<r;i++)
	for(int j=0;j<c;j++)
	{
		cout<<"Inserire il"<<i+1<<","<<j+1<<":";
		cin>>mat[i][j];
	}
}

void ConfrontoMatrice(matrice mat1,int r,int c)
{
	bool identita=true;
	for(int i=0;i<r;i++)
	for(int j=0;j<c;j++)
	 if(i!=j && mat1[i][j]!=mat1[j][i])
	  identita=false;
	  
	if(identita) cout<<"E' la matrice identità"<<endl;
	else cout<<"Non è la matrice identità"<<endl;  
}


















