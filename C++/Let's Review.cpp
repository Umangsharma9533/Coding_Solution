#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int T;
    cin>>T;
    for(int i=0;i<T;i++)
        {
        string s; 
        cin>>s;
        int j=s.length();
        for(int i=0;i<j;i=i+2)
            {
            cout<<s[i];
        }
        cout<<" ";
        for(int i=1;i<j;i=i+2)
            {
            cout<<s[i];
        }
        cout<<endl;
        
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
