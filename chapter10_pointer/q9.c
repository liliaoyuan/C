/*
考察vla 用法 本质就是提前声明

v

*/

#include<stdio.h>

void copyVLA(int col,int row, double b[col][row], double a[col][row]){
    
    int i,j ;
    for (i=0;i<col;i++){
        for (j=0;j<row;j++){
            b[i][j]=a[i][j];
        }
    }


}

void showVLA(int col,int row, double a[col][row]){
    int i,j;
    for(i=0;i<col;i++){
        for (j=0;j<row;j++){
            printf("thisa[%d][%d]andthe value is %d\n",i,j,a[i][j]);
        }
        
    }
    

}

int main(){
    double a[3][5] = {(0,0,0,0,0)};
    double b[3][5];
    copyVLA(3,5,b,a);
    showVLA(3,5,b);
    printf("print now a\n");
    showVLA(3,5,a);
    return 0;
}