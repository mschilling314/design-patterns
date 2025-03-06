#include <random>
#include <vector>
#include <iostream>
#include "WeatherData.hpp"
#include "CurrentConditionsDisplay.hpp"


constexpr int NUM_ELEMENTS{100};


bool flip(){
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> dist(0, 10);
    if (dist(gen) < 5) return true;
    return false;
}



std::vector<float> generate_random_list(int n){
    std::vector<float> res;
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> dist(-30 * 5, 30 * 5);
    for (int idx{0}; idx < n; ++idx){
        float x = dist(gen);
        res.push_back(x);
    }
    return res;
}


int main(){
    std::vector<float> temps{generate_random_list(NUM_ELEMENTS)};
    std::vector<float> hums{generate_random_list(NUM_ELEMENTS)};
    std::vector<float> presses{generate_random_list(NUM_ELEMENTS)};

    CurrentConditionsDisplay disp{};
    WeatherData dat{};

    bool disp_subscribed{false};

    for (size_t idx{0}; idx < NUM_ELEMENTS; ++idx){
        dat.setMeasurements(temps[idx], hums[idx], presses[idx]);
        if (!disp_subscribed && flip()){
            dat.registerObserver(&disp);
            disp_subscribed = true;
            std::cout << "Subscribed.  \n";
        } else if (disp_subscribed && flip()) {
            dat.removeObserver(&disp);
            disp_subscribed = false;
            std::cout << "Unsubscribed.  \n";
        }
    }

    return 0;
}