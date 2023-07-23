#include<iostream>
using namespace std;

void swap(int& a,int& b)
{
   
}

void bubbleSort(int *arr,int size)
{
    // already sorted
    if((size == 0) || (size == 1))
    {
        return ;
    }

    for(int i = 1 ; i<size; i++)
    {
        if(arr[i]<arr[i-1]) 
        {
            
             int temp  =  arr[i];
              arr[i] = arr[i-1];
              arr[i-1] = temp;
        }
    }
    bubbleSort(arr,size - 1);
}

int main()
{
    int n;
    cout<<"enter lenght of array"<<endl;
    cin>>n;
    int arr[10];
    for(int i = 0; i<n; i++)
    {
        cin>>arr[i];
    }
    
    bubbleSort(arr,n);
     
     for(int i = 0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;

}