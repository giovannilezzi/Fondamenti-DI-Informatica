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
		cout<<"Il tringolo è equilatero"<<endl;
	}
	
	else if(a==b||b==c||c==a)
	{
		cout<<"Il triangolo è isoscele"<<endl;
	}
	
	else
	{
		cout<<"Il triangolo è scaleno"<<endl;
	}		

	
	system("PAUSE");
	return 0;
	
}

































