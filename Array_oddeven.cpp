#include<iostream>
using namespace std;
int main()
{ int n;
    cout<<"enter the n :"<<n;
    cin>>n;
    int arr[5]={1,2,3,4,5};
for(int i=0;i<5;i++)
{
    if(arr[i]%2==0)
{
    arr[i]+=10;
}
else(arr[i]%2!=0)
{
    arr[i]*=2;
}
cout<<arr[i]<<"  ";
}}