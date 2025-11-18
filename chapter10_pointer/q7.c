#include<stdio.h>

void copy_arry_way(double a[], double b[], int n){
    for(int i=0; i<n; i++){
        a[i] = b [i];
    }
}

int main(){
    double a[5] = {1.0,2.0,3.0,4.0,5.0};
    double b[5];
    copy_arry_way(b,a,5);
    int i;
    for(i=0;i<5;i++){
        printf("b[%d] is %4f\n",i,b[i]);
    }
    return 0 ;
                                                                                                                                                                                     
}