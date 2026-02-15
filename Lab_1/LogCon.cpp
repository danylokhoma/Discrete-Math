#include "LogCon.h"

using namespace std;

bool NOT(bool a) {
  if (a == true) {
    return false;
  } else {
    return true;
  }
}

bool AND(bool a, bool b) {
  if (a == true && b == true) {
    return true;
  } else {
    return false;
  }
}

bool OR(bool a, bool b) {
  if (a == true || b == true) {
    return true;
  } else {
    return false;
  }
}

bool IMP(bool a, bool b) {
  if (a == true && b == false) {
    return false;
  } else {
    return true;
  }
}

bool EQ(bool a, bool b) {
  if (a == b) {
    return true;
  } else {
    return false;
  }
}

bool XOR(bool a, bool b) {
  if (a == b) {
    return false;
  } else {
    return true;
  }
}

bool Func18(bool a, bool b, bool c) {
  bool x = XOR(a, b);
  bool n = NOT(c);
  bool y = IMP(b, n);
  bool e = AND(x, y);
  bool z = IMP(c, a);
  bool r = IMP(e, z);
  return r;
}
