#include <iostream>
#include <string>
#include "List.h"

int main()
{
    List list;

    list.add("Annie");
    list.add("Jacky");
    list.add("Wendy");

    list.add(1,"Brenda");
    list.remove(3);

    list.print();

    list.getLength();

}
