#include "cat-sub.h"

CatSub::CatSub(QString sound, QString image) : sound(sound), image(image)
{
}

QString &CatSub::getSound(){
    return sound;
}

QString &CatSub::getImage(){
    return image;
}
