#include <iostream>
using namespace std;

int main() 
{

    int ticketPrice = 1200;

    int discount = ticketPrice * 25 / 100;
    int afterDiscount = ticketPrice - discount;

    int serviceCharges = afterDiscount * 8 / 100;
    int afterCharges = afterDiscount + serviceCharges;

    int finalPrice = afterCharges + 50;

    cout << "Final Ticket Cost: " << finalPrice << " PKR";

    return 0;
}