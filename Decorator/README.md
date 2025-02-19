# Decorator Pattern
## Problem Statement
Suppose we own a coffee shop and wish to design the backend for an ordering system.  In designing this backend, we need to deal with two major categories of stuff, drinks, and the condiments that are on them.  For example, a customer can order a coffee with two cream and one sugar, or a latte with a double shot of espresso.

The backend needs to be able to handle any possible combination we might have to calculate the cost of a beverage.  This involves calculating the cost of all the components and summing them.

Trying to implement classes for each possible combination would lead to an explosion of the number of classes, plus, expanding the system (for example when we acquire the ability to add caramel or honey to the drinks) will require arduous re-working of the system.

For simplicity sake, we'll only implement three drinks: coffee, latte, and hot chocolate, and four condiments: sugar, cream, honey, and caramel.

## The Pattern


## Application to the Solution


## Alternative Solution
Instead of muddling up the class hierarchy in order to make the decorator pattern work, a more optimal solution for this particular problem is to use composition.
In particular, we can have two base classes, Drink and Condiment.  Then, each Drinks class has a collection of condiments (i.e. an array/vector in C++).

In this way, we avoid an unnecessarily complex class hierarchy, ensure the distinction between Drinks and Condiments remains clear, and avoid a ridiculous situation
where someone tries to order two creams on a sugar.

Note that in the alternative solution, Drink takes care of pretty much all functionality, everything else just has specifics such as name, description, etc.