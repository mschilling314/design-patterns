#ifndef OBS_WEATHER_DATA
#define OBS_WEATHER_DATA

#include <vector>

#include "Subject.hpp"
#include "Observer.hpp"


class WeatherData: public Subject {
    private:
        std::vector<Observer*> subscribed;
        float temperature;
        float humidity;
        float pressure;


    public:
        void registerObserver(Observer* o) override;
        void removeObserver(Observer* o) override;
        void notifyObservers() override;

        void setMeasurements(float temp, float humid, float press);
};


#endif