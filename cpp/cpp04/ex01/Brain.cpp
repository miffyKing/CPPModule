#include "Brain.hpp"

Brain::Brain(void)
{
  std::cout << "Brain constructor\n";
  for (int i = 0; i < 100; i++)
  {
    this->ideas[i] = "HI";
  }
}

Brain::Brain(const Brain &ref)
{
  std::cout << "Brain Copy constructor\n";
  for (int i = 0; i < 100; i++)
  {
    this->setIdea(ref.getIdeas(i), i);
  }
}

Brain &Brain::operator=(const Brain &ref)
{
  std::cout << " = operator of Brain\n";
  for (int i = 0; i < 100; i++)
  {
    this->setIdea(ref.getIdeas(i), i);
  }
  return *this;
}

Brain::~Brain()
{
  std::cout << "Brain destructed \n";
}

std::string Brain::getIdeas(int i) const
{
  return this->ideas[i];
}

void Brain::setIdea(std::string idea, int i)
{
  this->ideas[i] = idea;
}