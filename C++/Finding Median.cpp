#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        {
        cin>>a[i];
    }
    std::sort(a,a+n);
    int j;
    if(n%2==0)
        {
         j=n/2;
    }
    else
        {
        j=(n/2);
    }
    cout<<a[j];
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
