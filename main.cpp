// Juwon Hong
//CIS 25
//14/9/2024

#include <iostream>
#include <string>

using namespace std;

int main() {
    string street;
    string city;
    string state;
    string zipCode;

    // Ask the street address
    cout << "Enter your street address: "<<endl;;
    getline(cin, street);

    // Ask the city
    cout << "Enter your city: ";
    getline(std::cin, city);

    // Ask the state
    cout << "Enter your state: ";
    getline(std::cin, state);

    // Ask the zip code
    cout << "Enter your zip code: ";
    getline(std::cin, zipCode);

    // The result of the entered the street,city,state, and zip code
    cout << "The street is: "<<street<<endl;
    cout << "The city is: "<<city<<endl;
    cout << "The state is: "<<state<<endl;
    cout << "The zipCode is: "<<zipCode<<endl;

    return 0;
}
