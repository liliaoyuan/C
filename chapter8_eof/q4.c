#include <stdio.h>

int main() {
    int c = 0, C = 0;  // 初始化变量
    int ch;            // 存储读取的字符
    
    // 循环读取字符直到EOF
    while ((ch = getchar()) != EOF) {
        if (ch >= 'A' && ch <= 'Z') {
            C++;  // 大写字母计数
        }
        else if (ch >= 'a' && ch <= 'z') {
            c++;  // 小写字母计数
        }
        // 其他字符不计数
    }
    
    printf("%d,%d\n", c, C);  // 输出小写字母数和大写字母数
    
    return 0;
}