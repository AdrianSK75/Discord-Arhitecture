#include <bits/stdc++.h>
#include "Video.h"
#include "Post.h"
using namespace std;

Video::Video() {
            file = "";
}
Video::Video(string room, string file, int is_like, int is_share, string tag) : Post(room,file, is_like, is_share, tag) {
            this->file = file;
}
string Video::getFile() {
                return this->file;
}
void Video::setFile(string file) {
                this->file = file;
}
void Video::getPost() {
                cout << "VideoFile: "<< getFile() <<"\n";
                cout << "Likes: " << getLikes() <<"\n";
                Post::getTags();
}