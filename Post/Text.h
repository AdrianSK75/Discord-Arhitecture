#ifndef TEXT_H
#define TEXT_H

class Text : public Post {
    string file;
    public:
        Text();
        Text(string room, string text, int is_like, int is_share, string tag): Post(room, text, is_like, is_share, tag);
        string getFile();
        void setFile(string text);
        void getPost();
};
#endif