#include <bits/stdc++.h>
#include "Image.h"
#include "Post.h"
using namespace std;

Image::Image() {
            file = "";
}
Image::Image(string room, string img, int is_like, int is_share, string tag): Post(room, file, is_like, is_share, tag)
{
            file = img;
}
string Image::getFile() {
                return file;
}
void Image::setFile(string file) {
                this->file = file;
}
void Image::getPost() {
                cout << "ImageFile: "<< getFile() <<"\n";
                cout << "Likes: " << getLikes() <<"\n";
                cout << "Shares: "<< getShares() <<"\n";
                Post::getTags();
}


