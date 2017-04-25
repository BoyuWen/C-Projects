//
//  main.c
//  实例168 指针输出数组
//
//  Created by 一语书生 on 16/5/19.
//  Copyright © 2016年 一语书生. All rights reserved.
//

#include <stdio.h>

int main(void) {
    int a[10];
    int *p,i;
    for(i=0;i<10;i++){
        scanf("%d",&a[i]);
    }
//    p=a;
//    for(i=0;i<10;i++){
//        printf("%d ",*(p+i));
//    }  //或者以下
    for(p=a;p<(a+10);p++){
        printf("%d ",*p);
    }
    return 0;
}
