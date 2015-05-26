#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	cout<<"Programma per sommare n vettori"<<endl;
	
	int i,j,n,N;
	
	cout<<"Inserire il numero di vettori da sommare"<<endl;
	cin>>N;
	
	const int DIM=100;
	int v[DIM];
	int vs[3]={0,0,0};
	
    cout<<"Inserire la dimensione"<<endl;
	cin>>n;
	
	for(int i=0;i<n;i++)
	{
		cout<<"Inserire in :"<<i+1<<"valore"<<endl;
		cin>>v[i];
		
		while(j<N)
		{
			cout<<"Inserire i vettori"<<endl;
			cin>>v[i];
			vs[3]=vs[3]+v[i];
			j++;
		}
		cout<<"la somma è :"<<vs[3]<<endl;
	}
	system("PAUSE");
	return 0;
	

	
	
}
