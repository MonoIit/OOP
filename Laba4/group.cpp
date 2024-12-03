#include "group.h"


void SmirnovGroup::addMember(shared_ptr<SmirnovHuman> ptr) {
    members.push_back(ptr);
}

void SmirnovGroup::saveToFile(const std::string &filename)
{
    std::ofstream file(filename);

    if (file.is_open())
    {
        boost::archive::text_oarchive oa(file);

        oa << members;
    }
}

void SmirnovGroup::loadFromFile(const std::string &filename)
{
    std::ifstream ifs(filename);

    if (ifs.is_open())
    {
        clear();

        boost::archive::text_iarchive ia(ifs);

        ia >> members;
    }
}

void SmirnovGroup::deleteMember(int idx) {
    members.erase(members.cbegin() + idx);
}

void SmirnovGroup::changeMember(int idx, shared_ptr<SmirnovHuman> ptr) {
    members[idx] = ptr;
}

void SmirnovGroup::clear()
{
    members.clear();
}
