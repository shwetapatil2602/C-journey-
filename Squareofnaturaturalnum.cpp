#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the N";
    cin>>n;
    int arr[n];
    cout<<"Print array elements";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i]; 
    }
    cout<<"Array elements are:";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]; 
    }
   int sqr[n];
    for(int i=0;i<n;i++)
    { 
    sqr[i]=arr[i]*i;
    }
    for(int i=0;i<n;i++)
    { 
      cout<<sqr[i]<<"  ";
    }
  
    
}