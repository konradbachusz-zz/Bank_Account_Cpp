#include <iostream>
#include <string>
using namespace std;




class Person {       // The class
    public:             // Access specifier
        int age;        // Attribute (int variable)
        string name;  // Attribute (string variable)
        bool has_account;
        int ID; 

        //Methods
        void apply(){
            ID=rand() % 100000 + 999999;
            has_account=true;
            cout << "\nAccount " << ID << " Opened" << endl;
        }
    };


int main() {
    Person myObj;

    std::cout << "Welcome to your bank" << std::endl;

    cout << "What's your name? ";
    cin >> myObj.name;

    cout << "Confirm your age ";
    cin >> myObj.age;
    cout << "Welcome " << myObj.name << endl;

    cout << "What would you like to do today?\n 1 Open an Account \n 2 Deposit Funds \n 3 Make a Payment \n 4 Withdraw Funds \n 5 Close an Account";
    
    //User input
    int x; 
    cout << "\nType your answer: "; // Type a number and press enter
    cin >> x;   

    switch(x) {
        case 1:
            cout << "\nYou selected: Open an Account";
            cout << "\nDo you already have an account? Y/N";
            myObj.apply();
            // string answer;
            // cin >> answer;
            // if (answer.compare('Yes')!=0) {
            //     cout << "\nYou already have an account!";
            // } else {
            //     myObj.apply();
            // }
        break;
        case 2:
            cout << "\nYou selected: Deposit Funds";
        break;

        case 3:
            cout << "\nYou selected: Make a Payment";
        break;
        case 4:
            cout << "\nYou selected: Withdraw Funds";
        break;
        case 5:
            cout << "\nYou selected: Close an Account";
        break;


        default:
        cout << "\nIncorrect answer" << endl;
        }       

    return 0;   
}