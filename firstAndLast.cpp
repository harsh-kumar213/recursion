#include<iostream>
using namespace std;

bool leftOccurence(int *arr,int s,int e,int key)
{
    int mid = s+(e-s)/2;
    int index = -1;
    if(s>e)
    {
        return false;
    }
    if(arr[mid]== key)
    {
           index = mid;
           if(arr[mid]==arr[mid-1])
           {
            e = mid - 1;
             return leftOccurence(arr,s,mid - 1,key);
           }
           else{
            cout<<"first occurence of element is at index"<<index<<endl;
            return true;
           }
    }
    else if(arr[mid]>key)
    {
        return leftOccurence(arr,s,mid - 1,key);
    }
    else{
        return leftOccurence(arr,mid +1,e,key);
    }
    cout<<"first occurence of element is at index"<<index<<endl;
}

bool rightOccurence(int *arr,int s, int e, int key)
{
    int mid = s+(e-s)/2;
    int index = -1;
    if(s>e)
    {
        return false;
    }
    if(arr[mid]== key)
    {
           index = mid;
           if(arr[mid]==arr[mid+1])
           {
            s = mid + 1;
            return rightOccurence(arr,mid +1,e,key);
           }
           else{
            cout<<"last occurence of element is at index"<<index<<endl;
            return true;
           }
    }
    else if(arr[mid]>key)
    {
        return rightOccurence(arr,s,mid - 1,key);
    }
    else{
        return right Occurence(arr,mid +1,e,key);
    }
    cout<<"last occurence of element is at index"<<index<<endl;
}

int main()
{
    int n;
    cout<<"enter lenght of your array"<<endl;
    cin>>n;
    int arr[10];
    for(int i = 0; i<n; i++)
    {
        cin>>arr[i];
    }
    int key;
    cout<<"enter value of key"<<endl;
    cin>>key;
    int s=0; 
    int e = n -1;
    // for left occurence
    bool ans = leftOccurence(arr,s,e,key);

    // for right occurence
    bool ans2 = rightOccurence(arr,s,e,key);

    if((!ans) && (!ans2))
    {
        cout<<"key is not present in the array"<<endl;
    }

    return 0;
}