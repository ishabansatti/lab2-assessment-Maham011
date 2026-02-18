#include <iostream>
using namespace std;

int getIntValue() {
    // Declare a variable var_int of type int and set its value to 10.
    int var_int = 10;
    return var_int;
}

float getFloatValue() {
    //io
    float var_float = 10.75f;
    return var_float;
}

char getCharValue() {
    char var_char = 'A';
   return var_char;
}

int convertFloatToInt(float value) {
    // convert value to int.
    return static_cast<int>(value);
}

/*
Convert Fahrenheit to Celsius and store your answer in a variable celsius.

Formula:
    Celsius = (Fahrenheit - 32) * 5 / 9
*/
float fahrenheitToCelsius(float fahrenheit) {
    //int fahrenheit=6;
    //cout<<"value in fahrenheit is "<<fahrenheit<<endl;
    float Celsius = (fahrenheit - 32) * 5 / 9;
    return Celsius;
    //cout<<"value in celcuis is" <<Celsius<<endl;
   // return 0;
    //return celsius;

}
