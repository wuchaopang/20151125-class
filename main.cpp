//
//  main.cpp
//  20151125
//
//  Created by 20141105049 on 15/11/25.
//  Copyright © 2015年 20141105049. All rights reserved.
//

#include <iostream>
using namespace std;
class student
{public:
    student(int n,string nam,int ag,string s,float c):num(n),name(nam),age(ag),sex(s),score(c){}
    void display()
    {
        cout << "num:" << num << endl;
        cout << "name:" << name << endl;
        cout << "age:" << age << endl;
        cout << "sex:" << sex << endl;
        cout << "score:" << score << endl;
    }
private:
    int num;
    string name;
    int age;
    string sex;
    float score;
};
int main()
{
    student stud(1001,"wuchao",20,"m",98.9);
    stud.display();
    return 0;
}


