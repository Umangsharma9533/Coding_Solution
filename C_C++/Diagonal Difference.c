#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n,sum1=0,sum2=0,diff=0;
     int j = 0;
    scanf("%d",&n);
    int a[n][n];
    for(int a_i = 0; a_i < n; a_i++){
       for(int a_j = 0; a_j < n; a_j++){
          
          scanf("%d",&a[a_i][a_j]);
       }
    }
    for (int i = 0; i < n; i++)
            {
                        sum1 += a[i][i];
                  
                   
                        sum2 += a[i][n-i-1];
    }
    diff=abs(sum2-sum1);
    printf("%d",diff);
    return 0;
}
