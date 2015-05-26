#include <iostream>
#include <cstdlib>
using namespace std;


int main()
{
int i,c,n,j;
const int DIM=100;
typedef int MATRICE[DIM][DIM];
MATRICE a,b;
c=0;
bool uguali=true;
cout<<"inserire il rango della matrice";
cin>>n;
for(i=0;i<n;i++)
for(j=0;j<n;j++)
{cout<<"inserire il valore "<<i<<","<<j<<":";
cin>>a[i][j];
}for (i=0;i<n;i++)
{for(j=0;j<n;j++)
{cout.width(4);
cout<<a[i][j];
}cout<<endl;
}
for(i=0;i<n;i++)
for(j=0;j<n;j++)
{cout<<"inserire il valore  "<<i<<""<<j<<":";
cin>>b[i][j];
}for (i=0;i<n;i++)
{for(j=0;j<n;j++)
{cout.width(4);
cout<<b[i][j];
}cout<<endl;
}
{for(i=0;i<n;i++)
for(j=0;j<n;j++)
while (c<n && uguali)
if(a[i][j]!=b[i][j]) uguali=false; 
else c++;
}
if(uguali) cout<<"Le due matrici sono uguali";
else cout<<"Le due matrici sono diverse  ";

 system("PAUSE");
 return 0;
}
