#ifndef VIDEO_H
#define VIDEO_H

class Video : public Post {
    string file;
    public:
        Video();
        Video(string room, string file, int is_like, int is_share, string tag) : Post(room,file, is_like, is_share, tag);
        string getFile();
        void setFile(string file);
        void getPost();
};

#endif
