#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,d;
    cin>>n;
    cin>>d;
    int a[n];
    for(int i=0;i<n;i++)
        {
        cin>>a[i];
    }
    for(int k=d;k<n;k++)
        {
        cout<<a[k]<<" ";
    }
    for(int k=0;k<d;k++)
        {
        cout<<a[k]<<" ";
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
