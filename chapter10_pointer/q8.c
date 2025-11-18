#include<stdio.h>

void copy_pointer_wayWithIncreader(double *a, double *b, int n){
    for(int i=0; i<n; i++){
        *a++ = *b++;
    }
}

int main(){
    double arr1[7] = {1.1, 2.2, 3.3, 4.4, 5.5};
    double b[3];
    copy_pointer_wayWithIncreader(b,arr1+2,3);
    int i;
    for(i=0;i<3;i++){
        printf("b[%d] is %4f\n",i,b[i]);
    }
    return 0;
}