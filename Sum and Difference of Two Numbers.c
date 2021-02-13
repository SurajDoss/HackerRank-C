#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int a, b, sum_ab, diff_ab;
    float c, d, sum_cd, diff_cd;
    
    scanf("%d" "%d", &a, &b);
    sum_ab = a+b;
    diff_ab = a-b;
    printf("%d" " %d\n", sum_ab, diff_ab);
    
    scanf("%f" "%f", &c, &d);
    sum_cd = c+d;
    diff_cd = c-d;
    printf("%0.1f" " %0.1f\n", sum_cd, diff_cd );
    
    
    return 0;
}
