#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    char a, b[BUFSIZ], c[BUFSIZ];
    
    scanf("%c",&a);
    printf("%c\n",a);
    scanf("%s",&b);
    printf("%s\n",b);
    scanf(" %[^\n]%*s",&c);
    printf("%s\n",c);
     
    return 0;
}
