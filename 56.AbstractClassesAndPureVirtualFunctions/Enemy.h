#ifndef ENEMY_H
#define ENEMY_H

/* Unfortunately, a class which has a pure virtual function in it, becomes an Abstract class.
   We cannot create objects of these classes.
   We can only make derived classes from it. */
class Enemy
{
    public:
        Enemy();
        void setAttackPower(int AP);
        // A pure virtual function will not let the derived classes to inherit it.
        virtual void enemyAttack ();
        // Example for a pure virtual function. Now every derived class MUST overwrite it via polymorphism.
        virtual void attack () = 0;
        // Also no Enemy object can attack(). It has to be some type of a derived class object, where it is overwritten.
    protected:
        int attackPower;
    private:
};

#endif // ENEMY_H
