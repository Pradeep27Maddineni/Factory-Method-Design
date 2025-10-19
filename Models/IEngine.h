
#pragma once

// Abstract base class
class IEngine {
public:
    // Virtual destructor is required for base classes in C++
    // to ensure derived class destructors are called correctly.
    virtual ~IEngine() = default; 
};