  #include<iostream>
  using namespace std;
  int main(){
    int arr[]={12,34,56,23};
    int mx=arr[0];
    int mn=arr[0];
    for(int i=0;i<4;i++)
    {
        mx=max(mx,arr[i]);
        mn=min(mn,arr[i]);
    }
    cout<<mx<<endl;
    cout<<mn;
  }