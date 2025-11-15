/*
这个练习考察的是指针和二维数组的关系

重点1：数组名退化成指向首元素的指针
    这里的退是真实的退化了维度

重点2 指针变量定义时候指向的地址不会退化
    同时地址是不能改变的，但是指针变量的值是可以改变的

解法就是你先用二维数组做一遍，然后用指针替换那个二维数组（用指针的方式访问二维数组），工程上面几乎不会有这种情况发生
*/

#include <stdio.h>

#define MONTHS 12    // 一年的月份数
#define YEARS   5    // 年数

int main(void)
{
    // 用2010～2014年的降水量数据初始化数组
    const float rain[YEARS][MONTHS] =
    {
        {4.3, 4.3, 4.3, 3.0, 2.0, 1.2, 0.2, 0.2, 0.4, 2.4, 3.5, 6.6},
        {8.5, 8.2, 1.2, 1.6, 2.4, 0.0, 5.2, 0.9, 0.3, 0.9, 1.4, 7.3},
        {9.1, 8.5, 6.7, 4.3, 2.1, 0.8, 0.2, 0.2, 1.1, 2.3, 6.1, 8.4},
        {7.2, 9.9, 8.4, 3.3, 1.2, 0.8, 0.4, 0.0, 0.6, 1.7, 4.3, 6.2},
        {7.6, 5.6, 3.8, 2.8, 3.8, 0.2, 0.0, 0.0, 0.0, 1.3, 2.6, 5.2}
    };

    const float (*ptr_way)[YEARS][MONTHS] = &rain;

    float total,yearly_avg, monthly_avg;

    int year, month;

    for (year = 0, total = 0; year < YEARS; year++)
    {
        for (month = 0; month < MONTHS; month++)
        {
            total += *(*((*ptr_way) + year) + month); //total += rain[year][month] = *(*(*ptr_way) + year) + month)
        }
    }
    


    printf("**总降水量%f\n",total); 
    // 其他平均数据一此类推，不做具体的数据计算了

    return 0;
    
    /*
    几种定义: *ptr_way[Months] = rain equally *ptr_way = &rain[0]; 
              /*ptr_way = rain[0];/ **prt_way = &rain[0][0]
              *(*(ptr_way + 1) + 2) = rain[1][2]
    数组退化成指向首地址的指针:
        rain 退化成 &rain[0]
        rain[0] 退化成 &rain[0][0]
    但是指针本身退化不了:
        那么 *ptr_way 即 &rain[0] x = **ptr_way = rain[0][0]
    *

    
    */
}