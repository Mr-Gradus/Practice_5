#include <iostream>


using namespace std;


//#################### TASK_1 ####################


template <class T>
	class Pair1  {
private:
    T m_num1;
    T m_num2;

public:
    Pair1(const T& num1, const T& num2) : m_num1(num1), m_num2(num2) {};
	
    const T& first() const { return m_num1; }
    const T& second() const { return m_num2; }
    
    ~Pair1() {};

};

    //#################### TASK_2 ####################

    template <class T, class T1>
    class Pair {
    private:
        T m_num1;
        T1 m_num2;

    public:
        Pair(const T& num1, const T1& num2) : m_num1(num1), m_num2(num2) {};

        const T& first() const { return m_num1; }
        const T1& second() const { return m_num2; }

        ~Pair() {};

    };
    
    //#################### TASK_2 ####################

    template <class T1> 
    class StringValuePair : public Pair<string, T1> {
    public:
        StringValuePair(const string& word, const T1 num) : Pair<string, T1>(word, num) {};

   };



int main()
{
  cout << "#################### TASK_1 ####################" << endl << endl;
  
  Pair1<int> p1(6, 9);
  cout << "Pair: " << p1.first() << ' ' << p1.second() << endl;

  const Pair1<double> p2(3.4, 7.8);
  cout << "Pair: " << p2.first() << ' ' << p2.second() << endl;
  
  cout << endl << "#################### TASK_2 ####################" << endl << endl;
  
  Pair<int, double> n1(6, 7.8);
  cout << "Pair: " << n1.first() << ' ' << n1.second() << endl;

  const Pair<double, int> n2(3.4, 5);
  cout << "Pair: " << n2.first() << ' ' << n2.second() << endl;

  cout << endl << "#################### TASK_2 ####################" << endl << endl;

  StringValuePair<int> svp("Amazing", 7);
  cout << "Pair: " << svp.first() << ' ' << svp.second() << endl;
  
  return 0;
}

