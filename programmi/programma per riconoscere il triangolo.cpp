#include <iostream>
#include <cstdlib>
using namespace std;

int main ()

{
	int a,b,c;
		
	cout<<"Programma per stabilire il tipo di triangolo"<<endl;
	
	cout<<"Inserire i lati "<<endl;
	cin>>a>>b>>c;
		
	if((a==b)&&(b==c))
	{
		cout<<"Il tringolo � equilatero"<<endl;
	}
	
	else if(a==b||b==c||c==a)
	{
		cout<<"Il triangolo � isoscele"<<endl;
	}
	
	else
	{
		cout<<"Il triangolo � scaleno"<<endl;
	}		

	
	system("PAUSE");
	return 0;
	
}

































