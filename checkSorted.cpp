#include<iostream>
using namespace std;

bool checkSort(int arr[],int size)
{
       if(size==0|| size ==1 ){
        return true;
       }
       if(arr[0]>arr[1]){
        return false;
       }
       

       checkSort(arr +1 ,size-1);
}

int main()
{
    int n;
    cin>>n;
    int arr[10];
    for(int i = 0; i<n; i++)
    {
        cin>>arr[i];
    }
    bool ans = checkSort(arr,n);
    cout<<ans;
    return 0;
}