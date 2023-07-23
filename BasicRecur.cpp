#include<iostream>
using namespace std;

void cont(int n)
{
    if(n==0){
    return ;}


     cont(n-1);

    cout<<n<<" ";
    


}



int main()
{
    int n;
    cin>>n;
   

    cont(n);

  return 0;
}