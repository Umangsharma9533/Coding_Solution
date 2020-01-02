#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n,count=0; 
    scanf("%d",&n);
    int *c = malloc(sizeof(int) * n);
    for(int c_i = 0; c_i < n; c_i++){
       scanf("%d",&c[c_i]);
    }
    for(int i=1;i<n;count++)
        { 
         if(c[i+1]!=1 && i<n-1)
             {
             i +=2;
         }
         else
             {
             i++;
         }
        
    }
    printf("%d",count);
    return 0;
}
