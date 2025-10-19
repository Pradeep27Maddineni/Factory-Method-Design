// Scorpio.cpp
#include "Scorpio.h"
#include <iostream>
#include "Models/ScorpioEngine.h"
#include "Models/ScorpioBodyShell.h"

void Scorpio::makeScorpio() {
    std::cout << "Scorpio class me hu\n";
    // std::make_unique creates the object and wraps it in a unique_ptr
    this->engine = std::make_unique<ScorpioEngine>();
    this->bodyShell = std::make_unique<ScorpioBodyShell>();
}

void Scorpio::driveCar() {
    makeScorpio(); // Call the virtual makeScorpio()
    std::cout << "I am inside Scorpio Parent Class\n";
}