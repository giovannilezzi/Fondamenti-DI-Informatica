#include <iostream>
#include <cstdlib>
using namespace std;


int main()
{
int i,n,j;
const int DIM=100;
typedef int MATRICE[DIM][DIM];
MATRICE a;
cout<<"inserire il rango della matrice";
cin>>n;
for(i=0;i<n;i++)
for(j=0;j<n;j++)
{cout<<"inserire il valore  "<<i<<";"<<j<<":";
cin>>a[i][j];
}
for (i=0;i<n;i++)
{for(j=0;j<n;j++)
{cout.width(4);
cout<<a[i][j];
}cout<<endl;
}








system("PAUSE");
 return 0;
}
