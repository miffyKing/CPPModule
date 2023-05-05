#include <iostream>
#include "Harl.hpp"

int main()
{
  Harl* harl = new Harl();

  harl->complain("debug");
  harl->complain("info");
  harl->complain("warning");
  harl->complain("error");
  harl->complain("what");
  return 0;
}