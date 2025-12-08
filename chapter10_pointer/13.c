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

// double *StoreArr(int n,int m,double a[n][m]){
//     int i,j;
//     double (*ptr)[n][m];
//     for (i = 0 ; i< n,i++;){
//         for (j = 0;j<n;j++){
//             printf"please enter the a data\n");
//             a[i][j] = scanf("f",);
//         }
//     }
//     return ptr = a ;

// }
void StoreArr(int rows, int cols, double arr[rows][cols]) {
    printf("请输入3组数据,每组包含5个double类型的数:\n");
    for (int i = 0; i < rows; i++) {
        printf("第%d组数据(个数)", i + 1);
        for (int j = 0; j < cols; j++) {
            scanf("%lf", &arr[i][j]);
        }
    }
}
/*错误在于1.
没有理解scanf
数组传参不理解但导致错误，也就是不需要返回值，数组直接引用修改

*/

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

void printOutcome(int rows, int cols, double arr[rows][cols]) {
    printf("\n=== 计算结果 ===\n");
    
    // 打印数组内容
    printf("数组内容：\n");
    for (int i = 0; i < rows; i++) {
        printf("第%d组: ", i + 1);
        for (int j = 0; j < cols; j++) {
            printf("%.2f ", arr[i][j]);
        }
        printf("\n");
    }
    
    // 打印每组平均值
    printf("\n每组平均值:\n");
    for (int i = 0; i < rows; i++) {
        double rowAvg = ROWavg(cols, arr[i]);
        printf("第%d组平均值: %.2f\n", i + 1, rowAvg);
    }
    
    // 打印总平均值和最大值
    double totalAvg = avgALL(rows, cols, arr);
    double maxVal = MAXall(rows, cols, arr);
    printf("\n所有数据平均值: %.2f\n", totalAvg);
    printf("所有数据最大值: %.2f\n", maxVal);
}

// void main(){
//     double x[][];
//     x = StoreArr ; // 典型错误
//     avgford1 = RoWavg(5,x[0]);
//     avgford2 = RoWavg(5,x[1]);
//     avaford3 = RoWavg(5,x[2]);
//     totalaver = avgAll(3,5,x);
//     max = MAXall(3,5,x);
    
    
int main() {
    double arr[3][5];
    
    // a. 存储数据
    StoreArr(3, 5, arr);
    
    // b, c, d, e 通过printOutcome函数完成
    printOutcome(3, 5, arr);
    
    return 0;
}