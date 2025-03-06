#include <vector>

#include "Subject.hpp"
#include "Observer.hpp"
#include "WeatherData.hpp"


void WeatherData::registerObserver(Observer* o){
    this->subscribed.push_back(o);
}

void WeatherData::removeObserver(Observer* o){
    for (auto it = this->subscribed.begin(); it != this->subscribed.end(); ++it) {
        if (*it == o) {
            this->subscribed.erase(it);
        }
    }
}


void WeatherData::notifyObservers(){
    for (auto subscriber : this->subscribed){
        (*subscriber).update(this->temperature, this->humidity, this->pressure);
    }
}


void WeatherData::setMeasurements(float temp, float humid, float press){
    this->temperature = temp;
    this->humidity = humid;
    this->pressure = press;
    this->notifyObservers();
}

