#ifndef OBS_OBS
#define OBS_OBS

class Observer{
    public:
        virtual void update(float temp, float humid, float press) = 0;
};


#endif