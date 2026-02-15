#include "LogCon.h"
#include <iostream>

using namespace std;

int main() {
  bool a, b, c;

  cout << "" << endl;
  cout << "Table" << endl;
  cout << " " << endl;
  cout << "| a | b | NOT (a) | AND (a,b) | OR (a,b) | IMP (a,b) | EQ (a,b) | "
          "XOR (a,b) | "
       << endl;

  a = true;
  b = true;

  cout << "| " << a << " | " << b << " |    " << NOT(a) << "    "
       << "|     " << AND(a, b) << "     "
       << "|    " << OR(a, b) << "     "
       << "|     " << IMP(a, b) << "     "
       << "|    " << EQ(a, b) << "     "
       << "|     " << XOR(a, b) << "     |" << endl;

  a = true;
  b = false;

  cout << "| " << a << " | " << b << " |    " << NOT(a) << "    "
       << "|     " << AND(a, b) << "     "
       << "|    " << OR(a, b) << "     "
       << "|     " << IMP(a, b) << "     "
       << "|    " << EQ(a, b) << "     "
       << "|     " << XOR(a, b) << "     |" << endl;

  a = false;
  b = true;

  cout << "| " << a << " | " << b << " |    " << NOT(a) << "    "
       << "|     " << AND(a, b) << "     "
       << "|    " << OR(a, b) << "     "
       << "|     " << IMP(a, b) << "     "
       << "|    " << EQ(a, b) << "     "
       << "|     " << XOR(a, b) << "     |" << endl;

  a = false;
  b = false;

  cout << "| " << a << " | " << b << " |    " << NOT(a) << "    "
       << "|     " << AND(a, b) << "     "
       << "|    " << OR(a, b) << "     "
       << "|     " << IMP(a, b) << "     "
       << "|    " << EQ(a, b) << "     "
       << "|     " << XOR(a, b) << "     |" << endl;

  a = true;
  b = true;
  c = true;

  cout << " " << endl;
  cout << "| a | b | c | ((a XOR b) AND (b IMP NOTc)) IMP (c IMP a) | " << endl;
  cout << "| " << a << " | " << b << " | " << c << " | " << Func18(a, b, c)
       << " | " << endl;

  a = true;
  b = true;
  c = false;

  cout << "| " << a << " | " << b << " | " << c << " | " << Func18(a, b, c)
       << " | " << endl;

  a = true;
  b = false;
  c = true;

  cout << "| " << a << " | " << b << " | " << c << " | " << Func18(a, b, c)
       << " | " << endl;

  a = true;
  b = false;
  c = false;

  cout << "| " << a << " | " << b << " | " << c << " | " << Func18(a, b, c)
       << " | " << endl;

  a = false;
  b = true;
  c = true;

  cout << "| " << a << " | " << b << " | " << c << " | " << Func18(a, b, c)
       << " | " << endl;

  a = false;
  b = true;
  c = false;

  cout << "| " << a << " | " << b << " | " << c << " | " << Func18(a, b, c)
       << " | " << endl;

  a = false;
  b = false;
  c = true;

  cout << "| " << a << " | " << b << " | " << c << " | " << Func18(a, b, c)
       << " | " << endl;

  a = false;
  b = false;
  c = false;

  cout << "| " << a << " | " << b << " | " << c << " | " << Func18(a, b, c)
       << " | " << endl;

  return 0;
}
