#include <bits/stdc++.h>
#include "Text.h"
#include "Post.h"
using namespace std;

Text::Text() {
            file = "";
}
Text::Text(string room, string text, int is_like, int is_share, string tag): Post(room, text, is_like, is_share, tag)
{
            this->file = text;
}
string Text::getFile() {
            return file;
}
void Text::setFile(string text) {
                this->file = text;
}
void Text::getPost()  {
                cout << "Text: "<< getFile() <<"\n";
                cout << "Likes: " << getLikes() <<"\n";
                cout << "Shares: "<< getShares() <<"\n";
                Post::getTags();
}
