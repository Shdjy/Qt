#include "widget.h"
#include <QPushButton>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    //创建按钮
    QPushButton *button = new QPushButton("关闭按钮", this);
    this->resize(1000,1000);

    //信号与槽函数（按钮关闭窗口）
    connect(button,&QPushButton::clicked,this,&Widget::close);//函数四个参数：信号发出者，信号，信号接受者，接受信号执行任务。

    QPushButton *button2 = new QPushButton("eat", this);
    button2->move(100,100);
    //自定义信号与槽函数
    this->teacher = new Teacher();
    this->student = new Student();
//    //connect(button2,&QPushButton::clicked,this,&Widget::classover);
//    //connect(teacher,&Teacher::hungury,student,&Student::treat);
//    //触发信号
//    connect(button2,&QPushButton::clicked,teacher,&Teacher::hungury);
//    //classover();

    //重载
    void (Teacher::*teachersifnal)(QString) = &Teacher::hungury;
    void (Student::*studentslots)(QString) = &Student::treat;
    connect(teacher,teachersifnal,student,studentslots);
    classover();
}
void Widget::classover()
{
    emit teacher->hungury("红烧肉");
}

Widget::~Widget()
{
}

