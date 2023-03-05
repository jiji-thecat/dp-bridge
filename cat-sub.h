#ifndef CATSUB_H
#define CATSUB_H

#include <QString>
#include "animal-super.h"

//実装クラス
class CatSub : public AnimalSuper
{
public:
    CatSub(QString sound, QString image);
    ~CatSub() = default;
    QString &getSound();
    QString &getImage();

private:
    QString sound;
    QString image;
};

#endif // CATSUB_H

