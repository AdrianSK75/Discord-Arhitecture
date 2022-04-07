#include <bits/stdc++.h>
using namespace std;

class User {
        private: 
            string name;
            int age;
        public:
            User() {
                name = "";
                age = 0;
            }
            User(string name, int age) {
                    this->name = name;
                    this->age = age;
            }
            void getUser() {
                    cout << name << " " << age << endl;
            }
            void setName(string name) {
                    this->name = name;
            }
            void setAge(int age) {
                    this->age = age;
            }
            string getName() {
                    return this->name;
            }
};