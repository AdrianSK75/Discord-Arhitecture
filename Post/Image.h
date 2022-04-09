#ifndef IMAGE_H
#define IMAGE_H

class Image: public Post {
    string file;
    public:
        Image();
        Image(string room, string img, int is_like, int is_share, string tag): Post(room, file, is_like, is_share, tag);
        string getFile();
        void setFile(string file);
        void getPost();
};

#endif