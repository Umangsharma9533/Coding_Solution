#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int t,temp; 
    scanf("%d",&t);
    for(int a0 = 0; a0 < t; a0++){
        int n,count=0; 
        scanf("%d",&n);
        temp=n;
       while(temp!=0)
           { 
           int r=temp%10;
           if(r!=0&&n%r==0)
               {
               count++;
           }
           temp /=10;
           
       }
        printf("%d\n",count);
    }
    return 0;
}
