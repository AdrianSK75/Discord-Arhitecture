#include <bits/stdc++.h>
#include "Post.h"
//#include "./Group/Room.h"
using namespace std;

Post::Post(): Room() {
                likes = 0;
                shares = 0;
                tags_file.push_back("");
}
Post::Post(string room, string file ,int like, int share, string tag): Room(room, file) {
                this->likes = like;
                this->shares = share;
                this->tags_file.push_back(tag);
}
virtual void Post::getPost() = 0;
virtual string Post::getFile() = 0;
int Post::getLikes() {
        return this->likes;
}
int Post::getShares() {
        return this->shares;
}
void Post::getTags() {
        cout << "Tags: \n";
        for (int i = 0; i < tags_file.size(); ++i) {
                cout << tags_file[i] <<" ";
        }
        cout <<"\n";
}
void Post::setLikes(int likes) {
        this->likes = likes;
}
void Post::setShares(int shares) {
        this->shares = shares;
}
void Post::setTags(string tag) {
        this->tags_file.push_back(tag);
}
void Post::increaseLikes() {
        ++this->likes;
}
void Post::increaseShares() {
        ++this->shares;
}    
