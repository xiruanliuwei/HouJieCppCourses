
template<class Alloc>
class vector<bool, Alloc> {
public:
    typedef __bit_reference reference;

protected:
    reference operator[](size_type n) {
        return *(begin() + difference_type(n));
    }

};

struct __bit_reference {
    unsigned int* p;
    unsigned int mask;

public:
    operator bool() const {
        return !(!(*p & mask));
    }
};
