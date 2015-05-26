#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
	const int MAXRANGO=10;
	typedef int matrice[MAXRANGO][MAXRANGO];
	matrice a;
	int n;
	cout<<"Inserire il rango"<<endl;
	cin>>n;
	
	for(int i=0;i<n;i++)
	 for(int j=0;j<n;j++)
	 {
	 	cout<<"Inserire il :"<<i+1<<','<<j+1<<':';
	 	cin>>a[i][j];
	 }
	
	bool diagonale=true;
	
	for(int i=0;i<n;i++)
	 for(int j=0;j<n;j++)
	 {
	 	if(i!=j && a[i][j]!=0)
	 	diagonale=false;
	 }
	 
	if(diagonale) cout<<"La matrice è diagonale"<<endl;
	else cout<<"La matrice non è diagonale"<<endl;
	
	system("PAUSE");
	return 0;
}
