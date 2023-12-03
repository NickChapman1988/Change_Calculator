#include <iostream>
#include <vector> 

using namespace std;
/* 
    Write a program that asks a user to enter 
    an integer representing the number of 1p coins 
    
    The program should then display how to provide that change to the user
    
    In the UK:
    £1 is 100 pennies
    50p is 50 pennies
    20p is 20 pennies
    10p is 10 pennies
    5p is 5 pennies
    2p is 2 pennies
    1p is 1 penny 
    */
int main() {
 
    const int pound_value {100};  
    const int fifties_value {50};
    const int twenties_value {20};
    const int tens_value {10};
    const int fives_value {5};
    const int twos_value {2};
    
    int change_amount {};
    
    cout << "Enter an amount in pennies: ";
    cin >> change_amount;
    
    int balance{}, pounds{}, fifties{}, twenties{}, tens{}, fives{}, twos{}, ones{};
    
    pounds = change_amount / pound_value;
    balance = change_amount - (pounds * pound_value);
    
    fifties = balance / fifties_value;
    balance -= (fifties * fifties_value);
    
    twenties = balance / twenties_value;
    balance -= (twenties * twenties_value);
    
    tens = balance / tens_value;
    balance -= (tens * tens_value);
    
    fives = balance / fives_value;
    balance -= fives * fives_value;
    
    twos = balance / twos_value;
    balance -= twos * twos_value;
    
    ones = balance;
    
    
    cout << "You can give this change as follows:" << endl;
    cout << "Pounds: " << pounds << endl;
    cout << "50p: " << fifties << endl;
    cout << "20p: " << twenties << endl;
    cout << "10p: " << tens << endl;
    cout << "5p: " << fives << endl;
    cout << "2p: " << twos << endl;
    cout << "1p: " << ones << endl;
    
    return 0;
}
    
    
    