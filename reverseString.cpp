#include<iostream>
using namespace std;
string reverseString(string& s,int st,int e){
   
    if(st>e)
      return s;
    else{
      char temp = s[st];
      s[st] = s[e];
      s[e] = temp;
      st++;
      e--;
    }
    return  reverseString(s, st, e);
}
int main()
{
    string s;
    getline(cin,s);
    int length = s.length();
    int st=0;
    int e = length - 1;
    string reverse = reverseString(s,st,e);
    cout<<reverse<<endl;
return 0;
}