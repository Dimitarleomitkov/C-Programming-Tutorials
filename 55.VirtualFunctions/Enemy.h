#ifndef ENEMY_H
#define ENEMY_H


class Enemy
{
    public:
        Enemy();
        void setAttackPower(int AP);
        // Virtual functions signal the compiler that the derived classes have their own version.
        virtual void attack ();
    protected:
        int attackPower;
    private:
};

#endif // ENEMY_H
