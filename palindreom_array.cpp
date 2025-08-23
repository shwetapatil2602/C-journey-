#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the value of n";
    cin>>n; 
        int a[n];
    int temp[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<"  ";
        temp[i]=a[i];
    }
    int i=0;
    int j=n-1;
    while(i<j)
    {
        int temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        i++;
        j--;
    }
    bool ispalindrome=true;
    for(int i=0;i<n;i++)
    {
    if(a[i]!=temp[i])
    {
        ispalindrome=false;
    }
    }
    cout<<(ispalindrome? "YES its a Palindrome":"No Its not");
}