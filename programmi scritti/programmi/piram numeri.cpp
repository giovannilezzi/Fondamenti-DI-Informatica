#include <iostream>
#include <cstdlib>
using namespace std;
 

int main()
{
      int i,j,n;
      
      cout<<"numero righe";
      cin>>n;
      
      for (int i=1;i<=n;i++)
      {  
        for (int j=1;j<=n-i;j++)
        {  
           cout<<"  ";
        }         
        for (int j=1;j<=i;j++)
        {  
           cout<<j<<" ";
        } 
        for (int j=i-1;j>=1;j--)
        {  
           cout<<j<<" ";
        } 
        
        cout<<endl;
      }
      
     system("PAUSE");
     return 0;
}
