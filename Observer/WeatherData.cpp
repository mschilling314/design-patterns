#include <vector>

#include "Subject.hpp"
#include "Observer.hpp"
#include "WeatherData.hpp"


void WeatherData::registerObserver(Observer* o){
    this->subscribed.push_back(o);
}

void WeatherData::removeObserver(Observer* o){
    size_t lenny = this->subscribed.size();
    for (size_t idx{0}; idx < lenny;){
        if (o == this->subscribed[idx]){
            this->subscribed[idx] =  this->subscribed[lenny-1];
            this->subscribed.pop_back();
            --lenny;
        } else {
            ++idx;
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

