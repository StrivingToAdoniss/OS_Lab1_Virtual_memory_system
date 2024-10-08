// Process.hpp
#pragma once

#include <vector>
#include "PageTableEntry.hpp"
#include "MemoryManagmentUnit.hpp"

class Process {
    std::vector<PageTableEntry> pageTable;
    std::vector<int> workingSet;

public:
    Process(int tableSize);
    void accessPage(MMU& mmu, int pageIdx, bool isWrite);
    void generateNewWorkingSet();
};