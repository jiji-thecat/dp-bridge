#ifndef ANIMALSUPER_H
#define ANIMALSUPER_H

#include <QString>

// 実装クラス
class AnimalSuper
{
public:
    virtual QString &getSound() = 0;
    virtual QString &getImage() = 0;
    virtual ~AnimalSuper() = default;
};

#endif // ANIMALSUPER_H
