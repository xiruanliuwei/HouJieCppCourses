
#ifndef __MYSTRING__
#define __MYSTRING__

#include <cstring>

class String {
public:
    String();
    String(const char* cstr);
    String(const String& str);  // Copy Constructor
    String& operator=(const String& str);  // Operator Overloading, Copy Assignment
    ~String();  // Destructor
    char* get_c_str() const { return m_data; }

private:
    char* m_data;
};

inline String::String() {
    std::cout << "String constructor 01" << std::endl;
}

inline String::String(const char* cstr) {
    std::cout << "String contructor 02" << std::endl;

    if(cstr) {
        m_data = new char[strlen(cstr) + 1];
        strcpy(m_data, cstr);
    } else {
        m_data = new char[1];
        *m_data = '\0';
    }
}

inline String::String(const String& str) {
    std::cout << "String constructor 03" << std::endl;
}

inline String::~String() {
    delete[] m_data;
}

#endif