#ifndef FOOD_H
#define FOOD_H


class Food
{
    public:
        Food(int RegVar, int constVar);
        void printStuff ();
    protected:
    private:
        int regularVariable;
        // This is a constant member variable. It cannot be set afterwards. It can only be initialized by the constructor!
        const int constantVariable;
};

#endif // FOOD_H
