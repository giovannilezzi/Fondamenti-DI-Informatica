#include <iostream>
#include <cstdlib>

using namespace std;

const int MAX_RIGHE=10;
const int MAX_COLONNE=10;

typedef int matrice[MAX_RIGHE][MAX_COLONNE];

void LetturaMatrice(matrice mat,int r,int c);
void ConfrontoMatrice(matrice mat1,int r,int c);

int main()
{
	int n,m;
	matrice a;
	
	cout<<"Inserire le righe"<<endl;
	cin>>n;
	cout<<"Inserire le colonne"<<endl;
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
	 	cout<<"Inserire il :"<<i+1<<','<<j+1<<':';
	 	cin>>mat[i][j];
	 }
}

void ConfrontoMatrice(matrice mat1,int r,int c)
{
	bool simmetrica=true;
	for(int i=0;i<r && simmetrica;i++)
	 for(int j=0;j<c && simmetrica;j++)
	 	if(i!=j && mat1[i][j]!=mat1[j][i])
	 		{
	 			simmetrica=false;
	 		}

	 
     if(simmetrica) cout<<"La matrice è simmetrica"<<endl;
	 else cout<<"La matrice non è simmetrica"<<endl;
}
