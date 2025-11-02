// #include<stdio.h>
// int main(){
//     int * prt;
//     int fort[2][2] = {{12},{14,16}};
//     prt = fort[0];
//     printf("/* prt is %d/n,/*(prt+2) is %d/n",*prt,*(prt+4));
//     prinft("p")
//     return 0;
// }
#include <stdio.h>

int main(void) {
    // 定义和初始化数组
    // Define and initialize the array
    int fort[2][2] = {{12}, {14, 16}};

    printf("--- Accessing elements directly using array indices ---\n");

    // 打印 fort[0][1] 和 fort[1][0] 的值
    // Print the values of fort[0][1] and fort[1][0]
    printf("Value of fort[0][1] is: %d\n", fort[0][1]);
    printf("Value of fort[1][0] is: %d\n", fort[1][0]);

    printf("\n--- Printing all elements the recommended way ---\n");
    // 使用嵌套循环打印所有元素，这是最标准的方法
    // Using nested loops to print all elements, which is the standard method
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("fort[%d][%d] = %d\n", i, j, fort[i][j]);
        }
    }

    return 0;
}