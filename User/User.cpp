#include <bits/stdc++.h>
#include "User.h"
using namespace std;

User::User() {
        name = "";
        age = 0;
}
User(string name, int age) {
        this->name = name;
        this->age = age;
}
void User::getUser() {
        cout << name << " " << age << endl;
}
void User::setName(string name) {
        this->name = name;
}
void User::setAge(int age) {
        this->age = age;
}
string User::getName() {
        return this->name;
}