//
//  main.cpp
//  linear list
//
//  Created by 一语书生 on 16/9/18.
//  Copyright © 2016年 一语书生. All rights reserved.
//

#include <iostream>
using namespace std;

typedef struct list{
    int *p1;
    int len;
    int listsize;
}l;

int main(void) {
    int i = 0;
    l one;
    int *newb;
    one.p1 = (int *)malloc(3*sizeof(int));
    one.len = 3;
    one.listsize = 3;
    for (i = 0;i<=2;i++) {
        one.p1[i] = i;
    }
    cout<<"原表为："<<endl;
    for (i = 0;i<=2;i++) {
        cout<<one.p1[i]<<" ";
    }
    cout<<endl;
    int s,e;
    cout<<"请输入要插入数字的位置和数值："<<endl;
    cin>>s>>e;
    if (s<1||s>3) {
        return -1;
    }
    if (one.len>=one.listsize) {
        newb = (int *)realloc(one.p1, (one.listsize+1)*sizeof(int));
    }
    if (!newb) {
        return -1;
    }
    one.p1 = newb;
    int *q,*p;
    q = &(one.p1[s-1]);
    for (p = &one.p1[one.listsize-1]; p>=q; p--) {   //等于号时，p下边正好到i的位置
        *(p+1) = *p;
    }
    *q = e;
    one.len++;
    for (i = 0;i<=3;i++) {
        cout<<one.p1[i]<<" ";
    }
    return 0;
}
