#ifndef FRUIT_H
#define FRUIT_H

// Takes every type of data
template <class Type>
class Fruit
{
    public:
        Fruit(Type something);
    protected:
    private:
};

// This template specialization makes the class deal only with characters
template <>
class Fruit<char>
{
    public:
        /* The keyword "inline" is more about telling the compiler that the symbol will be present in more than one object files,
           Without violating the One Definition Rule, than about actual inlining.
           The compiler can decide to do that or not.
           Without the inline, the function will be compiled in all translation units that include the header, violating the ODR.
           Adding inline here is the right way to go.
           Otherwise, you can forward declare the specialization and provide it in a single translation unit,
           as you would do with any other function.*/
        inline Fruit(char something);
    protected:
    private:
};

#endif // FRUIT_H
