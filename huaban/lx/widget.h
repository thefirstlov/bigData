#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QPushButton>
#include <QComboBox>
#include <QPixmap>
#include <QPen>
#include <QMouseEvent>
#include <QPaintEvent>
#include <QPainter>
#include <QMessageBox>

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
    void paintEvent(QPaintEvent *event);
    void mousePressEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
    void mouseReleaseEvent(QMouseEvent *event);
    void on_btn_delete_clicked();  //删除
   // void keyPressEvent(QKeyEvent *event);

public slots:  //槽函数
    void on_pushbutton();
    void on_stylechange(QString arg);
    void on_widthchange(QString arg);
private slots:
    void on_pushButton_clicked();

private:
    Ui::Widget *ui;
    int x=100,y=100;
    QPushButton *color;
    QComboBox *style;
    QComboBox *width;
    QComboBox *grap;
    QPixmap *pix;
    QPen *pen;          //画笔
    QPen *pen2;          //橡皮擦笔
    QPoint point;
    QPoint point2;
    QPixmap *pix2;      //画布2,用了记录鼠标点击之前的内容
    QPointF tar[3];
    bool flag=1;
};
#endif // WIDGET_H



