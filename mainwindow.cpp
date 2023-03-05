#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "behavior.h"
#include "osaka-behavior.h"
#include "cat-sub.h"
#include "animal-super.h"
#include "dog-sub.h"

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
   Behavior catBehavior(catSub);
   OsakaBehavior catOsakaBehavior(catSub);

   setImageLabel(catSub.getImage());
   setSoundLabel("Behavior: " + catBehavior.playSound());
   setSoundLabel("OsakaBehavior: " + catOsakaBehavior.playSoundWithDialect());

   DogSub dogSub("わん", ":/assets/dog.png");
   Behavior dogBehavior(dogSub);
   OsakaBehavior dogOsakaBehavior(dogSub);

   setImageLabel(dogSub.getImage());
   setSoundLabel("Behavior: " + dogBehavior.playSound());
   setSoundLabel("Osaka Behavior: " + dogOsakaBehavior.playSoundWithDialect());
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
