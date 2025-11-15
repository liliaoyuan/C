#include<stdio.h>

int max(int a[],int n){
    int max = a[0];
    int i;
    for (i= 0;i<n;i++){
        if (max <= a[i]){
            max = a[i] ;
        }
    }
    return max ;
}
int main(){
    int a[6] = {1,2,3,4,6,7};
    int m = max(a,6);
    printf("the max of a%d",m);
    return 0 ;

}