#include "include/list.h"

void List::print_menu(){
    int choice;

    cout << "**************\n";
    cout << " 1 - Print List\n";
    cout << " 2 - Add to List\n";
    cout << " 3 - Delete from List\n";
    cout << " 4 - Quit\n";
    cout << " Enter your choice and press enter/return.\n";

    cin >> choice;
    if (choice == 4)
        exit(0);
    else if (choice == 3)
        delete_item();
    else if (choice == 2)
        add_item();
    else if (choice == 1)
        print_list();
    else
        cout << "Invalid selection. Quitting\n";   
}

void List::add_item(){
    cout << "\n\n\n";
    cout << "*** Add Item ***\n";
    cout << "Type in an Item and press enter: \n";

    string item;
    cin >> item;

    list.push_back(item);

    cout << "Successfully added item to list \n\n\n";
    cin.clear();

    print_menu();
}

void List::delete_item(){
    cout << "*** Delete Item ***\n";

    if(list.size()){
        cout << "Select an item index to delete\n";

        for (unsigned int i = 0; i < list.size(); i++)
        {
            cout << i << ": " << list[i] << "\n";
        }
    }
    else {
        cout << "No items in the list to delete.\n";
    }

    print_menu();
}

void List::print_list(){
    cout << "\n\n\n*** Printing List ***\n";
    for (unsigned list_index = 0; list_index < list.size(); list_index++)
    {
        cout << " * " << list[list_index] << "\n";
    }
    
    cout << "---------\nSelect:\nM - Menu \n";
    char choice;
    cin >> choice;

    if (choice == 'M' || choice == 'm')
    {
        cout << "\n\n\n";
        print_menu();
    }
    else {
        cout << "Invalid Selection. Quitting...\n";
    }
    

}