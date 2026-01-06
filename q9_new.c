#include<stdio.h>

void reveser_string(char a1[],int n){
    int i,size;
    size = strlen(char a1);
    for(i=0;i<(size-1)/2;i++){
        chat temp;
        temp = a1[i];
        a1[size-1-i]=temp;
    };

    
}

int main(void){
    int i,size;
    char C;
    char str[100];
    printf("enter a the size %d you want\n",size);
    size = getchar();
    for(i=0;i<size,i++){
        printf("enter the character u want,press \"  \" to stop")
        C = getchar();
        while(C =" ")
        if(C !=0||C!='s'){
            srt[i]=C;
        }

 
    }
    reveser_string(str1,100);
}
/*
c// 你的版本（不完整）：
temp = a1[i];
a1[size-1-i] = temp;  // 只做了一半

// 正确版本（完整交换）：
temp = str[i];
str[i] = str[len-1-i];        // 把后面的值给前面
str[len-1-i] = temp;          // 把前面的值（已保存）给后面
```

### 2. **输入方式简化**
- 使用 `fgets()` 直接读取整行字符串，而不是逐个字符读取
- 这样更符合实际使用场景，也更简单

### 3. **循环测试**
- 用 `do-while` 循环让用户可以多次测试不同的字符串
- 这符合题目"使用循环提供输入值"的要求

### 4. **函数设计**
- 函数只需要字符串参数，长度可以用 `strlen()` 获取
- 函数直接修改原字符串（原地反转）

## 运行示例
```
=== 字符串反转程序 ===

请输入一个字符串（最多99个字符）：Hello World
原始字符串: "Hello World"
反转后字符串: "dlroW olleH"

是否继续测试？(y/n): y

请输入一个字符串（最多99个字符）：12345
原始字符串: "12345"
反转后字符串: "54321"

是否继续测试？(y/n): n

程序结束！
*/