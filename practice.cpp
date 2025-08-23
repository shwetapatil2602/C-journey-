#include<iostream>
using namespace std;
int main()
{
    int arr[6];
    int nsqr[6];
    for(int i=0;i<6;i++)
    {
        cout<<i;
    }
    cout<<endl;
    for(int i=0;i<6;i++)
    {
        nsqr[i]=arr[i]*i;
    }
    for(int i=0;i<6;i++)
    {
        cout<<nsqr[i]<<"  ";
    }
}