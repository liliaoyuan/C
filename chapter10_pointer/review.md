1.下面的程序将打印什么内容？
```C
#include　<stdio.h>
int　main(void)
{
int　ref[]　=　{　8,　4,　0,　2　};
int *ptr;
int　index;
for　(index　=　0,　ptr　=　ref;　index　<　4;　index++,　ptr++)
printf("%d %d\n", ref[index], *ptr);
return　0;
}
```

答案：
8 8
4 4
0 0

---

3.在复习题1中，ref的地址是什么？ref + 1是什么意思？++ref指向什
么？

ref的地址是数组ref中第一个元素的地址 

ref + 1表示数组ref中第二个元素的地址。 

++ref是非法的，因为ref是一个数组名，不能被修改。

++ ref[0] 和 ref[0]++ 分别是什么意思
++ref[0]表示将ref数组的第一个元素的值加1，然后返回加1后的值。ref[0]++表示先返回ref数组的第一个元素的值，然后将该值加1。

只是执行顺序不同，实际的实现的结果是一样的。举例说明
假设ref[0]的初始值为5，那么：
执行++ref[0]后，ref[0]的值变为6，并且返回6。
执行ref[0]++后，先返回5，然后ref[0]的值变为6。 
给我一个程序说明
```C
#include <stdio.h>
int main(void) {
    int ref[] = {5, 4, 0, 2};
    
    // 使用++ref[0]
    int a = ++ref[0];
    printf("After ++ref[0]: ref[0] = %d, returned value = %d\n", ref[0], a);
    
    // 重置ref[0]的值
    ref[0] = 5;
    
    // 使用ref[0]++
    int b = ref[0]++;
    printf("After ref[0]++: ref[0] = %d, returned value = %d\n", ref[0], b);
    
    return 0;
}
```
上面的输出结果
After ++ref[0]: ref[0] = 6, returned value = 6
After ref[0]++: ref[0] = 6, returned value = 5

---

4.在下面的代码中，\*ptr和*(ptr + 2)的值分别是什么？
a.
```C
int *ptr;
int　torf[2][2]　=　{12,　14,　16};
ptr　=　torf[0];
b.
int * ptr;
int　fort[2][2]　=　{　{12},　{14,16}　};
ptr　=　fort[0];
```

对a *ptr = 12 *(ptr + 2) = 16
对b *ptr = 12 *(ptr + 2) = 未定义行为，因为fort[0]只有一个元素，访问ptr + 2超出了数组边界。
验证代码
```C
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
```

```bash
--- Accessing elements directly using array indices ---
Value of fort[0][1] is: 0
Value of fort[1][0] is: 14

--- Printing all elements the recommended way ---
fort[0][0] = 12
fort[0][1] = 0
fort[1][0] = 14
fort[1][1] = 16
```
由此看出来，对于GCC，*（prt+2）并未超界面，因为整体内存排列中，数组并没有越界

---

6.假设有下面的声明：
int grid[30][100];
a.用1种写法表示grid[22][56]
b.用2种写法表示grid[22][0]
c.用3种写法表示grid[0][0]

a = *（grid[22]+56）
b = * grid[22] /grid[22][0]/**(grid+22) note that \*\(\*grid+22）=*(&(grid[0]+22))= grid[0][22]
c = *grid [0] / grid[0][0]/**grid

---

7.正确声明以下各变量：
a.digits是一个内含10个int类型值的数组
b.rates是一个内含6个float类型值的数组
c.mat是一个内含3个元素的数组，每个元素都是内含5个整数的数组
d.psa是一个内含20个元素的数组，每个元素都是指向int的指针
e.pstr是一个指向数组的指针，该数组内含20个char类型的值

```C
#include<stdio.h>
int main() {
    int digits[10] ;
    float rates[6] ;
    // int mat[3] = {a[5],b[5],c[5]};
    int mat[3][5]
    int *psa[20]; // 理解psa结合 *psa[20]->psa[20]数组 —> *psa [20]数组
    char (*pstr)[20]; 
    return 0;
     }
```
---
a.声明一个内含6个int类型值的数组，并初始化各元素为1、2、4、8、
16、32
b.用数组表示法表示a声明的数组的第3个元素（其值为4）
c.假设编译器支持C99/C11标准，声明一个内含100个int类型值的数组，
并初始化最后一个元素为-1，其他元素不考虑
d.假设编译器支持C99/C11标准，声明一个内含100个int类型值的数组，
并初始化下标为5、10、11、12、3的元素为101，其他元素不考虑

```C
#include<stdio.h>{
    int main(){
        int a[6] = {1,2,4,6,8,16,32};
        // a[2] = {4} should be a[2] = 4 but this is equality
        int a[6] = {[2] = 4};   
        int c[100] = {[99]=-1};
        int d[100] = {[5] = 101, [10] = 101, [11] = 101, [12] = 101, [3] = 101};
    }
}
```

---

10.假设有下面的声明：
>
float rootbeer[10], things[10][5], *pf, value = 2.2;
int i = 3;
判断以下各项是否有效：

a.rootbeer[2] = value;


b.scanf("%f", &rootbeer );


c.rootbeer = value;

d.printf("%f", rootbeer);

e.things[4][4] = rootbeer[3];

f.things[5] = rootbeer;

g.pf = value;

h.pf = rootbeer;

a correct


b incorrect scanf def scan("f",&a) a = f.but here rootbeer = float [10] 

c incorrect rootbeer is a address here so the type is long int 

d correct 

e correct 

f incorrect things[5] = things[5][i] for i <= 5 

g incorrect pf is a int address 

h correct

11. 声明一个800 * 600 的int

```C
int a[800][600];
```


12.下面声明了3个数组：
```C
double trots[20];
short clops[10][30];
long shots[5][10][15];
```
a.分别以传统方式和以变长数组为参数的方式编写处理trots数组的void
函数原型和函数调用 

b.分别以传统方式和以变长数组为参数的方式编写处理clops数组的void
函数原型和函数调用 

c.分别以传统方式和以变长数组为参数的方式编写处理shots数组的void
函数原型和函数调用 

```C
void process_trots(const int arr[10]);
void process_trots_vla(int n, int arr[n]);
process_trots;
int n = 20;
process_trols_vla(n,trots);
```
考察的是，数组作为参数的实例

---
void show(const double ar[], int n);　　　　　// n是数组元素的个数 

void show2(const double ar2[][3], int n);　　// n是二维数组的行数 

a.编写一个函数调用，把一个内含8、3、9和2的复合字面量传递给
show()函数。 

b.编写一个函数调用，把一个2行3列的复合字面量（8、3、9作为第1
行，5、4、1作为第2行）传递给show2()函数。 

```C






