/**
 *   @file: invoice.cc
 * @author: Garrett Klank
 *   @date: 1/26/2022
 *  @brief: Program that creates invoices based off user inputs for monitor purchases
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

///Constants and function prototypes
const double SAMSUNG_COST = 190;
const double VIEWSONIC_COST = 170;

int main(int argc, char const *argv[]) {

    char brand;
    string brandName;
    int quantity;
    string ohioCheck;
    string ohio;

    cout << "Enter a monitor type (v, s) followed by a quantity: ";
    cin >> brand >> quantity;
    
    double cost;
    double price;
    double discount;
    double tax;
    double total;

    if(brand == 's') {
        price = quantity * SAMSUNG_COST;
        brandName = "Samsung";
        cost = SAMSUNG_COST;
    } 
    else if(brand == 'v') {
        price = quantity * VIEWSONIC_COST;
        brandName = "ViewSonic";
        cost = VIEWSONIC_COST;
    }
    else {
        cout << "Please enter a lowercase s, or v";
    }

    cout << "Do you live in Ohio (yes/no)? ";
    cin >> ohioCheck;

    if(ohioCheck == "yes") {
        tax = price * 0.07;
        ohio = "Yes";
    }
    else {
        tax  = 0;
        ohio = "No";
    }

    quantity >= 3 ? discount = 0.05 * price : discount = 0;
    total = price - discount + tax;
    cout << fixed << setprecision(2);
    cout << "Monitor Invoice" << endl;
    cout << "--------------------------" << endl;
    cout << "  Monitor brand: " << brandName << endl;
    cout << "       Quantity: "  << quantity << endl;
    cout << "          Price: $" << cost << endl;
    cout << "  Ohio Resident: " << ohio << endl;
    cout << "    Total price: $" << price << endl;
    cout << "--------------------------" << endl;
    cout << "       Discount: $" << discount << endl;
    cout << "       Subtotal: $" << price - discount << endl;
    cout << "          Taxes: $" << tax << endl;
    cout << "==========================" << endl;
    cout << "          Total: $" << total << endl;
    cout << "==========================" << endl;
    return 0;
} /// main
