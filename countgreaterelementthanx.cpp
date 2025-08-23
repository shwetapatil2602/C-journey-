#include<iostream>
using namespace std;
int main(){
    int x=5;
    int arr[5]={0,12,3,2,8};
    int count=0;
    for(int i=0;i<5;i++)
    {
        if(arr[i]>x)
        count++;
    }
    cout<<count;
}