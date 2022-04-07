#include <bits/stdc++.h>
#include "Group.cpp"
#include "Post.cpp"
#include "User.cpp"
using namespace std;

int main() {
    vector<User *> users ;
    users.push_back( new User("Ardelean", 24));
    users.push_back (new User("Adrian", 20));
    users.push_back (new User("Leonard", 19));
    users.push_back (new User("Ionas", 25));
    users.push_back (new User("Johannes", 40));
    users.push_back (new User("Alexandru", 30));
    
    vector<Group *> groups;
    groups.push_back (new Group("CryptoInsiderz", {
    users.at(0)->getName(), 
    users.at(1)->getName(), 
    users.at(2)->getName()}));
    groups.push_back (new Group("MetaVerse",{
    users.at(3)->getName(), 
    users.at(4)->getName(), 
    users.at(5)->getName()}));
    
    
   // Post *postText = new Text("Elrond", "Stailer isi creeaza noua colectie de NFTs", 2034, 45, "nfts_collection");
   // Post *postVideo = new Video("Elrond", "nfts_presentation.vd", 3000, 400, "nfts_innovation");

    for (Group * group : groups) {
            group->getGroup();
            cout <<"\n";
            delete group;
    }
    cout << "Active Users: \n";
    for (User * user: users) {
            user->getUser();
            delete user;
    }
    
}