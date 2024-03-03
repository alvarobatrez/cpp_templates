#ifndef _ITEM_HPP_
#define _ITEM_HPP_

template <typename T1, typename T2>
class Item
{
    private:

    T1 var1;
    T2 var2;

    public:

    Item(T1 var1, T2 var2) : var1{var1}, var2{var2} {}

    T1 get_var1() { return var1; }
    T2 get_var2() { return var2; }
};

#endif