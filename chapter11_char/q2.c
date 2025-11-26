/*
考察scanf里面的格式中 跳过命令" %C" 在 scanf 的格式字符串中，空格代表一个指令："跳过所有连续的空白字符"

考察其他输入字符流功能
*/
#include<stdio.h>

void TakeStore(char arr[],int n){
    int i,j = 0;
    while(i<n){
        printf("enter a character\n "); 
        getchar(" %c",a[i]);//a[i] = getchar();
        if(a[i]="\0";a[i]="\t";a[i]="\n"){ //
            break;

        }
        else (){
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

/*
使用 getchar() 正确方式：getchar() 不需要参数，返回读取的字符

正确的比较操作：使用 == 而不是 =

正确的条件语法：使用 ||（或）连接多个条件

初始化变量：i = 0

使用 int main() 而不是 void main()
*/