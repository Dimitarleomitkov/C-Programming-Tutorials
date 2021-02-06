#ifndef MOTHER_H
#define MOTHER_H

// This is the base class
class Mother
{
    public:
        Mother();
        void sayName();
        // Everyone can access this variable
        int publicVar;
    protected:
        // The class, a friend and derived classes have access to this variable
        int protectedVar;
    private:
        // Only the class has access to this variable
        int privateVar;
};

#endif // MOTHER_H
