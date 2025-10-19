// ScorpioN.cpp
#include "ScorpioN.h"
#include <iostream>
#include "Models/ScorpioNEngine.h"  // Corrected path
#include "Models/ScorpioNBodyShell.h" // Corrected path
// Note: The Java file also imported ScorpioClassic models, 
// but didn't use them. C++ doesn't need the headers if they aren't used.

void ScorpioN::makeScorpio() {
    std::cout << "ScorpioN class me hu\n";
    this->engine = std::make_unique<ScorpioNEngine>();
    this->bodyShell = std::make_unique<ScorpioNBodyShell>();
}

void ScorpioN::driveCar() {
    makeScorpio();
    std::cout << "I am driving a ScorpioN\n";
}