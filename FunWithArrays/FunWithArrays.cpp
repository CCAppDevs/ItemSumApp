#include <iostream>

using namespace std;

int const SIZE = 3;
int nums[SIZE];
int pos = 0;

void PrintMenu();
void AddNumber(int num);
int Calculate();

int main()
{
    bool isRunning = true;

    while (isRunning) {
        // prompt
        PrintMenu();

        // capture choice
        int choice = -1;
        cin >> choice;
        int num;

        switch (choice) {
        case 0:
            isRunning = false;
            cout << "Exiting...\n";
            break;
        case 1:
            cout << "What number would you like to add? ";
            cin >> num;
            AddNumber(num);
            break;
        case 2:
            cout << "The total is: " << Calculate() << "\n";
            break;
        default:
            cout << "Invalid choice, please try again.\n";
            break;
        }
    }
}

void PrintMenu() {
    cout << "----- Main Menu -----\n";
    cout << "1. Add Number\n";
    cout << "2. Calculate\n";
    cout << "0. Exit\n";
    cout << "\nWhat would you like to do? ";
}

void AddNumber(int num)
{
    if (pos >= SIZE) {
        cout << "The array is full, please clear it.\n";
        return;
    }

    cout << "Adding the number: " << num << "\n";
    nums[pos] = num;
    pos++;
}

int Calculate()
{
    return 0;
}
