// Kernel.hpp
#pragma once

#include <vector>

class Kernel {
private:
    std::vector<Process> processes;
    MMU mmu;
    int timeQuantum;  // Time slice for each process

public:
    Kernel(int numPages);

    // Creates and adds a new process
    void createProcess(int tableSize);

    // Schedules processes in a round-robin fashion
    void schedule();

    // Simulates the memory access behavior
    void simulateMemoryAccess();

    // Print statistics (e.g., page faults)
    void printPageFaults() const;
};
