#ifndef OSAKABEHAVIOR_H
#define OSAKABEHAVIOR_H

#include "behavior.h"

// 機能クラス
class OsakaBehavior : public Behavior
{
public:
    OsakaBehavior(AnimalSuper &animalSuper);
    ~OsakaBehavior() = default;
    QString playSoundWithDialect();

};

#endif // OSAKABEHAVIOR_H
