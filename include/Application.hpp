// Application.cpp
#pragma once

#include "Kernel.hpp"

class Application {
private:
    Kernel kernel;
    int simulationTime;  // Total time for simulation

public:
    Application(int numProcesses, int numPages, int simTime);

    // Initializes the system with processes and kernel
    void initialize(int numProcesses);

    // Runs the main simulation loop
    void run();
    // Collects statistics and prints results
    void collectStatistics();
};
