/*
考察数组和指针在参数传递中的应用
特点 1.传递的数字明 之后带有 N 这样参数灵活度很高，也能够很好地值控制
特点 2.这样的传参不需要返回值，因为指向的地址发生了改变
特点 3.实际工程中，还是用数组的方式来传参，莫名的指针会极大地降低可读性 array[],n >远大于 *array,n 这种最合适
*/

#include<stdio.h>

void copy_arry_way(double a[], double b[], int n){
    for(int i=0; i<n; i++){
        a[i] = b [i];
    }
}

void copy_pointer_wayWithIncreader(double *a, double *b, int n){
    for(int i=0; i<n; i++){
        *a++ = *b++;
    }
}

void copy_LastPointer(double *a, double *b, double* end_b){
    while(b < end_b){
        *a++ = *b++; // 1 double b_old = b++, a = b_old, a++,
    }
}

void print_array(double arr[], int n){
    for(int i=0; i<n; i++){
        printf("%.1f ", *(arr + i));
    }
    printf("\n");
}

int main(){
    double arr1[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
    double arr2[5];
    double arr3[5];
    double arr4[5];


    copy_arry_way(arr2, arr1, 5 );
    copy_pointer_wayWithIncreader(arr3, arr1, 5 );
    copy_LastPointer(arr4, arr1, arr1 + 5 );

    print_array(arr2, 5);
    print_array(arr3, 5);
    print_array(arr4, 5);
    return 0;

}