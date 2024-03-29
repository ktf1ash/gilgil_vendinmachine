#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();
    void changeMoney(int n);
    int money{0};



private slots:
    void on_pb10_clicked();

    void on_pb50_clicked();

    void on_pb100_clicked();

    void on_pb500_clicked();

    void on_coffee_clicked();

    void on_tea_clicked();

    void on_icetea_clicked();

    void check1(int n);
    void check2(int n);
    void check3(int n);
    void left(int n);

private:
    Ui::Widget *ui;
};

#endif // WIDGET_H
