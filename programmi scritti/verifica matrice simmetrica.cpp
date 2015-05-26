#include <iostream>
#include <cstdlib>
using namespace std;


int main()
{
  int n,i;
  cout<<"inserire il rango della matrice";
  cin>>n;
  typedef int matrice[n][n];
  matrice A;
  bool simmetrica=true;
  for (int i=0;i<n;i++)
  for(int j=0;j<n;j++)
  {cout<<"inserire il valore  "<<i<<","<<j<<":";
   cin>>A[i][j];
  }
  for (int i=0;i<n;i++)
  { for(int j=0;j<n;j++)
  {cout.width(4);
   cout<<A[i][j];
  }cout<<endl;
  }
{
 for(int i=0;i<n;i++)
 for(int j=0;j<n;j++)
 while (i<n && simmetrica)
 if(A[i][j]!=A[j][i])simmetrica=false;
 else 
 {
 simmetrica=true;
 i++;
 }
}
if (simmetrica) cout<<"yes";
else cout<<"no";
 
 
 
 system("PAUSE");
 return 0;
}

