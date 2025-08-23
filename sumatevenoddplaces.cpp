#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9};
    int sumeven=0;
    int sumodd=0;
    int diff;
    for(int i=0;i<9;i++)
    {
        if(arr[i]%2==0)
        {sumeven+=arr[i];}
        else{
            sumodd+=arr[i];
        }

    }
    cout<<"sumeven:"<<"  "<<sumeven<<endl;
    cout<<"sumodd :"<<"  "<<sumodd<<endl;
    diff=sumeven-sumodd;
    cout<<"diff: "<<diff;
}