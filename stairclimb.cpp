#include<iostream>
using namespace std;
int no_ways(int n)
{
    if(n<0)
    {
        return 0;
    }
    if(n==0)
    {
        return 1;
    }

    return no_ways(n-1) + no_ways(n-2);
}
int main()
{
    int n;
    cin>>n;
   int ans= no_ways(n);
   cout<<ans;
    return 0;
}