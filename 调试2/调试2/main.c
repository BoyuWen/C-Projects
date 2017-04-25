//
//  main.c
//  调试2
//
//  Created by 一语书生 on 16/6/21.
//  Copyright © 2016年 一语书生. All rights reserved.
//

#include <stdio.h>
int find(char *arr,char x){
    int i,len=0;
    char *p=arr;
    while (*p!='\0') {
        len++;
        p++;
    }
    for (i=0; i<len; i++) {
        if (arr[i]==x) {
            return (i+1);
        }
    }
    return -1;
}
int main(void){
    char *str="abdgfd";
    int i=find(str, 'b');
    printf("%d ",i);
}