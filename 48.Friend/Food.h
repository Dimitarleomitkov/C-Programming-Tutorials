#ifndef FOOD_H
#define FOOD_H


class Food
{
    public:
        Food ();
    protected:
    private:
        int foodVar;
        // Creating a friend function.
        friend void foodFriend (Food &foodObject);
        // A class has to make a function its friend. It does not work the other way around.
};

#endif // FOOD_H
