//设计一个程序，统计在读到文件结尾之前读取的字符数

#include <stdio.h>

int read_end(){
    int c = 0;
    int ch;
    while((ch = getchar())!= EOF){
        c ++;
    }

    return c ;

}

int main(){
    printf("input what you want: \n");
    printf("EOF in sysytem is %d \n",EOF);
    
    int a = read_end();
    printf("accumulate is %d",a);

    return 0;
}