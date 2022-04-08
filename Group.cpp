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
                    cout << members.size() <<"\n";
                    if (this->members.size() >= this->counter) {
                            ++this->level;
                            this->counter+=5;
                    }
            }
            void viewLevel() {
                    cout << "Level of group " << this->name << " is: "<< this->level <<"\n";
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
                    this->rooms.push_back(room);
            }
            void addMember(string room, string member) {
                    members.push_back("");
                    cout << "Added " << member << endl;
            }
};

class Room : public Group {
        string name;
        map<string, string> posts;
        public:
            Room() {
                name = "";
                posts.emplace("", "");
            }
            Room(string name) {
                    this->name = name;
            }
            Room(string name, string file) : Group(name) {
                this->name = name;
                posts.emplace(name, file);
            }
            void addPost(string name, string post) { 
                posts.emplace(name, post);
            }
            void setName(string name) { 
                this->name = name;
            }
            string getName() { 
                return this->name; 
            }

};
