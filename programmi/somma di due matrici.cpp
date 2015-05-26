#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
	const int NR=8;
	const int NC=6;
	typedef int matrice[NR][NC];
	matrice a,b,c;
	int n,m;
	cout<<"Inserire il numero di righe"<<endl;
	cin>>n;
	
	cout<<"Inserire il numero di colonne"<<endl;
	cin>>m;
	
	for(int i=0;i<n;i++)
	 for(int j=0;j<m;j++)
	 {
	 	cout<<"Inserire il :"<<i+1<<','<<j+1<<':';
	 	cin>>a[i][j];
	 }
	 
	for(int i=0;i<n;i++)
	 for(int j=0;j<m;j++)
	 {
	 	cout<<"Inserisci il :"<<i+1<<','<<j+1<<':';
	 	cin>>b[i][j];
	 }
	 
	for(int i=0;i<n;i++)
	 for(int j=0;j<m;j++)
	 {
	 	c[i][j]=a[i][j]+b[i][j];
	 } 
	 
	for(int i=0;i<n;i++)
	 for(int j=0;j<m;j++)
	 {
	 	cout<<c[i][j];
	 	cout<<endl;
	 }
	 
	 system("PAUSE");
	 return 0;
}
