#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<string.h>
using namespace std;


int main() {
     int t;  
   cin>>t;  
   while(t--){  
     char a[1000];  
     int aa[1000]={0};  
     cin>>a;  
     int n = strlen(a);  
     if(next_permutation(a,a+n)){  
       cout<<a<<endl;  
     }else{  
       cout<<"no answer"<<endl;  
     }  
   }  
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
