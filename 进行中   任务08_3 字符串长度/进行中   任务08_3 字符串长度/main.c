//
//  main.c
//  进行中   任务08_3 字符串长度
//
//  Created by 一语书生 on 16/5/26.
//  Copyright © 2016年 一语书生. All rights reserved.
//

#include <stdio.h>
int mystrlen(const char *str);

int main(void) {
    char *s;
    printf("请输入一串字符：\n");
    scanf("%s",s);
    printf("字符串的长度是：%d.\n",mystrlen(s));
    return 0;
}

int mystrlen(const char *str){
    int i=0;
    while (str[i]!='\0') {
        i++;
    }
    return i;
}