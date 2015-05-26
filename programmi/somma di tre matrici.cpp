#include <iostream>
#include <cstdlib>

using namespace std;

const int MAX_RANGO=10;
typedef int matrice[MAX_RANGO][MAX_RANGO];

void LetturaRango(int & ra);
void LetturaMatrice(matrice mat, int ra);
void SommaMatrici(matrice mat1,matrice mat2,matrice matsomma,int ra);
void StampaMatrice(matrice mat,int ra);

int main()
{
	cout<<"SOMMA DI TRE MATRICI"<<endl;
	matrice a,b;
	
	int n;
	LetturaRango(n);
	LetturaMatrice(a,n);
	LetturaMatrice(b,n);       //SOMMO LE PRIME DUE 
	SommaMatrici(a,b,a,n);
	
	LetturaMatrice(b,n);
	SommaMatrici(a,b,a,n);
	StampaMatrice(a,n);
	
	system("PAUSE");
	return 0;
}

void LetturaRango(int & ra)
{
	cout<<"Inserire il rango"<<endl;
	cin>>ra;
}

void LetturaMatrice(matrice mat, int ra)
{
	for(int i=0;i<ra;i++)
	 for(int j=0;j<ra;j++)
	 {
	 	cout<<"Inserire il :"<<i+1<<','<<j+1<<':';
	 	cin>>mat[i][j];
	 }
}

void SommaMatrici(matrice mat1,matrice mat2,matrice matsomma,int ra)
{
	for(int i=0;i<ra;i++)
	 for(int j=0;j<ra;j++)
	 {
	 	matsomma[i][j]=mat1[i][j]+mat2[i][j];
	 	
	 }
	
}


void StampaMatrice(matrice mat,int ra)
{
	for(int i=0;i<ra;i++)
	{
		 for(int j=0;j<ra;j++)
		 {
		 	cout.width(4);
		 	cout<<mat[i][j];     
		 }
		 cout<<endl;
	}
}

















