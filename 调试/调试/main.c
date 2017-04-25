//
//  main.c
//  调试
//
//  Created by 一语书生 on 16/6/21.
//  Copyright © 2016年 一语书生. All rights reserved.
//

/**
 *说明：11-04
 *姓名：张萌
 *学号：2015015238
 *班级：2班
 *日期：2016/06/25
 */
#include <stdio.h>
#include <stdlib.h>


int main(){
    struct st{
        int n;
        struct st *next;
    };
    struct st a[3]={
        5,&a[1],
        7,&a[2],
        9,'\0'
    },*p;
    p=&a[0];
    printf("%d\n",(*p).n++);
    printf("%d\n",++p->n);
    return 0;

    
}
//typedef struct node
//{
//    int data;
//    struct node*next;
//}node;
//
//node* mergeList(node*h1,node*h2)
//{
//    node *head=h1;
//    int i=0;
//    while(i<3)
//    {
//        i++;
//        head=head->next;
//    }
//    head->next=h2;
//    return h1;
//}
//
//int main(void)
//{
//    node m1,m2,m3,m4;
//    node n1,n2,n3;
//    node *p1;
//    node *p2;
//    p1=&m1;
//    m1.data=15;
//    m2.data=20;
//    m3.data=35;
//    m4.data=40;
//    m1.next=&m2;
//    m2.next=&m3;
//    m3.next=&m4;
//    m4.next=0;
//    p2=&n1;
//    n1.data=25;
//    n2.data=30;
//    n3.data=45;
//    n1.next=&n2;
//    n2.next=&n3;
//    n3.next=0;
//    p1=mergeList(p1,p2);
//    node*h=p1,*p;
//    int i,num;
//    for (i=0; i<7; i++) {
//        for (p=h; p->next!=NULL; p=p->next) {
//            if (p->data>p->next->data) {
//                num=p->data;
//                p->data=p->next->data;
//                p->next->data=num;
//            }
//        }
//    }
//    while(p1!=0)
//    {
//        printf("%3d",p1->data);
//        p1=p1->next;
//    }
//    
//}