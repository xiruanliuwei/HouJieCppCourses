
#include <iostream>

using namespace std;

class CDocument {
public:
    void OnFileOpen() {
        cout << "dialog..." << endl;
        cout << "check file status..." << endl;
        cout << "open file..." << endl;
        Serialize();
        Serialize2();
        cout << "close file..." << endl;
        cout << "update all views..." << endl;
    }

    virtual void Serialize() {}
    virtual void Serialize2() = 0;
};

// error: ‘virtual’ outside class declaration
// virtual void CDocument::Serialize() {}

// No virtual, it is good
// void CDocument::Serialize() {}

class CMyDoc : public CDocument {
public:
    virtual void Serialize() {
        cout << "CMyDoc::Serialize() is called" << endl;
    }

    void Serialize2() override {
        cout << "CMyDoc::Serialize2() is called" << endl;
    }
};

int main(int argc, char** argv) {

    CMyDoc myDoc;
    myDoc.OnFileOpen();

    return 0;
}