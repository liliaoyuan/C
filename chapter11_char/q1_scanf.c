/*
1. 考察标准输入输出流

1.考察scanf如何处理文件的末尾
 scanf遇到字节输入，结束符号为"0" 如果你键入回车，由于没有停止符号，这个回车同样会被读取
然后循环往复

2.考察地址作为形参的理解，也可以等价于地址作为形参的理解


*/
#include<stdio.h>

void TakeStore(char arr[],int n){
    int i,j = 0;
    while(i<n){
        printf("enter a character\n "); 
        scanf("%1c",&arr[i]);
        i++;
    }
    while(j<n){
        printf("a[%d] is %c\n",j,arr[j]);
        j++;
    }
    
}

void main(){
    char x[5];
    TakeStore(x,5);
}