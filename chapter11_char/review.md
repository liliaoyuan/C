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
```C#include　<stdio.h>
char *pr(char *str)
{
char *pc;
pc　=　str;
while (*pc)
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
---
C 库函数 int putchar(int char) 把参数 char 指定的字符（一个无符号字符）写入到标准输出 stdout 中




6.假设有如下声明：
char sign = '$';
sign占用多少字节的内存？'$'占用多少字节的内存？"$"占用多少字节的
内存？