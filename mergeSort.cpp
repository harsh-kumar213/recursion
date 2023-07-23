#include<iostream>
using namespace std;
 /// yet to be solved

void merge(int *arr,int s,int e)
{
    int mid = s +(e-s)/2;
    int n = mid -s + 1;
    int m = e - mid;

    int j = mid + 1;
    int a = 0;
    while(j<m){
       int i = n + a-1;
       while((i>=0) && (arr[j]<arr[i]))
       {
          arr[i+1] = arr[i];
          i--;
       } 
       arr[i+1] = arr[j];
       j++;
       a++;
    }

}

void mergeSort(int *arr,int s,int e)
{
    // base case
    if(s>e)
       return;
   
   int mid = s + (e-s)/2;
   
    // breaking left part of the array
     mergeSort(arr,s,mid);

     // breaking right part of the array

       mergeSort(arr,mid +1,e);

       // merge BOTH Sorted Arrays
        
        merge(arr,s,e);

}

int main()
{
    int n;
    cout<<"enter the size of your array";
    cin>>n;

    int arr[20];
    for(int i = 0; i<n; i++)
    {
        cin>>arr[i];
    }

   int s=0;
   int e = n-1;
    mergeSort(arr,s,n-1);

    for(int i = 0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}