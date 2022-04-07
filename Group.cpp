#include <bits/stdc++.h>

using namespace std;

class Group {   
        private:
            string name;
            int level;
            int counter;
            vector<string> members;
            vector<string> rooms;
        public:
            Group() {
                name = "";
                level = 0;
                counter = 5;
                members.push_back("");
                rooms.push_back("");
            }
            Group(string newRoom) {
                rooms.push_back(newRoom);
            }
            Group(string name, vector<string> members) {
                    this->name = name;
                    this->members.assign(members.begin(), members.end());
                    if (this->members.size() >this->counter) {
                            ++level;
                            counter+=5;
                    }
            }
            void viewLevel() {
                    cout << "Level of group " << this->name << "is: "<< this->level <<endl;
            }
            void getGroup() {
                    cout << "Group: " << this->name << "\nMembers:\n";
                    for (auto member: members) {
                            cout << member <<"\n";
                    }
                    viewLevel();
                    cout << "Number of players: " << this->members.size() << "\n";
            }
            void addRoom(string room) {
                    rooms.push_back(room);
            }
            void addMember(string member) {
                    this->members.push_back(member);
                    cout << "Added " << member << endl;
            }
            void removeMember(string member) {
                    int index = 0;
                    for (int i = 0; i < this->members.size(); ++i) {
                            if (this->members[i] == member) {
                                    index = i;
                                    break;
                            }
                    }
                    members.erase(members.begin() + index);
                    cout << "Removed " << member << endl;
            }           
};
