#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n;
    float c=0.0,c1=0.0,c2=0.0; 
    scanf("%d",&n);
  
    int arr[n];
    for(int arr_i = 0; arr_i < n; arr_i++){
       scanf("%d",&arr[arr_i]);
    }
    for(int i=0;i<n;i++)
        {
        if(arr[i]>0)
            {
            c++;
        }
        if(arr[i]<0)
            {
            c1++;
        }
        if(arr[i]==0)
            {
            c2++;
        }
    }
    float f1=(c/(float)n);
    float f2=(c1/(float)n);
    float f3=(c2/(float)n);
    printf("%f\n%f\n%f",f1,f2,f3);
    return 0;
}
