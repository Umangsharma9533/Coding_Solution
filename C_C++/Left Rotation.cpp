#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,d;
    cin>>n>>d;
    int a[n];
    for(int i=0;i<n;i++)
        {
        cin>>a[i];
    }
    if(d<n)
        {
        for(int i=d;i<n;i++)
            {
            cout<<a[i]<<" ";
        }
        for(int i=0;i<d;i++)
            {
            cout<<a[i]<<" ";
        }
    }
    else if(d==n)
        {
        for(int i=n-1;i>0;i--)
            {
            cout<<a[i]<<" ";
        }
    }
    
      
    
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
