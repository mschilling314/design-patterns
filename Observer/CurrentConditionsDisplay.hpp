#ifndef OBS_CURR_COND
#define OBS_CURR_COND

#include "DisplayElement.hpp"
#include "Observer.hpp"


class CurrentConditionsDisplay: public DisplayElement, public Observer {
    private:
        float temperature;
        float pressure;
        float humidity;

    public:
        void display() override;
        void update(float temp, float humid, float press) override;
};


#endif