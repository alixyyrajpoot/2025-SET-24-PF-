#include <iostream>
using namespace std;

int main() {
    int requiredStock = 500;
    int currentStock = 420;

    // Is stock sufficient
    cout << "1. Is stock sufficient? " 
         << ((currentStock >= requiredStock) ? "Yes" : "No") << endl;

    // Is stock less than 50% of required level
    cout << "2. Is stock less than 50% of required? " 
         << ((currentStock < (requiredStock / 2)) ? "Yes" : "No") << endl;

    // Is stock exactly equal to required stock
    cout << "3. Is stock exactly equal to required? " 
         << ((currentStock == requiredStock) ? "Yes" : "No") << endl;

    // Is the shortage greater than 50 units?
    cout << "4. Is shortage greater than 50 units? " 
         << (((requiredStock - currentStock) > 50) ? "Yes" : "No") << endl;

    return 0;
}
