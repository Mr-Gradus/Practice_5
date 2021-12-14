#include <iostream>


using namespace std;


//#################### TASK_1 ####################

template <class T>
	class Pair1
{
private:
    T m_num1;
    T m_num2;

public:
    Pair1(T num1, T num2) : m_num1(num1), m_num2(num2) {};
	
    T first() { return m_num1; }
    T second() { return m_num2; }
    
    ~Pair1() {};

};


int main()
{
    Pair1<int> p1(6, 9);
    cout << "Pair: " << p1.first() << ' ' << p1.second() << '\n';

   const Pair1<double> p2(3.4, 7.8);
   cout << "Pair: " << p2.first() << ' ' << p2.second() << '\n';

    return 0;
}

