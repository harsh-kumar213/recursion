#include<iostream>
using namespace std;
int n;
int i = 2;
void fibonacci(int a, int b)
{
    int c;
    if(i==n){
        return;
    }
    c = a+b;
    cout<<c<<" ";
    i++;
    fibonacci(b,c);
}
int main()
{
    
    cout<<"enter number of terms"<<endl;
    cin>>n;

    int a = 0,b = 1;
    cout<<"0 "<<"1 ";
    fibonacci(a,b);
    return 0;
}