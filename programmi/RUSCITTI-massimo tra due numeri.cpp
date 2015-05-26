#include <iostream>
#include <cstdlib>
using namespace std;

int main ()

{
	int a,b,max;
	
	max=0;
	
	cout<<"Programma per riconoscere il massimo tra due numeri :";
	
	cout<<"Inserire il primo numero :";
	cin>>a;
	
	cout<<"Inserire il secondo numero :";
	cin>>b;
	
	if(a>b)
	{
		cout<<"Il massimo è :" << a << endl ;
	}
	else
	{
		cout<<"Il massimo è :" << b << endl ;
	}
	
	system("PAUSE");
	return 0;
}
