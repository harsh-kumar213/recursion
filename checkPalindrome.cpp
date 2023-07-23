//brute method

/* 
#include<iostream>
using namespace std;
string reverseString(string s,int st,int e){
   
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
     check if both s and reverse are equal
return 0;
}
*/

// more optimised method

#include<iostream>
using namespace std;

bool checkPalindrome(string& s,int st, int e)
{
    if(st>e)
    return true;

    if(s[st]!=s[e])
    {
        return false;
    }
    st++;
    e--;
    checkPalindrome(s,st,e);
}

int main()
{
    string s;
    getline(cin,s);
    int length = s.length();
    int st=0;
    int e = length - 1;

     bool ans = checkPalindrome(s,st,e);
   
   if(ans)
   {
    cout<<"palindrome"<<endl;
   }
   else
   {
    cout<<"not a palindrome"<<endl;
   }
    return 0;
}


