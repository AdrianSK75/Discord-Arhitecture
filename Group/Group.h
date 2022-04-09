#ifndef GROUP_H
#define GROUP_H

class Group {   
        private:
            string name;
            int level;
            int counter;
            vector<string> members;
            vector<string> rooms;
        public:
            Group();
            Group(string newRoom);
            Group(string name, vector<string> members);
            void viewLevel();
            void getGroup();
            void addRoom(string room);
            void addMember(string room, string member);
};
#endif