/*
类似的，这种单个返回值的考知识点我就跳过了 跳至q6

在于1. 最值逻辑判断方法
2. 数组传参的用法
*/

#include<stdio.h>

int max_indexFOund(double a[],int n){
    int i,max_index ;
    max_index = 0 ;
    for (i = 0;i < n;i++){
        if (a [max_index] < a [i]){
           max_index = i;
        }
    }
    return max_index;

}
int main(){
    double a[5] = {1.1,2.2,3.3,4.5,1.5};
    int index = max_indexFOund(a,5);
    printf("the index of max a[]is %d",index);
    return 0;

}