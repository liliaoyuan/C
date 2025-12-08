/*
scanf"c%"会接收因为键盘输入的回车，即翻译成\n scanf" %c"会跳过空白字符
*/

#include<stdio.h>

void StoreUnemptyWORD(char a[],int maxnumber,int n){
    int i=0;
    char word[maxnumber];
    while(i<maxnumber){
    printf("please enter %d characters\n",maxnumber);
    scanf(" %c",word);
    i++;
    }
    for(i=0;i<=maxnumber;i++){
        if (word[i]!='\t'&&word[i]!=' '&&word[i]!='\n'){
            a[i] = word[i];
        }
    }

}

void main(){
    int i ;
    int n,maxnumber;
    printf("enter the character length you want\n");
    scanf("%d",&n);
    printf("enter the max read numbner you wnat");
    scanf("%d",&maxnumber);
    char arr1[n];
    StoreUnemptyWORD(arr1,n);
    for (i=0;i<7;i++){
        printf("a[%d] is %c\n",i,arr1[i]);
    }
}