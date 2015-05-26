#include <iostream>
#include <cstdlib>
using namespace std;

const int NR=10;
const int NC=10;
typedef int matrice[NR][NC];

void CreaMatrice(matrice mat,int r,int c);
void ConfrontaMatrice(matrice mat1,int r,int c);

int main()
{
	int n,m;
	cout<<"Inserire in numero delle righe"<<endl;
	cin>>n;
	cout<<"Inserire il numero delle colonne"<<endl;
	cin>>m;
	matrice a;
	CreaMatrice(a,n,m);
	ConfrontaMatrice(a,n,m);
	
	system("PAUSE");
	return 0;
}

void CreaMatrice(matrice mat,int r,int c)
{
	for(int i=0;i<r;i++)
	for(int j=0;j<c;j++)
	{
		cout<<"Inserire elemento:"<<i+1<<","<<j+1<<":";
		cin>>mat[i][j];
	}
}

void ConfrontaMatrice(matrice mat1,int r,int c)
{
	bool colonnedisp=true;
	
	for(int i=0;i<r;i++)
	for(int j=0;j<c;j++)
	{
		if(j%2!=0 && colonnedisp)
		{
			if(mat1[i][j]!=1 )

				colonnedisp=false;

		}
		else
		{
			mat1[i][j]=0;
			
		}
	}
	if(colonnedisp) cout<<"La matrice è esatta"<<endl;
	else cout<<"La matrice non è esatta"<<endl;
}




























