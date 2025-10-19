// Scorpio.h
#pragma once
#include <memory> // For std::unique_ptr
#include "Models/IEngine.h"
#include "Models/IBodyShell.h"

class Scorpio {
protected:
    // std::unique_ptr manages the lifetime of the objects
    // similar to how Java's GC handles 'engine' and 'bodyShell'.
    std::unique_ptr<IEngine> engine;
    std::unique_ptr<IBodyShell> bodyShell;

public:
    // Virtual destructor is crucial for base classes
    virtual ~Scorpio() = default; 

    // Virtual functions allow derived classes to override behavior (polymorphism)
    virtual void makeScorpio();
    virtual void driveCar();
};
