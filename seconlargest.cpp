#include<iostream>
using namespace std;
#include<climits>
int main()
{
    int arr[7]={11,22,33,44,55,66,77};
    int mx=INT_MIN;
    for(int i=0;i<7;i++)
    {
        cout<<arr[i]<<"  ";
    }
    cout<<endl;
for(int i=0;i<7;i++)
{
    mx=max(mx,arr[i]);
}
cout<<"Largest element is:"<<mx;
int smx=INT_MIN;
for(int i=0;i<7;i++)
{
    if(arr[i]!=mx)
    {
        smx=max(arr[i],smx);
    }
}
cout<<"Second Largest element is:"<<smx;



}
