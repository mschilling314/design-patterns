#include "CurrentConditionsDisplay.hpp"

#include <iostream>


void CurrentConditionsDisplay::display(){
    std::cout << "\nCurrent Temperature: " << this->temperature << '\n';
    std::cout << "Current Humidity: " << this->humidity << '\n';
    std::cout << "Current Pressure: " << this->pressure << "\n\n";
}

void CurrentConditionsDisplay::update(float temp, float humid, float press){
    this->temperature = temp;
    this->humidity = humid;
    this->pressure = press;
    this->display();
}