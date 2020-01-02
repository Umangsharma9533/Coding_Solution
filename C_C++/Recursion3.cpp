#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int factorial( int n)
    {
    if(n<1)
        {
        return 1;
    }
        
    return  (n*factorial(n-1));
    
}
int main() {
    int a,result=0;
    scanf("%d",&a);
    
result=factorial(a);
    printf("%d",result);
      /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
