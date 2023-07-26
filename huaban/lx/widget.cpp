#include "widget.h"
#include "ui_widget.h"
#include <QColorDialog>
#include <QDebug>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    this->resize(2560,1440);

    color = new QPushButton(this);
    color->setGeometry(60,0,20,20);

    style = new QComboBox(this);
    style->setGeometry(175,0,70,20);
    style->addItem("实线");
    style->addItem("虚线");
    style->addItem("点划线");


    width = new QComboBox(this);
    width->setGeometry(345,0,40,20);
    for(int i=1;i<=40;i++)
         width->addItem(QString("%1").arg(i));

    grap = new QComboBox(this);
    grap->setGeometry(480,0,70,20);
    grap->addItem("笔");
    grap->addItem("直线");
    grap->addItem("矩形");
    grap->addItem("椭圆");
    grap->addItem("橡皮擦");

    pix =  new QPixmap(2560,1440);
    pix->fill(Qt::white);           //画布的背景色
    pix2 =  new QPixmap(2560,1440);
    pix2->fill(Qt::white);           //画布的背景色
    pen = new QPen();
    pen->setCapStyle(Qt::PenCapStyle::RoundCap);    //设置笔的属性圆角
    pen->setWidth(1);       //设置笔的粗细
    pen2 = new QPen();
    pen2->setWidth(8);       //设置笔的粗细
    pen2->setColor(Qt::white);
    pen2->setBrush(Qt::white);
    //QColorDialog::getColor();   //获取一种颜色并且返回
    pen->setStyle(Qt::PenStyle::SolidLine);

    tar[0]=QPoint(1,0);
    tar[1]=QPoint(0,2);
    tar[2]=QPoint(2,2);

    connect(color,SIGNAL(clicked()),this,SLOT(on_pushbutton()));
    connect(style,SIGNAL(currentIndexChanged(QString)),this,SLOT(on_stylechange(QString)));
    connect(width,SIGNAL(currentIndexChanged(QString)),this,SLOT(on_widthchange(QString)));
}

Widget::~Widget()
{
    delete ui;
}

//绘图事件
void Widget::paintEvent(QPaintEvent *event)
{
    event->ignore();
    QPainter painter;
    painter.begin(this);
    painter.drawPixmap(0,20,*pix);   //将画布绘制
    //painter.drawImage(QRect(x,y,200,200),QImage("efls.png"));
    painter.end();
}

void Widget::mousePressEvent(QMouseEvent *event)
{
    if(event->y()<=20)
        return;
    point = event->pos();
    point.setY(point.y()-20);
    point2 = point;
    if(event->y()<=20)
                return;
        point = event->pos();
        if(event->button() == Qt::LeftButton)
            {
                ui->left->setText("左键按下");
                flag = 1;

            }
            if(event->button() == Qt::RightButton)
            {
                flag = 0;
                 ui->right->setText("右键按下");
            }
}

void Widget::mouseMoveEvent(QMouseEvent *event)
{
    if(event->y()<=20)
        return;
    QPainter painter;
    if(grap->currentText()!="笔" && grap->currentText()!="橡皮擦")
        *pix = pix2->copy();
    painter.begin(pix);
    //painter.setBrush(Qt::blue);

    painter.setPen(*pen);
    if(grap->currentText()=="橡皮擦")
    {
        painter.setPen(*pen2);
        painter.drawLine(point2.x(),point2.y(),event->x(),event->y()-20);
    }
    if(grap->currentText()=="矩形")
        painter.drawRect(point.x(),point.y(),event->x()-point.x(),event->y()-20-point.y());
    if(grap->currentText()=="直线")
        painter.drawLine(point.x(),point.y(),event->x(),event->y()-20);
    if(grap->currentText()=="椭圆")
        painter.drawEllipse(point.x(),point.y(),event->x()-point.x(),event->y()-20-point.y());
    if(grap->currentText()=="笔")
        painter.drawLine(point2.x(),point2.y(),event->x(),event->y()-20);
    point2=event->pos();
    point2.setY(point2.y()-20);
    painter.end();
    update();       //更新,触发绘图事件
    ui->mouse->setGeometry(event->x(),event->y(),2,2);
            if(flag==1)
                ui->left->setText(QString("(%1,%2)").arg(event->x()).arg(event->y()));

            if(flag==0)
                ui->right->setText(QString("(%1,%2)").arg(event->x()).arg(event->y()));
}

void Widget::mouseReleaseEvent(QMouseEvent *event)
{
    if(event->button() == Qt::LeftButton)
        {
            ui->left->setText("左键松开");

        }
        if(event->button() == Qt::RightButton)
        {
             ui->right->setText("右键松开");
        }
    *pix2 = pix->copy();    //将画布1的内容给到画布2
}

void Widget::on_pushbutton()
{
    pen->setBrush(QBrush(QColorDialog::getColor()));   //使用颜色编辑框挑选颜色
}

void Widget::on_stylechange(QString arg)
{
    if(arg=="实线")
        pen->setStyle(Qt::PenStyle::SolidLine);
    if(arg=="虚线")
        pen->setStyle(Qt::PenStyle::DotLine);
    if(arg=="点划线")
        pen->setStyle(Qt::PenStyle::DashDotLine);

}

void Widget::on_widthchange(QString arg)
{
    pen->setWidth(arg.toInt());
}

/*
void Widget::keyPressEvent(QKeyEvent *event)
{

    if(event->key()==Qt::Key_Down)
    {
        y+=50;
    }
    if(event->key()==Qt::Key_Up)
    {
        y-=50;
    }
    if(event->key()==Qt::Key_Left)
    {
        x-=50;
    }
    if(event->key()==Qt::Key_Right)
    {
        x+=50;
    }
    update();       //触发绘画事件

}
*/

void Widget::on_pushButton_clicked()
{
    QMessageBox::StandardButton msg;    //弹窗
    msg = QMessageBox::question(this,"提醒","真的要删除吗?",QMessageBox::No | QMessageBox::Yes);
    if(msg == QMessageBox::No){
        qDebug() << "已取消";
        return;
    }
    pix->fill(Qt::white);         //画布填充白色
    update();
    qDebug() << "已删除";
}
