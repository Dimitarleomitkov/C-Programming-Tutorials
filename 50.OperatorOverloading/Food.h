#ifndef FOOD_H
#define FOOD_H


class Food
{
    public:
        Food ();
        Food (int);

        // Overloading the + operator
        Food operator+ (Food);
        void printStuff ();
    protected:
    private:
        int number;
};

#endif // FOOD_H
