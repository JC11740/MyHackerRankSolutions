#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int a , b;
    float c, d;
    
    int sum, nsum;
    float asum, ssum;
    
    scanf("%d %d", &a, &b);
    scanf("%f %f", &c, &d);
    
    sum = a + b;
    asum = c + d;
    
    nsum = a - b;
    ssum = c - d;
    
    printf("%d %d\n", sum, nsum);
    printf("%.1f %.1f\n", asum, ssum);
    
    return 0;
}
