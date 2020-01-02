#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int x1,x2,v1,v2;
    cin>>x1>>v1>>x2>>v2;
         if( x1 == x2 && v1 == v2) {
        cout<<"YES";
    }
    else if (x1 == x2 && v1 > v2 ){
        cout<<"NO";
    }
    else if (x1 <= x2 && v1 <= v2 ){
        cout<<"NO";
    }
    else {
        if ((x2 - x1) % (v1 - v2) == 0)  {
            cout<<"YES";
        }
        else {
            cout<<"NO";
        }
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
