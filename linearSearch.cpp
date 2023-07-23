#include<iostream>
using namespace std;

bool checkPresent(int *arr,int size,int key)
{  
    if( size == 1)
    {
        if(arr[0]!= key)
        {
            return false;
        }
        else
        {
            return true;
        }
    }
      if(arr[0]==key)
      {
        return true;
      }
      else {
        return checkPresent(arr+1,size-1,key);
      }
}

int main()
{
    int n;
    cout<<"enter length of your array"<<endl;
    cin>>n;

    int arr[10];
    for(int i = 0; i<n; i++)
    {
        cin>>arr[i];
    }
    int key;
    cin>>key;

    bool ans = checkPresent(arr,n,key);
    if(ans)
    {
        cout<<"element present"<<endl;

    }
    else{
        cout<<"not present"<<endl;
    }

    return 0;
}