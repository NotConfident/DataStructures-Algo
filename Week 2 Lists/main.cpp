#include <iostream>
#include <string>
#include "Person.h"
#include "List.h"

using namespace std;

int main()
{
    int count = 0;
    int input;
    List list;
    do {

        cout << "---------------- Main Menu ----------------" << endl;
        cout << "[1] List the phone numbers" << endl;
        cout << "[2] Add a new contact" << endl;
        cout << "[3] Remove a contact" << endl;
        cout << "[4] Search for a phone number" << endl;
        cout << "[0] Exit" << endl;
        cout << "-------------------------------------------" << endl;
        cout << "Enter your option: ";
        cin >> input;
        cout << "" << endl;

        if (input == 1)
        {
            list.View();
        }

        if (input == 2)
        {
            string name;
            string number;

            cout << "Enter Name: ";
            cin >> name;

            cin.ignore(numeric_limits<streamsize>::max(), '\n');

            cout << "Enter Number: ";
            cin >> number;

            Person p1(name, number);
            list.Add(count, p1);
            cout << "Contact added!" << endl;
            count++;
        }

        if (input == 3)
        {
            int dContact;
            list.View();
            cout << "Select an contact to delete: ";
            cin >> dContact;
            list.Remove(dContact);
            cout << "Contact removed!" << endl;
        }

        if (input == 4)
        {
            string search;
            cout << "Enter a name: ";
            cin >> search;
            list.Search(search);
            cout << "" << endl;
        }
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    while(input != 0);
}
