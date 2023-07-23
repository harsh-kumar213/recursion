#include<iostream>
using namespace std;

int partition(int *arr,int s,int e)
{
    int pivot = arr[s];
   
   int count = 0;

   for(int i = s; i<=e;i++)
   {
     if((arr[i]!=pivot) && (arr[i]<pivot))
        count++;
   }
   int pivotIndex = s+ count;

     int temp = arr[pivotIndex];
     arr[pivotIndex] = arr[s];
     arr[s] = temp;

     int i= s;
     int j = e;

     while((i<pivotIndex)&&(j>pivotIndex))
     {
        if(arr[i]<pivot)
          i++;

          if(arr[j]>pivot)
          j--;

          if((arr[i]>pivot) && (arr[j]<pivot))
          {
              temp = arr[i];
            arr[i] = arr[j];
             arr[j] = temp;
             i++;
             j--;
          }
     }
  return pivotIndex;
}

void quickSort(int *arr,int s,int e)
{
    if(s>=e)
    return;

    // partitioning the array
    int p = partition(arr,s,e);

    // Recursive Call

    quickSort(arr,s,p-1);

    quickSort(arr,p+1,e);
  
   
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

    int s = 0;
    int e = n-1;

    quickSort(arr,s,e);

    for(int i = 0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}