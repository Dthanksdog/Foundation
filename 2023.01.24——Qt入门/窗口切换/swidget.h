#ifndef SWIDGET_H
#define SWIDGET_H
#include<QPushButton>
#include <QWidget>

class swidget : public QWidget
{
    Q_OBJECT
public:
    explicit swidget(QWidget *parent = nullptr);

signals:
    void back();
};

#endif // SWIDGET_H
