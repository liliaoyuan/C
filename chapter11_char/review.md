1. 声明
```C
int main(void){
    char name[] = {'F',　'e',　's',　's'};

}
```
错误在于 应该是末位字符  `char name[] = {'F',　'e',　's',　's','\0'};`

一般用字面量好一些 const char name = "fess" 注意fess 这个字符会存放在rodata数据中

```C
#include　<stdio.h>
int　main(void)
{
char　note[]=　"See　you　at　the　snack　bar.";
char *ptr;
ptr　=　note;
puts(ptr);
puts(++ptr); 
note[7]　=　'\0';
puts(note);
puts(++ptr);
return　0;
}
```
`int puts(const char *str)` 把一个字符串写入到标准输出 stdout，直到空字符，但不包括空字符

编译器中看到的字符数组，除了0之后每个字符就是占一个地址为

因此，
> 
puts(ptr) = See　you　at　the　snack　bar.
puts(++ptr) = ee　you　at　the　snack　bar.
puts(note) = See　you　
puts(++ptr) = e　you

note that ptr++ = 1. puts(ptr) 2 ptrr++
while ++ptr = 1.ptr++ 2puts(ptr)
++ means +1

---
3.下面的程序会打印什么？
#include　<stdio.h>
#include　<string.h>
int　main(void)
{
char　food　[]　=　"Yummy";
char *ptr;
ptr　=　food　+　strlen(food);
while　(--ptr　>=　food)
puts(ptr);
return　0;
}

strlen(food) = 6?
ptr = *food[] + 6 = 
puts(ptr) = 
y
my
mmy
ummy
Yummy
---
4.下面的程序会打印什么？
```C
#include　<stdio.h>
#include　<string.h>
int　main(void)
848
{
char　goldwyn[40]　=　"art　of　it　all　";
char　samuel[40]　=　"I　read　p";
const char * quote = "the way through.";
strcat(goldwyn,　quote);
strcat(samuel,　goldwyn);
puts(samuel);
return　0;
}
```
`char *strcat(char *dest, const char *src)` 把 src 所指向的字符串追加到 dest 所指向的字符串的结尾
>
strcat(glodwyn, quote) = > glodwyn ='art of it all the way through'
strcat(samuel,goldwyn) = samuel = ' I read part of it all the way through'
puts(samuel) = printf( "I read part of it all the way through‘)
---

5.下面的练习涉及字符串、循环、指针和递增指针。首先，假设定义了
下面的函数：
```C
#include　<stdio.h>
char *pr(char *str) // return type char * name pr
{
char *pc;
pc　=　str;
while (*pc) // excepting you got while(0) all other case same
putchar(*pc++);
do　{
putchar(*--pc);
}　while　(pc　-　str);
return　(pc);
}
```
考虑下面的函数调用：
x = pr("Ho Ho Ho!");
a.将打印什么？
b.x是什么类型？
c.x的值是什么？
d.表达式*--pc是什么意思？与--*pc有何不同？
e.如果用*--pc替换--*pc，会打印什么？
f.两个while循环用来测试什么？
g.如果pr()函数的参数是空字符串，会怎样？
h.必须在主调函数中做什么，才能让pr()函数正常运行？

A:
for `putchat`:C 库函数 int putchar(int char) 把参数 char 指定的字符（一个无符号字符）写入到标准输出 stdout 中 (人话就是输出一个字符)
for while 只有while（0）会跳出循环
a. HOHOHO!!HOHOHO
b. x是个指针
c. x = &str
d. *--pc = *--str  --*pc只会是*pc -1 （前者变成指针运算后者变成ASCII）
e  --*pc会将H变成ASCII码 最终输出长序列值 // 错误 putchar（）依然回将其作为字符打印也就是char(H-1)  = G 打印GOGOGO！
f  测试中止符号\0
g 返回空指针

//
第一个while循环不执行（因为 *pc 立即为 '\0'）
do-while循环执行一次：--pc 使指针指向 '\0' 之前（未定义行为，危险！）
可能打印垃圾字符或崩溃
以上为正确答案

h 自己在设置一个str就好了呗

//
传入非空字符串 *这个是最重要的

传入的字符串必须以 '\0' 结尾

字符串必须在有效的内存区域

包含 <stdio.h> 头文件

---



6.假设有如下声明：
`char sign = '$'`;
sign占用多少字节的内存？'$'占用多少字节的内存？"$"占用多少字节的内存？

A：
sign 等于 char 占一个字节 //这个是个变量
$同样一个字节 // 这个是个常量
"$"我觉得后面有个/0 占用2字节

---
