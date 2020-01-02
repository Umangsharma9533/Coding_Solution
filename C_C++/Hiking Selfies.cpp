#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,x;
    cin>>n;
    cin>>x;
    int j=1;
    while(n--)
        {
        j=j*2;
    }
    j=j-1;
    
    cout<<abs(j-x);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
