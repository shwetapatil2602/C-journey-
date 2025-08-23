#include<iostream>
using namespace std;
int main()
{   int sum=0;
    int arr[]={12,30,49,49,45};
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<"  ";
        sum+=arr[i];
    }
    cout<<endl;
    cout<<sum;
   
}