#include <bits/stdc++.h>
#include "Group.h"
using namespace std;

Group::Group() {
        name = "";
        level = 0;
        counter = 5;
        members.push_back("");
        rooms.push_back("");
}
Group::Group(string newRoom) {
        rooms.push_back(newRoom);
}
Group::Group(string name, vector<string> members) {
        this->name = name;
        this->members.assign(members.begin(), members.end());
        if (this->members.size() >= this->counter) {
                ++this->level;
                this->counter+=5;
        }
}
void Group::viewLevel() {
        cout << "Level of group " << this->name << " is: "<< this->level <<"\n";
}
void Group::getGroup() {
        cout << "Group: " << this->name << "\nMembers:\n";
        for (auto member: members) {
                cout << member <<"\n";
        }
        viewLevel();
        cout << "Number of players: " << this->members.size() << "\n";
}
void Group::addRoom(string room) {
        this->rooms.push_back(room);
}
void Group::addMember(string room, string member) {
        members.push_back("");
        cout << "Added " << member << endl;
}

