/*
编写一个程序，提示用户输入3组数，每组数包含5个double类型的数
（假设用户都正确地响应，不会输入非数值数据）。该程序应完成下列任
务。
a.把用户输入的数据储存在3×5的数组中
b.计算每组（5个）数据的平均值
c.计算所有数据的平均值
d.找出这15个数据中的最大值
e.打印结果

每个任务都要用单独的函数来完成（使用传统C处理数组的方式）。完
成任务b，要编写一个计算并返回一维数组平均值的函数，利用循环调用该
函数3次。对于处理其他任务的函数，应该把整个数组作为参数，完成任务c
和d的函数应把结果返回主调函数。

*/

#include<stdio.h>

double *StoreArr(int n,int m,double a[n][m]){
    int i,j;
    double (*ptr)[n][m];
    for (i = 0 ; i< n;i++){
        for (j = 0;j<n;j++){
            printf("please enter the a data\n");
            a[i][j] = scanf("f",); // int scanf(const char *format, ...) 从标准输入 stdin 读取格式化输入。
        }
    }
    return ptr = a ;

}

double ROWavg(int n, double a[n]){
    int i;
    double avg;
    for (i = 0,i<n;i++){
        total += a[i];
    }
    avg = total/n;
    return avg;
}

double avgALL(int n,int m, double a[n][m]){
    int i,j;
    double total,avg;
    for (i = 0;i<n;i++){
        for (j = 0;j<m;j++){
            total += a[i][j];
        }
    }
    avg = total/(n*m);
    return avg;
}

double MAXall(int n,int m,double a[n][m]){
    int i,j;
    double max = a[0][0];
    for (i = 0;i<n;i++){
        for (j = 0;j<m;j++){s
            if (a[i][j]>max){
                max = a[i][j];
            }
        }
    }
    return max;
}

void printOutcom(int n,int m,double [n][m]){
    int i,j;
    for(i=0;i<n;i++){
        for(j=0,j<n,j++){
            prinf("a[%d][%d]is%1f",i,j,a[i][i]);
        }
    }
}

void main(){
    double x[][];
    x = StoreArr ;
    avgford1 = RoWavg(5,x[0]);
    avgford2 = RoWavg(5,x[1]);
    avaford3 = RoWavg(5,x[2]);
    totalaver = avgAll(3,5,x);
    max = MAXall(3,5,x);

    
    


}