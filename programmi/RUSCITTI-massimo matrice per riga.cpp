#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
	int max,n;
	
	const int MAX_RANGO=10;
	typedef int matrice[MAX_RANGO][MAX_RANGO];    // inizializzo la matrice
	matrice a;
	
	cout<<"Inserire il rango"<<endl;
	cin>>n;
	
	const int DIM=100;
	typedef int vettore[DIM];     // inizializzo il vettore
	vettore v;
	
	for(int i=0;i<n;i++)
	 for(int j=0;j<n;j++)
     {                                           // ho letto la matrice
	  	cout<<"Inserire il:"<<i+1<<','<<j+1<<':';
	  	cin>>a[i][j];
     }
	
	for(int i=0;i<n;i++)
	{
		max=a[i][0];
		for(int j=1;j<n;j++)
		{
			if(a[i][j]>max)
			    cout<<"il massimo è :"<<max<<endl;
				max=a[i][j];
				v[i]=max;
		}
	}
	
	for(int i=0;i<n;i++)
	{
		cout<<"v["<<i<<"]="<<v[i]<<endl;
	}
 
	
	system("PAUSE");
	return 0;
	
	
}
