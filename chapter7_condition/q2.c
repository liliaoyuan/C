#include<stdio.h>

int main() {
    printf("this is what your charcar input");
    char ch ;
    int count = 0 ;
    while(((ch = getchar())!='#')){

        // 这行代码的末尾有一个空格
        printf("'%c':%-4d ", ch, ch);
        count ++ ;
        if (count % 8 ==0){
            printf("\n");
        }
    }

    return 0 ;
}