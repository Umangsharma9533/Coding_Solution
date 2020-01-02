#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
float cost=0.0,tip=0.0,tax=0.0;
    int tcost=0;
    scanf("%f",&cost);
    scanf("%f",&tip);
    scanf("%f",&tax);
    tcost= (int)((cost) + round(cost*(tip/100))+ round(cost*(tax/100)));
    printf("The total meal cost is %d dollars.",tcost);

    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
