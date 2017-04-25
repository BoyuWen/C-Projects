//
//  main.c
//  实例195 共用体存放信息
//
//  Created by 一语书生 on 16/5/16.
//  Copyright © 2016年 一语书生. All rights reserved.
//

#include <stdio.h>
#define NUM 40
struct{
    char name[NUM];
    char num;
    char tp;
    union{
        int inclass;
        char position[10];
    }job;
}people[2];

int main(void) {
    int i;
    for(i=0;i<2;i++){
        scanf("%s",people[i].name);
        rewind(stdin);
        scanf("%c",&people[i].num);
        rewind(stdin);
        scanf("%c",&people[i].tp);
        rewind(stdin);
//        scanf("%s %c %c",people[i].name,&people[i].num,&people[i].tp);
        if(people[i].tp=='s'){
            scanf("%d",&people[i].job.inclass);
        }else if(people[i].tp=='t'){
            scanf("%s",people[i].job.position);
        }
    }
    printf("编号\t姓名\t类型\t班级\\职务\n");
    for(i=0;i<2;i++){
//        printf(" %c\t%s\t%c\t",people[i].num,people[i].name,people[i].tp);
        printf("%c\t",people[i].num);
        printf("%s\t",people[i].name);
        printf("%c\t",people[i].tp);
        if(people[i].tp=='s'){
            printf("%d\n",people[i].job.inclass);
        }else if(people[i].tp=='t'){
            printf("%s\n",people[i].job.position);
        }
    }
    return 0;
}
