#include <iostream>
#include <string>

using namespace std;

int main() 
{
 setlocale(LC_ALL, "");
 cout << "Оператор ||:" << endl;

 boolalpha(cout);
 bool a;
 bool b;
   
  a = true;
  b = true;
  cout << " " << a << " " << b << " " << (a || b) << endl;

  a = false;
  b = true;
  cout << " " << a << " " << b << " " << (a || b) << endl;

  a = true;
  b = false;
  cout << " " << a << " " << b << " " << (a || b) << endl;

  a = false;
  b = false;
  cout << " " << a << " " << b << " " << (a || b) <<  endl;

  cout << "Оператор &&:" << endl;
   
  a = true;
  b = true;
  cout << " " << a << " " << b << " " << (a && b) << endl;

  a = false;
  b = true;
  cout << " " << a << " " << b << " " << (a && b) << endl;

  a = true;
  b = false;
  cout << " " << a << " " << b << " " << (a && b) << endl;

  a = false;
  b = false;
  cout << " " << a << " " << b << " " << (a && b) << endl;
}