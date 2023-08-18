#include <iostream>
using namespace std;


int main (){
int choice;
double F_C;
double C_F;
double F_K;
double C_K;
double K_C;
double K_F;

cout << "Welcome to Temperature Conversion" << endl;
cout << "1. Fahrenheit to Celsius conversion" << endl;
cout << "2. Celsius to Fahrenheit conversion" << endl;
cout << "3. Fahrenheit to Kelvin conversion" << endl;
cout << "4. Celsius to Kelvin conversion" << endl;
cout << "5. Kelvin to Fahrenheit conversion" << endl;
cout << "6. Kelvin to Celsius conversion" << endl;
cout << "Choose the conversion you desire." << endl;
cin >> choice;

if (choice == 1) {
cout << "Enter the temperature in Fahrenheit: " << endl;
cin >> F_C;
cout << "Equivalent temperature in Celsius: " << (F_C - 32)*5/9 << endl;
}
else if (choice == 2) { 
    cout << "Enter the temperature in Celsius: " << endl;
    cin >> C_F;
    cout << "Equivalent temperature in Fahrenheit: " << (C_F*9/5)+32 << endl;

} else if (choice == 3){
    cout << "Enter the Temperature in Fahrenheit: " << endl;
    cin >> F_K;
    cout << "Equivalent temperature in Kelvin: " << (F_K-32)*5/9 + 273.15 << endl;

} else if (choice == 4){ 
    cout << "Enter the Temperature in Celsius: " << endl;
    cin >> C_K;
    cout << "Equivalent temperature in Kelvin: " << C_K + 273.15 << endl;
    
} else if (choice == 5){
    cout << "Enter the temperature in Kelvin: " << endl;
    cin >> K_F;
    cout << "Equivalent temperature in Fahrenheit: " << (K_F-273.15) * 9/5 + 32 << endl;

} else if (choice == 6){
    cout << "Enter the temperature in Kelvin: " << endl;
    cin >> K_C;
    cout << "Equivalent temperature in Celsius: " << K_C - 273.15 << endl;
    
} else {
    cout << "Invalid Input. Retry." << endl;
}
}
