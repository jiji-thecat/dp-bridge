#ifndef DOGSUB_H
#define DOGSUB_H

#include <QString>
#include "animal-super.h"

// 実装クラス
class DogSub : public AnimalSuper
{
public:
    DogSub(QString sound, QString image);
    ~DogSub() = default;
    QString &getSound();
    QString &getImage();

private:
    QString sound;
    QString image;
};

#endif // DOGSUB_H
