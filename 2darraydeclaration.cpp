#include<iostream>
using namespace std;
int main()
{
    int arr[4][3];
    cout<<"Enter the array element";
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>arr[i][j];
            
        }
    }
    cout<<"array elements are:";
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<arr[i][j]<<"  ";
            
        }
    }
}