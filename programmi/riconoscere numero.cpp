#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
	int pint,i,d,pfraz,n,c,num;
	cout<<"Programma per riconoscere....."<<endl;
	cout<<"Inserire il numero dei numeri da confrontare"<<endl;
	cin>>n;
	cout<<"Inserire la cifra "<<endl;
	cin>>c;
	i=0;
	d=0;
	
	while(i<n)
	{
		cout<<"Inserire i numeri da confrontare"<<endl;
	    cin>>num;
		pint=num/10;
		pfraz=num%10;
		
		if(pfraz==c)
		{
			d=d+1;
		}
		pint=num;
		i++;
		
	}
	cout<<"il risultato è :"<<d<<endl;
	
	system("PAUSE");
	return 0;
	
}
