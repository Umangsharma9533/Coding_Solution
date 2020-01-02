#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int k;
    cin >> k;
    int j=s.length();
    for(int i=0;i<=j;i++)
        {
       if(s[i]!='-'&& s[i]>='a' && s[i]<='z')
           {
            s[i] = (char)(((s[i] + k - 'a' + 26) % 26) + 'a');
       }
    else if(s[i]!='-'&& s[i]>='A' && s[i]<='Z')
           {
            s[i] = (char)(((s[i] + k - 'A' + 26) % 26) + 'A');
       }
    }
       
    cout<<s;
    return 0;
}
