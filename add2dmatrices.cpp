#include<iostream>
using namespace std;
int main()
{
    int a[2][2]={12,24,36,48};
    int b[2][2]={13,26,39,52};
    int c[2][2];
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            cout<<a[i][j]<<"  ";
            
            cout<<b[i][j]<<"  ";
            
             
        }
        cout<<endl;
    }
   
            for(int i=0;i<2;i++)
            {
                for(int j=0;j<2;j++)
                {
                    c[i][j] =a[i][j]+b[i][j];    
                            
                 }
            }
           
            
            for(int i=0;i<2;i++)
            {
                for(int j=0;j<2;j++)
                {
                   cout<<c[i][j]<<"  ";  
                            
                 }
                
            }
            cout<<endl;
        
    
}