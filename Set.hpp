#pragma once
#include <vector>

template <class T>
class Set{
    private:
        std::vector<T> elements;
    public:
        void Add(T element);
        void Remove(T element);
        bool Contains(T element);
        size_t Size();
};

template <class T>
void Set<T>::Add(T element){
    if (!Contains(element)){
        elements.push_back(element);
    }
}

template <class T>
void Set<T>::Remove(T element){
    if (!Contains(element)){
        elements.push_back(element);
    }
}