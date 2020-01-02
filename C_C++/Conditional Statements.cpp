#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<string.h>
using namespace std;


int main() {
    string str[]={" ","one","two","three","four","five","six","seven","eight","nine"};
    int N;
    cin>>N;
    if(N<10)
        {
        cout<<str[N]<<endl;
    }
    else
        {
        cout<<"Greater than 9"<<endl;
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
 
   return 0;
}
