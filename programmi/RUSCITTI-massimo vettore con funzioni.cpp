# include <iostream>
# include <cstdlib>

using namespace std;

const int DIM=100;
int v[DIM];
int n;
int massimo;

void LetturaVettore();
void MassimoVettore();
void StampaMassimo();

int main()
{
	LetturaVettore();
	MassimoVettore();
	StampaMassimo();
	
	system("PAUSE");
	return 0;
}

void LetturaVettore()
{
	cout<<"Inserire la dimensione"<<endl;
	cin>>n;
	
	for(int i=0;i<n;i++)
	{
		cout<<"Inserire il :"<<i+1<<"valore"<<endl;
		cin>>v[i];
	}
}

void MassimoVettore()
{
	massimo=v[0];
	for(int i=1;i<n;i++)
	{
		if(v[i]>massimo)
		{
			massimo=v[i];
		}
		else
		{
			massimo=massimo;
		}
	}
}

void StampaMassimo()
{
	cout<<"massimo="<<massimo<<endl;
}
