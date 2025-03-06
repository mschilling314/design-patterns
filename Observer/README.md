# Observer Pattern
## Problem Statement
We want to implement a system such that an object containing weather data can update any number of displays.  We want these displays to be flexible as well, such that we can design them at will.

## The Pattern
In the Observer pattern, you implement two abstract classes:  the subject and the observer.  The subject is what holds the data the observers want.  the subject must implement methods to register, remove, and notify observers.  Observers by contrast merely need to provide an update method.  

Then, at runtime, you can have observer objects that subscribe to the subject by calling its ```registerObserver``` method and passing itself.  From there, the observer will be notified whenever the subject has an update.  If the observer would like to stop receiving notifications, a quick call to ```removeObserver``` is all that's necessary.

## Application to the Solution
We can have our weather data be the subject class (```WeatherData```), with the displays implementing the observer interface.  If you run ```main.exe```, random values for temperature, pressure, and humidity will be generated and then displayed in the console via a ```CurrentCoditionsDisplay``` object.

# To Do
- Consider trying to update to use an actual API to get weather data