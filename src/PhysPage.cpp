// PhysPage.cpp

#include "PhysPage.hpp"

PhysPage::PhysPage(){
    // Basic initialization
}

int PhysPage::getPhyicalPageNum() const{
    return this->phyicalPageNum;
}

void PhysPage::setPhyicalPageNum(int phyicalPageNum){
    this->phyicalPageNum = phyicalPageNum;
}

PageTableEntry* PhysPage::getPageTableEntry() const{
    return this->pageTableEntry;
}

void PhysPage::setPageTableEntry(PageTableEntry* pageTableEntry){
    this->pageTableEntry = pageTableEntry;
}
