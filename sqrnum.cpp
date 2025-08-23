#include<iostream>

using namespace std;
int main(){
    int n;
    cout<<"Enter n";
    cin>>n;
  int arr[5]={0,1,2,3,4};
  int sqr[5];
  for(int i=0;i<n;i++)
  {
    sqr[i]=arr[i]*i;
    
  }
   for(int i=0;i<n;i++)
  {
    cout<<sqr[i]<<"  ";
    
  }
  return 0;
}