#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the n:";
    cin>>n;
    int arr[n];
    cout<<"Enter the array element";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<size;
    int max=arr[0];
    int min=arr[0];
    for(int i=0;i<size;i++)
    {
        if(arr[i]>max)
        max=arr[i];
        if(arr[i]<min)
        min=arr[i];
    }
    cout<<"maximum element in array is:"<<max<<endl;
    cout<<"minimum element in an array is"<<min<<endl;
    
}