#ifndef STATE_H
#define STATE_H

//QT Classes
#include <QtWidgets>


class State
{
public:
    State(QMainWindow* window);
    virtual ~State();
    virtual void resize(QResizeEvent* e) = 0;
    //Widgets
    void addLayout(QLayout* layout);
    void addWidget(QWidget* widget);
    QWidget* getWidget(int index);
protected:
    QMainWindow* window;
    //Background
    QMovie* gif;
    QLabel* gif_handler;
    //UI
    QLayout* layout;
    QVector <QWidget*> widgets;
};

#endif // STATE_H
