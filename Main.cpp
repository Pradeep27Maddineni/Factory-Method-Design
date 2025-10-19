// Main.cpp
#include <iostream>
#include <vector>     // C++ equivalent of ArrayList
#include <memory>     // For std::unique_ptr and std::make_unique

#include "Scorpio.h"
#include "ScorpioN.h"
#include "ScorpioClassic.h"
#include "ScorpioFactory.h"

int main() {
    // std::vector is the C++ standard library's dynamic array
    // We store smart pointers (unique_ptr) to the base class
    std::vector<std::unique_ptr<Scorpio>> list;

    // Create objects and move their ownership into the vector
    // list.add(car1) -> list.push_back(std::move(car1_ptr))
    // We can create them directly in place:
    list.push_back(std::make_unique<ScorpioN>());
    list.push_back(std::make_unique<ScorpioClassic>());

    // C++ range-based for loop (like Java's for-each)
    // 'const auto&' means "a constant reference to the item"
    for (const auto& car : list) {
        // car is a unique_ptr, so we use -> to call methods
        car->driveCar(); 
        std::cout << "----------\n";
    }

    // --- Uncommented factory code from your Main.java ---
    std::cout << "\n--- Factory Test ---\n";
    ScorpioFactory factory;
    
    std::unique_ptr<Scorpio> car1 = factory.createScorpio('D'); 
    car1->driveCar();
    std::cout << "----------\n";

    std::unique_ptr<Scorpio> car2 = factory.createScorpio('N');
    car2->driveCar();
    std::cout << "----------\n";

    return 0; 
    // All memory is automatically freed here as the unique_ptrs
    // in 'list', 'car1', and 'car2' go out of scope.
}