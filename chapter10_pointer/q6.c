#include<stdio.h>

void sort_from_min(double a[],int n){
    int i,j;
    for(i=0;i<n;i++){
        for (j = 0;j<n;j++){
            if (a[i] <= a[j]){
                a [i] = a[j] ;
         }

        }

    }
    
}

void main(){
    double a[5] = {1.0,2.0,3.0,4.0,5.0};
    sort_from_min(a,5);
    int i;
    for (i = 0; i<=5;i++){
        printf("a%d now is %1f\n",i,a[i]);

    }
}