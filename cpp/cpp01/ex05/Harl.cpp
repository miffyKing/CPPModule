#include "Harl.hpp"

Harl:: Harl(void) {}

Harl:: ~Harl() {}

void Harl:: debug(void)
{
	std::cout << "DEBUG\nI love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger.\nI really do!" << std::endl;
} 

void Harl:: info(void)
{
  std::cout << "INFO\nI cannot believe adding extra bacon costs more money.\nYou didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
} 

void Harl:: warning(void)
{
  std::cout << "WARNING\nI think I deserve to have some extra bacon for free.\nI’ve been coming for years whereas you started working here since last month." << std::endl;
} 

void Harl:: error(void)
{
  std::cout << "ERROR\nThis is unacceptable! I want to speak to the manager now." << std::endl;
} 

void Harl:: complain(std::string level)
{
  std::string str[4];
  str[0] = "debug";
  str[1] = "info";
  str[2] = "warning";
  str[3] = "error";
  void (Harl::*fp[4]) (void);
  
  fp[0] = &Harl::debug;
  fp[1] = &Harl::info;
  fp[2] = &Harl::warning;
  fp[3] = &Harl::error;

  for (int i = 0; i < 4; i++)
  {
    if (level == str[i])
    {
      (this->*(fp[i]))();
      return;
    }
  }
  std::cout<<"No exising complain\n";

} 