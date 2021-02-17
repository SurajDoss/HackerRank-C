#include <stdio.h>
#include <string.h>


int main(){
    static const char *strings[] = {"one","two", "three", "four", "five", "six", "seven", "eight", "nine"};
    int num = 0;
    
    if(scanf("%d", &num)<1){
        return 1;
    }
    if(num>0 && num <10){
        printf("%s",strings[num-1]);
    }else if(num > 9){
        printf("Greater than 9");
    }
    return 0;
}
