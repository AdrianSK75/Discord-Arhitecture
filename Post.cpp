#include <bits/stdc++.h>
using namespace std;

class Post: public Room {
        private:
            int likes, shares;
            vector<string> tags_file;
        public:
            Post(): Room() {
                likes = 0;
                shares = 0;
                tags_file.push_back("");
            };
            Post(string room, string file ,int like, int share, string tag): Room(room, file) {
                this->likes = like;
                this->shares = share;
                this->tags_file.push_back(tag);
            }
            virtual void getPost() = 0;
            int getLikes() {
                    return this->likes;
            }
            int getShares() {
                    return this->shares;
            }
            void getTags() {
                        cout << "Tags: \n";
                        for (int i = 0; i < tags_file.size(); ++i) {
                                        cout << tags_file[i] <<" ";
                        }
                        cout <<"\n";
            }
            void setLikes(int likes) {
                        this->likes = likes;
            }
            void setShares(int shares) {
                        this->shares = shares;
            }
            void setTags(string tag) {
                        this->tags_file.push_back(tag);
            }
            void increaseLikes() {
                    ++this->likes;
            }
            void increaseShares() {
                    ++this->shares;
            }       
};
// Type of Posts
class Text : public Post {
    string file;
    public:
        Text() {
            file = "";
        };
        Text(string room, string text, int is_like, int is_share, string tag): Post(room, text, is_like, is_share, tag)
        {
            this->file = text;
        }
        string getFile() {
                return file;
        }
        void setFile(string text) {
                this->file = text;
        }
        void getPost()  {
                cout << "Text: "<< getFile() <<"\n";
                cout << "Likes: " << getLikes() <<"\n";
                cout << "Shares: "<< getShares() <<"\n";
                getTags();
        }
};
class Video : public Post {
    string file;
    public:
        Video() {
            file = "";
        }
        Video(string room, string file, int is_like, int is_share, string tag) : Post(room,file, is_like, is_share, tag) {
            this->file = file;
        }
        string getFile() {
                return this->file;
        }
        void setFile(string file) {
                this->file = file;
        }
        void getPost() {
                cout << "VideoFile: "<< getFile() <<"\n";
                cout << "Likes: " << getLikes() <<"\n";
                getTags();
        }
};
class Image: public Post {
    string file;
    public:
        Image() {
            file = "";
        }
        Image(string room, string img, int is_like, int is_share, string tag): Post(room, file, is_like, is_share, tag)
        {
            this->file = img;
        }
        string getFile() {
                return this->file;
        }
        void setFile(string file) {
                this->file = file;
        }
        void getPost() {
                cout << "ImageFile: "<< getFile() <<"\n";
                cout << "Likes: " << getLikes() <<"\n";
                cout << "Shares: "<< getShares() <<"\n";
                getTags();
        }
};