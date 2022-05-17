#ifndef TEMPLATEFUN_SWAPPER_H
#define TEMPLATEFUN_SWAPPER_H

template <class T>
class swapper
{
    public:
        swapper(T first, T second);
        void swap();
        T getFirst() const;
        T getSecond() const;

    private:
         T first;
         T second;
};
template <class T>
swapper<T>::swapper(T first, T second)
{
    this-> first = first;
    this->second=second;
}
template <class T>
void swapper<T>::swap()
{
    T temp = first;
    first = second;
    second = temp;
}
template <class T>
T swapper<T>::getFirst() const
{
    return first;
}
template <class T>
T swapper<T>::getSecond() const
{
    return second;
}
#endif //TEMPLATEFUN_SWAPPER_H
