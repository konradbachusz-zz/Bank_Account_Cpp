#include <iostream>
using namespace std;

int main() {
    std::cout << "Welcome to your bank" << std::endl;
    

    string name;
    cout << "What's your name? ";
    cin >> name;
    cout << "Welcome " << name << endl;

    cout << "What would you like to do today?\n 1 Open an Account \n 2 Deposit Funds \n 3 Make a Payment \n 4 Withdraw Funds \n 5 Close an Account";
    
    //User input
    int x; 
    cout << "\nType your answer: "; // Type a number and press enter
    cin >> x;   

    switch(x) {
        case 1:
            cout << "You selected: Open an Account";
        break;
        case 2:
            cout << "You selected: Deposit Funds";
        break;

        case 3:
            cout << "You selected: Make a Payment";
        break;
        case 4:
            cout << "You selected: Withdraw Funds";
        break;
        case 5:
            cout << "You selected: Close an Account";
        break;


        default:
        cout << "Incorrect answer" << endl;
        }       

    return 0;   
}