//
//  main.cpp
//  构造函数 practice
//
//  Created by 一语书生 on 16/10/18.
//  Copyright © 2016年 一语书生. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

class Student{
public:
    Student();
    Student(string a = "0",int b = 0);
    void display();
private:
    string name;
    int number;
};

Student::Student(){
    cout<<"runing one!"<<endl;
    name = "haoshuangxing";
    number = 00001;
}
Student::Student(string a,int b){
    cout<<"runing two!"<<endl;
    name = a;
    number = b;
}
//Student::Student(string a,int b):name(a),number(b){}
void Student::display(){
    cout<<"name:"<<name<<endl;
    cout<<"number:"<<number<<endl;
}

int main() {
    Student me("wenboyu",2015015236);   //OK
    Student you;
    //Student me = Student();  //OK
    //Student *me = new Student;  //OK
    //Student me("wenboyu",2015015236);  //OK
    //Student me = Student("wenboyu",2015015236); //OK
    //Student *me = new Student("wenboyu",2015015236);  //OK
    me.display();
    you.display();
    //delete me;
    //me = NULL;
    return 0;
}
