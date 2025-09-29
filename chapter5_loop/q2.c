#include<stdio.h>
int main(){
    int n;
    printf("enter a number: ");
    scanf("%d", &n);
    
    for(int i = n; i <= n + 10; i++) {  // ✅ for循环支持变量声明
        printf("%d\n", i);
    }
    return 0;
}
