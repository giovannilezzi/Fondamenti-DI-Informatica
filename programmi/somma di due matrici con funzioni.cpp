# include <iostream>
# include <cstdlib>

using namespace std;

const int MAX_RANGO=10;
typedef int matrice[MAX_RANGO][MAX_RANGO];
int n;

void LetturaMatrice(matrice mat);
void SommaMatrici(matrice mat1,matrice mat2,matrice matsomma);
void StampaMatrice(matrice mat);

int main()
{
	matrice a,b,c;
	
	LetturaMatrice(a);
	LetturaMatrice(b);
	SommaMatrici(a,b,c);
	StampaMatrice(c);
	
	system("PAUSE");
	return 0;
}

void LetturaMatrice(matrice mat)
{
	cout<<"Inserire il rango"<<endl;
	cin>>n;
	for(int i=0;i<n;i++)
	 for(int j=0;j<n;j++)
	 {
	 	cout<<"Inserire il :"<<i+1<<','<<i+1<<':';
	 	cin>>mat[i][j];
	 }
}

void SommaMatrici(matrice mat1,matrice mat2,matrice matsomma)
{
	for(int i=0;i<n;i++)
	 for(int j=0;j<n;j++)
	 {
	 	matsomma[i][j]=mat1[i][j]+mat2[i][j];
	 }
}

void StampaMatrice(matrice mat)
{
	for(int i=0;i<n;i++)
	{
	   for(int j=0;j<n;j++)
	   {
	   	cout.width(4);
	   	cout<<mat[i][j];
	   } 
	   cout<<endl;
	}
}











