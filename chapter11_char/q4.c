/*
scanf接收*/

#include<stdio.h>

#define maxnumber 10 
void StoreUnemptyWORD(char a[],int n){
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
    int n;
    printf("enter the character length you want\n");
    scanf("%d",&n);
    char arr1[n];
    StoreUnemptyWORD(arr1,n);
    for (i=0;i<7;i++){
        printf("a[%d] is %c\n",i,arr1[i]);
    }
}