
#include <iostream>

#include "string.h"

using namespace std;

int main(int argc, char** argv) {

    {
        String s1();
        String s2("hello");
        std::cout << s2.get_c_str() << std::endl;

        String* p = new String("hello2");
        std::cout << p->get_c_str() << std::endl;

        delete p;
    }
    
    return 0;
}