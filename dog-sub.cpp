#include "dog-sub.h"

DogSub::DogSub(QString sound, QString image) : sound(sound), image(image)
{
}

QString &DogSub::getSound(){
    return sound;
}

QString &DogSub::getImage(){
    return image;
}
