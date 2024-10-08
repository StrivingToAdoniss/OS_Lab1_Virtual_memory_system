// PhysPage.hpp
#pragma once

#include "PageTableEntry.hpp"

class PhysPage{
    private:
        int phyicalPageNum;
        PageTableEntry* pageTableEntry;
    public:
        PhysPage();
};