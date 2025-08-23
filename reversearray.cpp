#include<iostream>
using namespace std;
int main()
{
int arr[]={12,3,44,55,22,334};
int size=sizeof(arr)/sizeof(arr[0]);
cout<<size<<endl;
cout<<"Reversed array is:";
for(int i=size-1;i>=0;i--)
{
    cout<<arr[i]<<"   ";
}
}