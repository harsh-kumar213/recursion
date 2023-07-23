#include<iostream>
using namespace std;
int doSum(int *arr,int size)
{
    if(size == 1)
    {
        return arr[0];
    }
    else{
        int a = arr[0];
        return a + doSum(arr+1,size - 1);
    }
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
    int sum = doSum(arr,n);
    cout<<sum;
    
}