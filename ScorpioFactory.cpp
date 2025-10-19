
// ScorpioFactory.cpp
#include "ScorpioFactory.h"
#include "ScorpioN.h"
#include "ScorpioClassic.h"

// The factory method returns a unique_ptr, transferring ownership
// of the newly created object to the caller.
std::unique_ptr<Scorpio> ScorpioFactory::createScorpio(char type) {
    switch (type) {
        case 'N':
            return std::make_unique<ScorpioN>();
        case 'C':
            return std::make_unique<ScorpioClassic>();
        default:
            return std::make_unique<Scorpio>();
    }
}
