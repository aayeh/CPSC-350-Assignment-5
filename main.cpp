#include "DB.h"
#include <iostream>
#include <fstream>
#include <cstddef>

using namespace std;

int main (int argc, char** argv)
{
  DB databs;
  databs.deserialize();
  databs.prompt();
  return 0;
}
