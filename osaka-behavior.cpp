#include "osaka-behavior.h"

OsakaBehavior::OsakaBehavior(AnimalSuper &animalSuper) : Behavior(animalSuper)
{

}

QString OsakaBehavior::playSoundWithDialect(){
    return playSound() + "やねん";
}
