// MemoryManagmentUnit.hpp
#pragma once

#include <vector>
#include "PhysPage.hpp"

class MMU {
private:
    std::vector<PhysPage> busyPages;
    std::vector<PhysPage> freePages;
    int totalPageFaults;

public:
    MMU(int numPages);

    // Handles memory access and page faults
    void accessPage(PageTableEntry* pageTable, int pageIndex, bool isWrite);

    // Handles page faults and finds replacement pages using either random or NRU algorithm
    void handlePageFault(PageTableEntry* pageTable, int pageIndex);

    // Returns the total number of page faults
    int getTotalPageFaults() const;

    // Random page replacement algorithm
    PhysPage* findReplacementPageRandom();

    // NRU page replacement algorithm
    PhysPage* findReplacementPageNRU();
};
