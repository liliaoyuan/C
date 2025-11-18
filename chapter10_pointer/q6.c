/*
there are much better way to optimize it but not include this anser found it in review.md
*/
#include<stdio.h>

void sort_from_min(double a[],int n){
    int i,j;
    double tmp;
    for(i=0;i<n-1;i++){
        for (j = i+1;j<n;j++){
            if (a[i] <= a[j]){
                tmp = a[i] ;
                a [i] = a[j] ;
                a[j] = tmp ;
                
         }

        }

    }
    
}

void main(){
    double a[5] = {1.0,2.0,3.0,4.0,5.0};
    sort_from_min(a,5);
    int i;
    for (i = 0; i<5;i++){
        printf("a%d now is %.1f\n",i,a[i]); // 8.2f = 821242.12

    }
}