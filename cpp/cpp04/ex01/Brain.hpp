#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain
{
private:
  std::string ideas[100];
  /* data */
public:
  Brain(void);
  Brain(Brain &brain);
  ~Brain();
  Brain &operator=(Brain &src);

  std::string getIdeas(int n);           // n번째 idea 리턴
  void setIdea(std::string idea, int n); // n 번째 idea 지정.
};

#endif