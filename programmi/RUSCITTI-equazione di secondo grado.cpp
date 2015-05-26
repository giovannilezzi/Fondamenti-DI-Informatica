#include <iostream>
#include <cstdlib>
#include <math.h>

using namespace std;

int main ()
{
	cout<<"Programma che risolve eq. di secondo grado"<<endl;
	
	int a,b,c,x1,x2,d;
	float Delta,y1,y2;
	
	cout<<"Inserire il primo membro"<<endl;
	cin>>a;
	cout<<"Inserire il secondo membro"<<endl;
	cin>>b;
	cout<<"Inserire il terzo membro"<<endl;
	cin>>c;
	d=pow(b,2);
	Delta=d-4*a*c;
	
	if(Delta==0)
	{
		cout<<"Le soluzioni con Delta nullo sono :"<<x1<<','<<x2<<':';
		x1=x2=(-b)/(2*a);
    }
	else if(Delta>0)
	{
		cout<<"Le soluzioni sono :"<<y1<<','<<y2<<':';
		y1=(-b+sqrt(Delta))/(2*a);
		y2=(-b-sqrt(Delta))/(2*a);
	}
	else
	{
		cout<<"Non è possibile poichè il Delta è minore di zero"<<endl;
	}
	
	system("PAUSE");
	return 0;
}
