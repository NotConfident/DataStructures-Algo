#include <iostream>
#include <string>
#include <iostream>
#include "Dictionary.h"

int main()
{
    Dictionary dict;
    dict.add("Pamela", "64606722");
//    dict.add("PohSeng", "64608687");
    dict.add("Weslye", "64607237");
dict.add("Wesley", "64607237");

//    dict.add("WeeChong", "64606854");
//    dict.add("Eugene", "64608256");
//    dict.add("Eugene", "64608256");
    dict.print();

    cout << endl;

    dict.remove("Wesley");

    dict.print();

//    dict.get("Pamela");
//    dict.getLength();
}
