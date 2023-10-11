#include <iostream>
#include <vector>

using namespace std;

void PrintMenu();
void CaptureItem();
float Calculate();
void PrintList();

struct Item {
    float price;
    string name;
    int qty;
};

vector<Item> Items;

int main()
{
    bool isRunning = true;

    while (isRunning) {
        // prompt
        PrintMenu();

        // capture choice
        int choice = -1;
        cin >> choice;

        switch (choice) {
        case 0:
            isRunning = false;
            cout << "Exiting...\n";
            break;
        case 1:
            CaptureItem();
            break;
        case 2:
            cout << "The total is: " << Calculate() << "\n";
            break;
        case 3:
            cout << "The list of numbers:\n";
            PrintList();
            break;
        case 9:
            cout << "Clearing the array...\n";
            Items.clear();
            break;
        default:
            cout << "Invalid choice, please try again.\n";
            break;
        }
    }
}

void PrintMenu() {
    cout << "----- Main Menu -----\n";
    cout << "1. Add Item\n";
    cout << "2. Calculate\n";
    cout << "3. Print List\n";
    cout << "9. Clear the Array\n";
    cout << "0. Exit\n";
    cout << "\nWhat would you like to do? ";
}

void CaptureItem()
{
    string name;
    float price;
    int qty;

    cout << "What item would you like to add? ";
    cin >> name;
    cout << "What is the price? ";
    cin >> price;
    cout << "How many would you like? ";
    cin >> qty;

    Item item = { price, name, qty };

    Items.push_back(item);
}

float Calculate()
{
    float total = 0;

    for (Item item : Items) {
        total += item.price * item.qty;
    }

    return total;
}

void PrintList()
{
    for (int i = 0; i < Items.size(); i++) {
        cout << i + 1;
        cout << ":\t" << Items[i].qty << "x " << Items[i].name;
        cout << "\t" << Items[i].qty * Items[i].price;
        cout << "\n";
    }

}
