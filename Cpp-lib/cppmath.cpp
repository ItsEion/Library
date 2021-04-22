#include "cppmath"

template <typename T>
bool integer::divby2(T a) {
    return !(a & 1);
}

template <typename T>
bool integer::iseven(T a) {
    return integer::divby2(a);
}

template <typename T>
bool integer::isodd(T a) {
    return !integer::divby2(a);
}

template <typename T>
bool integer::divby3(T a) {
    if (a == 0) return true;

    else if (a == 1) return false;

    if(a < 0) a = -a;

    unsigned int evenbit = 0, oddbit = 0;

    while(a) {
        if((a & 1) != 0) oddbit++;
        if((a & 2) != 0) evenbit++;

        a >>= 2;
    }

    return divby3((evenbit > oddbit)? evenbit - oddbit: oddbit - evenbit);
}