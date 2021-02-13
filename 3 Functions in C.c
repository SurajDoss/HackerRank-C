#include <stdio.h>
int max_of_four(int a,int b,int c, int d){
    int set1, set2, endset;
    
    set1 = (a>b)? a:b;
    set2 = (c>d)? c:d;
    endset = (set1>set2)? set1:set2;
    return endset;
    
}
int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
