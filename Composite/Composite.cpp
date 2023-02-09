
// Compile Command: g++ --std=c++11 Composite.cpp -o main

#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

class Component {
private:
    int value;

public:
    Component(int val) {
        value = val;

        cout << "Component Constructor is called!" << endl;
    }

    virtual void add(Component*) {}
};

class Primitive : public Component {
public:
    Primitive(int val) : Component(val) {
        cout << "Primitive Constructor is called!" << endl;
    }
};

class Composite : public Component {
private:
    vector<Component*> c;

public:
    Composite(int val) : Component(val) {
        cout << "Composite Constructor is called!" << endl;
    }

    void add(Component* elem) {
        c.push_back(elem);
    }
};

int main(int argc, char** argv) {

    Primitive p(11);
    Composite c(22);

    return 0;
}