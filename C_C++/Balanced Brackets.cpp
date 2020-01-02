#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        string s;
        cin >> s;
        stack<char>st;
        int flag=1;
       
        int i=0;
        for(i=0;i<s.length();i++)
            {
            if(s[i]=='['||s[i]=='{'||s[i]=='(')
                {
                st.push(s[i]);
                continue;
            }
            if(st.empty())
                {
                flag=0;
                break;
            }
           
             if(s[i]=='}'&& st.top()=='{')
                {
                st.pop();
            }
            
            else if(s[i]==')'&& st.top()=='(')
                {
                st.pop();
            }
            else if(s[i]==']'&& st.top()=='[')
                {
                st.pop();
            }
            else
                {
                flag=0;
                break;
            }
        }
        if(flag==1&& st.empty())
            {
            cout<<"YES"<<endl;
        }
        else
            {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
