# Strategy Pattern
## Problem Statement
We want to simulate various types of ducks (mallard, redhead, rubber, decoy) with various behaviors such as flying or quacking.  But, a simple inheritance based solution breaks down because the actions vary, but some stay the same, so we don't want to replicate code and then for some breaking introduction have to revise.

## The Pattern
The strategy pattern enables us to separate the actions of a class from the class itself, allowing re-use of actions while also keeping actions open to extension.  That is, a particular algorithm/function (action) can be re-used by many components, while you can add additional algorithms/functions as necessary.  To do this, instead of each item that executes an action defining the action itself, the action is separated out into its own base class from which various versions can be swapped out, and the item itself now establishes a HAS-A relationship with the action base class.

Another benefit is that in this case, the algorithm an object uses can also be swapped at runtime.  One example of when this might be useful is sorting.  Different sorting algorithms perform better in differing conditions, so an "optimal" algorithm might have the container you're using observe its items, then dynamically select the sorting algorithm to use for optimality.

## Application to the Solution
In our solution, we shall:
1. Implement as derived classes of Duck the following classes:
    - MallardDuck
    - RedHeadDuck
    - RubberDuck
    - DecoyDuck
2. Implement two flying actions as derived classes of the Fly class:
    - WingsFly
    - NoFly
3. Implement three types of noise derived from the Noise class:
    - Quack
    - Squeak
    - Mute
4. Duck then HAS-A Fly object and a Noise object.
Or at least, that's the solution to the problem in the book.  

That said, I'm not so interested in ducks, so I'll be implementing C++ vector class with ints that chooses between bubble and merge sort dynamically.