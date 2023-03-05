#ifndef BEHAVIOR_H
#define BEHAVIOR_H

#include <QString>
#include "animal-super.h"

// 機能クラス
class Behavior
{
public:
    Behavior(AnimalSuper &animalSuper);
    QString playSound();

private:
    AnimalSuper &animalSuper;
};

#endif // BEHAVIOR_H
