#include <bits/stdc++.h>
#include "Room.h"
using namepsace std;

Room::Room() {
        name = "";
        posts.emplace("", "");
}
Room::Room(string name) {
        this->name = name;
}
Room::Room(string name, string file) : Group(name) {
        this->name = name;
        posts.emplace(name, file);
}
void Room::addPost(string name, string post) { 
        posts.emplace(name, post);
}
void Room::showPosts(string name) {
        posts.find(name);
        for (auto posts: post) {
                cout << post.second <<"\n";
        }
}
void Room::setName(string name) { 
        this->name = name;
}
string Room::getName() { 
        return this->name; 
}