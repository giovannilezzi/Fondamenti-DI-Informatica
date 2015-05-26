#include <iostream>
#include <cstdlib>
using namespace std;

int main ()

{
	int N,I,MAX,X;
	
		
	cout<<"Programma per riconoscere il massimo tra N numeri :";
	
	cout<<"Inserire gli N numeri :";
	cin>>N;
	
	I=1;
	MAX=1;
	
	while(I<=N)
	{
		cout<<"Inserire i numeri :";
		cin>>X;
		
		if(X>MAX)
		{
			MAX=X;
		}
		else
		{
			MAX=MAX;
		}
		
		I=I+1;
	}
	
	cout<<"il massimo è :" << MAX << endl ;
	
	system("PAUSE");
	return 0;
}


