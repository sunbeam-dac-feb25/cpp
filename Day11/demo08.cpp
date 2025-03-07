#include <iostream>
using namespace std;
// Singleton Design Pattern
class Singleton
{
private:
    // step-2 : Declare the  static pointer of the same type as that of the class
    static Singleton *ptr;

    // step-1 : Make the ctor as private
    Singleton()
    {
        cout << "Singleton()" << endl;
    }

public:
    // step-4 : Create the static function that will return the instance of this class
    static Singleton *getInstance()
    {
        // step-5 : Check whether the instance of this class is already created or no.
        // If yes return the same instance
        // If no the create the instance and return it.
        if (ptr == NULL)
            ptr = new Singleton();
        return ptr;
    }
};

// step-3 : Initialize the  static ptr to NULL
Singleton *Singleton::ptr = NULL;
int main()
{
    Singleton *s1 = Singleton::getInstance();
    Singleton *s2 = Singleton::getInstance();
    Singleton *s3 = Singleton::getInstance();
    Singleton *s4 = Singleton::getInstance();
    return 0;
}