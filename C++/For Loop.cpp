#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    string str[]={" ", "one","two","three","four","five","six","seven","eight","nine"};
    int a=0,b=0;
    cin>>a>>b;
    for(int i=a;i<=b;i++)
        {
        if(i<=9)
            {
            cout<<str[i]<<endl;
        }
        else
            {
            if(i%2==0)
                {
                cout<<"even"<<endl;
            }
            else
                {
                cout<<"odd"<<endl;
            }
        }
        
    }
    // Complete the code.
    return 0;
}
