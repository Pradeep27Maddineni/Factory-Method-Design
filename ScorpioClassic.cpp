// ScorpioClassic.cpp
#include "ScorpioClassic.h"
#include <iostream>
#include "Models/ScorpioClassicEngine.h"
#include "Models/ScorpioClassicBodyShell.h"

void ScorpioClassic::makeScorpio() {
    std::cout << "ScorpioClassic class me hu\n";
    this->engine = std::make_unique<ScorpioClassicEngine>();
    this->bodyShell = std::make_unique<ScorpioClassicBodyShell>();
}

void ScorpioClassic::driveCar() {
    makeScorpio();
    std::cout << "I am driving a ScorpioClassic\n";
}