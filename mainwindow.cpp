#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    rootLayout = new QVBoxLayout;
    iconFieldLayout = new QVBoxLayout;
    buttonFieldLayout = new QHBoxLayout;

    setButton();

    rootLayout->setAlignment(Qt::AlignTop | Qt::AlignCenter);
    iconFieldLayout->setAlignment(Qt::AlignTop | Qt::AlignCenter);
    rootLayout->addLayout(buttonFieldLayout);
    rootLayout->addLayout(iconFieldLayout);
    setFixedSize(800, 500);

    ui->setupUi(this);
    ui->centralwidget->setLayout(rootLayout);
}

// cat, dogをサブクラスとして、鳴き声を実装する。
// 方言を追加関数で追加する
MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::buttonClicked()
{
   qDebug() << "clicked";
   CatSub catSub("にゃん", ":/assets/cat.png");
   setImageLabel(catSub.getImage());

   Behavior catBehavior(catSub);
   //qDebug() << catBehavior.playSound();
   setSoundLabel(catBehavior.playSound());
}

void MainWindow::setButton()
{
    QPushButton *button = new QPushButton("&Press me", this);
    connect(button, SIGNAL(clicked()), this, SLOT(buttonClicked()));
    buttonFieldLayout->addWidget(button);
}

void MainWindow::setImageLabel(QString imagePath)
{
    QLabel *label = new QLabel();
    QPixmap *image = new QPixmap(imagePath);

    label->setPixmap(*image);
    label->setFixedSize(80, 80);
    label->setScaledContents(true);

    iconFieldLayout->addWidget(label);
}

void MainWindow::setSoundLabel(QString sound)
{
    QLabel *labelSound = new QLabel(sound);
    iconFieldLayout->addWidget(labelSound);
}
