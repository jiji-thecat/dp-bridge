#include "behavior.h"

Behavior::Behavior(AnimalSuper &animalSuper) : animalSuper(animalSuper)
{
}

QString Behavior::playSound(){
    return animalSuper.getSound();
}
