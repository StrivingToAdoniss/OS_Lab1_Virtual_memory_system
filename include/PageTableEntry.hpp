// PageTableEntry.hpp
#pragma once

class PageTableEntry {
private:
    bool presence_BIT;
    bool referenced_BIT;
    bool modified_BIT;
    int phyicalPageNum;

public:
    PageTableEntry();

    bool getPresence() const;
    bool getReferenced() const;
    bool getModified() const;
    int getPhyicalPageNum() const;

    void setPresence(bool presence_BIT);
    void setReferenced(bool referenced_BIT);
    void setModified(bool modified_BIT);
    void setPhyicalPageNum(int phyicalPageNum);
};