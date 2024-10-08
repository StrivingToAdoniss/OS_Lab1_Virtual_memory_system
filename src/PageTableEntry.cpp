// PageTableEntry.cpp

#include "PageTableEntry.hpp"

PageTableEntry::PageTableEntry(){
    // Basic initialization
}

bool PageTableEntry::getPresence() const{
    return presence_BIT;
}

bool PageTableEntry::getReferenced() const{
    return referenced_BIT;
}

bool PageTableEntry::getModified() const{
    return modified_BIT;
}

int PageTableEntry::getPhyicalPageNum() const{
    return phyicalPageNum;
}

void PageTableEntry::setPresence(bool presence_BIT){
    this->presence_BIT = presence_BIT;
}

void PageTableEntry::setReferenced(bool referenced_BIT){
    this->referenced_BIT = referenced_BIT;
}

void PageTableEntry::setModified(bool modified_BIT){
    this->modified_BIT = modified_BIT;
}

void PageTableEntry::setPhyicalPageNum(int phyicalPageNum){
    this->phyicalPageNum = phyicalPageNum;
}
