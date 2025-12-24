ls
/*
1. contidional words
2. loop feed 
*/
#include<stdio.h>

void mystring_in(char arr1, char arr2,n,m){
    int i,j;
    char *adr;
    for(i=0;i<n,i++){
        for (j = 0, j<m,j++){
            if(arr2[j] = arr1[i]){
                adr = arr2[j]
                break;
            }
            else(){
                adr = null
            }
        }
    }

    return adr
}
int main(void){

}
/*

loop feeding 

开始循环
    ↓
用户输入两个字符串
    ↓
程序处理（调用 string_in）
    ↓
显示结果和详细分析
    ↓
询问："是否继续测试？"
    ↓
是 → 回到循环开始（用新输入"喂养"程序）
    ↓
否 → 结束循环

2. 解读题目比较

双重跳出机制 内外层如何跳出 （循环数字的寿命期）

提示，这里需要是匹配整个字符串而不是单一字符

也就是连续的对等

str1 = str2
*p1 = str1
*p2 = str2
p1++ 
p2++
之后在循环

直到*p2 = 0跳出

3. return会立即返回 并结束当前函数模块



*/