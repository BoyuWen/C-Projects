//
//  main.c
//  实例169 指针查找数列最大最小值
//
//  Created by 一语书生 on 16/5/19.
//  Copyright © 2016年 一语书生. All rights reserved.
//

#include <stdio.h>

void max_min(int a[],int n,int *max,int *min);
int main(void) {
    int i,max,min,n;
    printf("请输入数组的个数n：\n");
    scanf("%d",&n);
    int a[n];
    printf("请输入n个整数，用空格隔开\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    max_min(a, n, &max, &min);
    printf("最大值是%d,",max);
    printf("最小值是%d.\n",min);
    return 0;
}
void max_min(int a[],int n,int *max,int *min){
    int *p;
    *max=*min=*a;
    for(p=a+1;p<(a+n);p++){
        if(*max<*p){
            *max=*p;
        }else if (*min>*p){
            *min=*p;
        }
    }
}
