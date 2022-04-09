#ifndef POST_H
#define POST_H
#include "./Group/Room.h"

class Post: public Room {
        private:
            int likes, shares;
            vector<string> tags_file;
        public:
            Post(): Room();
            Post(string room, string file ,int like, int share, string tag): Room(room, file);
            virtual void getPost() = 0;
            virtual string getFile() = 0;
            int getLikes();
            int getShares();
            void getTags();
            void setLikes(int likes);
            void setShares(int shares);
            void setTags(string tag);
            void increaseLikes();
            void increaseShares();   
};

#endif