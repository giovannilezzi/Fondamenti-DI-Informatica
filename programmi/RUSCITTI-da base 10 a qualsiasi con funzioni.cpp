#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

void ConversioneNumero();

int main()
{
	ConversioneNumero();
	
	system("PAUSE");
	return 0;
}

void ConversioneNumero()
{
    int num,base,quoz,resto;
	cout<<"Inserire il numero"<<endl;
	cin>>num;
	cout<<"Inserire la base"<<endl;
	cin>>base;
	quoz=num;
	
	while(quoz!=0)
	{
		resto=quoz%base;
		cout<<resto;
		quoz=quoz/base;
    }
		
	cout<<"Nessum numero"<<endl;
}
