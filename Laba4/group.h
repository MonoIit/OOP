#pragma once
#include "pch.h"
#include "human.h"

class SmirnovGroup
{
private:
    std::vector<std::shared_ptr<SmirnovHuman>> members;

public:
    void addMember(shared_ptr<SmirnovHuman> ptr);

    void deleteMember(int idx);

    void changeMember(int idx, shared_ptr<SmirnovHuman> ptr);

    std::vector<std::shared_ptr<SmirnovHuman>>& getMembers() { return members; }

    void saveToFile(const std::string &filename);

    void loadFromFile(const std::string &filename);

    void clear();
};

