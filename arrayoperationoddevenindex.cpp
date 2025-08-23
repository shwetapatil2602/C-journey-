#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the n: ";
    cin>>n;
    int arr[5]={1,2,3,4,5};
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<"  ";

    }
    cout<<endl;
    for(int i=0;i<n;i++)
    {
if(arr[i]%2==0)
{
    arr[i]*=2;
}
else
{
    arr[i]+=10;
}
    }
  for(int i=0;i<n;i++)
  {
    cout<<arr[i]<<"  ";
  }

    
}