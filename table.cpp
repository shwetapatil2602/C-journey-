#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the n";
    cin>>n;
    int arr[10];
    for(int i=0;i<10;i++)
    {
        arr[i]=n*(i+1);
    }
    cout<<"Array table is:";
    for(int i=0;i<10;i++)
    {
        cout<<arr[i]<<"  "<<endl;
    }
}