#ifndef EASYFIND_H
#define EASYFIND_H

#include <algorithm>
#include <iterator>
#include <exception>

template<typename T>
typename T::iterator  easyfind(T &a, int i) {

    if (a.size() == 0)
        throw std::exception();

    typename T::iterator t = std::find(a.begin(), a.end(), i);

    if (t == a.end())
        throw std::exception();
    return (t);

}

#endif