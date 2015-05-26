#include <iostream>
#include <cstdlib>

using namespace std;

const int NR=10;
const int NC=10;
typedef int matrice[NR][NC];

void LetturaMatrice(matrice mat,int r,int c);
void ConfrontaMatrice(matrice mat1,int r,int c);

int main()
{	
    int n,m;
	matrice a,b;
	cout<<"Inserire le righe"<<endl;
	cin>>n;
	cout<<"Inserire le colonne"<<endl;
	cin>>m;
	
	LetturaMatrice(a,n,m);
	ConfrontaMatrice(a,n,m);
	
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

void ConfrontaMatrice(matrice mat1,int r,int c)
{
	for(int i=0;i<r;i++)
	for(int j=0;j<c;j++)
	 if(r=i+2)
	 mat1[i][j]=1;
	 else
	 cout<<"niente"<<endl;
	 
	for(int i=0;i<r;i++)
	for(int j=0;j<c;j++)
	 if(r=i+1)
	 mat1[i][j]=0;
	 else
	 cout<<"niente"<<endl; 
}















