#include<iostream>
using namespace std;

bool binarySearch(int *arr,int s,int e ,int key)
{

    if(s>e)
    {
        return false;
    }

    int mid = s + (e-s)/2;

    if(arr[mid] ==key)
    {
        return true;
    }
    else if(arr[mid]<key)
    {
        s = mid + 1;
    }
    else 
    {
        e = mid -1;
    }
    return binarySearch(arr,s,e,key);
}

int main()
{
    int n;
    cout<<"enter the size of your array"<<endl;
    cin>>n;
    int arr[10];
    for(int i = 0; i<n; i++)
    {
        cin>>arr[i];
    }
     int s = 0,e = n-1;
     int key;
     cin>>key;
    bool ans =  binarySearch(arr,s,e,key);
    if(ans)
    {
        cout<<"present"<<endl;
    }
    else{
        cout<<"absent"<<endl;
    }

    return 0;
}