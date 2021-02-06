#ifndef FOOD_H
#define FOOD_H

template <class T>
class Food {
    private:
        T firstVar, secondVar;
    public:
        Food (T FirstVar, T SecondVar);
        T bigger();
};

#endif // FOOD_H
