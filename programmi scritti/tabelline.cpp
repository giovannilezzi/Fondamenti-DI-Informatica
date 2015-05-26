#include <iostream>
#include <cstdlib>
using namespace std;
 

 int main()
 {
int n;
do{
	cout<<"inserisci un numero per ottenere la tabellina,0 per uscire"<<"";
	cin>>n;
	for(int i=0; i<=10 && n!=0; i++)
	{
cout<<n*i<<endl;
}
}
while (n!=0);
cout<<"0";
system("PAUSE");
     return 0;
 }

