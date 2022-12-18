#include<bits/stdc++.h>
#include"MYSTACK1.h"
using namespace std;

bool areBrackebalance(string chk)
{
  Stack1 <char> stk;

  for(int i=0; i<chk.length(); i++)
  {
     if(stk.Empty())
     {
      stk.Push(chk[i]);
     }
     else if(( stk.Top() == '(' && chk[i] ==')') ||
             (stk.Top() == '{' && chk[i] =='}') ||
             (stk.Top() == '[' && chk[i] ==']'))
              {
               stk.Pop();
              }
              else{
               stk.Push(chk[i]);
              }


  }
      if(stk.Empty()) return true;
      else return false;


}

int main()
{

// string check="({(())[{}]})";
 string check="({(())[{}])";
 bool chk = areBrackebalance("[({}])");

 if(chk) cout<<"YES";
 else cout<<"NO";

 return 0;
}
