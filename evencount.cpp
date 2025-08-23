#include<iostream>
using namespace std;
int main()
{
    int arr[]={2,4,5,7,8,25};
    int size=sizeof(arr)/sizeof(arr[0]);
    int evencount=0;
    int oddcount=0;
   cout<<size<<endl;
   for(int i=0;i<size;i++)
   {
    cout<<arr[i];}
   for(int i=0;i<size;i++)
   {
    if(arr[i]%2==0)
    evencount++;
    if(arr[i]%2!=0)
    oddcount++;
   }
 cout<<"evencount is:"<<evencount;
 cout<<"Oddcount is:"<<oddcount;
}