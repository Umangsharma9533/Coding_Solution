#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    long int s,t,a,b,m,n;
    long int d;
    int c=0,c1=0;
    cin>>s>>t;
    cin>>a>>b;
    cin>>m>>n;
        int array[m];
    int array2[n];
    for(int i=0;i<m;i++)
        {
        cin>>array[i];
    }
    for(int i=0;i<n;i++)
        {
        cin>>array2[i];
    }
    for(int i=0;i<m;i++)
        {
        array[i]=array[i]+a;
    }
    
    for(int i=0;i<n;i++)
        {
        array2[i]=array2[i]+b;
    }
    for(int i=0;i<m;i++)
        {
        if(array[i]>=s && array[i]<=t)
            {
            c++;
        }
    }
    for(int i=0;i<n;i++)
        {
        if(array2[i]>=s && array2[i]<=t)
            {
            c1++;
        }
       
    }
    
     cout<<c<<endl;
        cout<<c1;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
