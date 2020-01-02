#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int array[60],n,x=0,z=0;
    
    cin>>n;
    for(int i=0;i<n;i++)
        {
        cin>>array[i];
    }
    for(int i=0;i<n;i++)
        {
        if(array[i]>37 && array[i]%5!=0)
            {
            z=array[i]/5;
                x= (z+1)*5;
            if((x-array[i])<3)
                {
                array[i]=x;
            }
        }
    }
    for(int i=0;i<n;i++)
        {
        cout<<array[i]<<endl;
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
