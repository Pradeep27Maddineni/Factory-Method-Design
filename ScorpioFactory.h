// ScorpioFactory.h
#pragma once
#include "Scorpio.h"
#include <memory> // For std::unique_ptr

class ScorpioFactory {
public:
    // Returns a smart pointer to the base class for polymorphic use
    std::unique_ptr<Scorpio> createScorpio(char type);
};