#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QPushButton>
#include <QLabel>

#include "behavior.h"
#include "cat-sub.h"
#include "animal-super.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    QVBoxLayout *rootLayout;
    QVBoxLayout *iconFieldLayout;
    QHBoxLayout *buttonFieldLayout;
    void setButton();
    void setImageLabel(QString imagePath);
    void setSoundLabel(QString sound);

private:
    Ui::MainWindow *ui;

private slots:
    void buttonClicked();
};
#endif // MAINWINDOW_H
