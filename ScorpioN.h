// ScorpioN.h
#pragma once
#include "Scorpio.h"

class ScorpioN : public Scorpio {
public:
    // 'override' keyword ensures we are correctly overriding a base class method
    void makeScorpio() override;
    void driveCar() override;
};