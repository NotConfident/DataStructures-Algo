#include <iostream>
#include "List.h"

int main()
{
    List list;

    list.add("Annie");
    list.add("Jackie");
    list.add("Among");
    list.add("Us");
    list.add("WTF");
    list.add("S&P");
    list.add("MacD");

    list.remove(1);

    list.print();



}
