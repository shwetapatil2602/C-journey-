#include<iostream>
using namespace std;
int main(){
    int arr[]={21,75,87,899,77,98,97};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<size;
for(int i=0;i<=size-1;i++)
{
    cout<<arr[i]<<"  ";
}
cout<<"Even array:";
for(int i=0;i<size;i++)
{
    if(arr[i]%2==0)
    {
        cout<<arr[i]<<"  ";
    }
}
cout<<"Odd array:";
for(int i=0;i<size;i++)
{
    if(arr[i]%2!=0)
    {
        cout<<arr[i]<<"  ";
    }
}

} 