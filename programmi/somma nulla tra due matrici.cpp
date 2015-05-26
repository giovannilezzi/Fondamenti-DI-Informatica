#include <iostream>
#include <cstdlib>

using namespace std;

const int NR=10;
const int NC=10;
typedef int matrice[NR][NC];

void LetturaMatrice(matrice mat,int r,int c);
void ConfrontaMatrice(matrice mat1,matrice mat2,int r,int c);

int main()
{
	int n,m;
	matrice a,b;
	cout<<"Inserire le righe"<<endl;
	cin>>n;
	cout<<"Inserire le colonne"<<endl;
	cin>>m;
	
	LetturaMatrice(a,n,m);
	LetturaMatrice(b,n,m);
	ConfrontaMatrice(a,b,n,m);
	
	system("PAUSE");
	return 0;
}

void LetturaMatrice(matrice mat,int r ,int c)
{
	for(int i=0;i<r;i++)
	for(int j=0;j<c;j++)
	 {
	 	cout<<"Inserire il "<<i+1<<","<<j+1<<":";
	 	cin>>mat[i][j];
	 }
}

void ConfrontaMatrice(matrice mat1,matrice mat2,int r,int c)
{
	bool nulla=true;
	for(int i=0;i<r;i++)
	for(int j=0;j<c;j++)
	 if(mat1[i][j]!=-mat2[i][j])
	  nulla=false;
	  
	  if(nulla) cout<<"La matrice somma � nulla"<<endl;
	 else cout<<"La matrice somma non � nulla"<<endl;
	 
}

















