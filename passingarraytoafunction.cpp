#include<iostream>
using namespace std;
void change(int x[]){
    x[4]=45;
}
int main(){
    int arr[]={10,20,30,40,50};
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }
 cout<<endl;
 change(arr);
 for(int i=0;i<5;i++)
 {
    cout<<arr[i]<<"  ";
 }
}