#ifndef ROOM_H
#define ROOM_H

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
            void showPosts(string name) {
                    posts.find(name);
                    for (auto posts: post) {
                            cout << post.second <<"\n";
                    }
            }
            void setName(string name) { 
                this->name = name;
            }
            string getName() { 
                return this->name; 
            }
};
#endif