
#include <iostream>
#include <fstream>
#include <string>

void replaceStringInFile(const std::string &filename, const std::string &s1, const std::string &s2)
{
  std::ifstream inputFile(filename);
  if (!inputFile)
  {
    std::cout << "Failed to open the input file." << std::endl;
    return;
  }

  std::string outputFilename = filename + ".replace";
  std::ofstream outputFile(outputFilename);
  if (!outputFile)
  {
    std::cout << "Failed to create the output file." << std::endl;
    return;
  }

  std::string line;
  while (std::getline(inputFile, line))
  {
    size_t pos = 0;
    while ((pos = line.find(s1, pos)) != std::string::npos)
    {
      std::string tmp = line.substr(0, pos);
      tmp += s2;
      tmp += line.substr(pos + s1.length());
      line = tmp;
    }
    outputFile << line << std::endl;
  }

  inputFile.close();
  outputFile.close();

  std::cout << "Replacement completed." << std::endl;
}

int main(int ac, char **av)
{
  std::string filename, s1, s2;

  if (ac != 4)
  {
    std::cout << "Wrong Input\n";
    return 0;
  }
  filename = av[1];
  s1 = av[2];
  s2 = av[3];
  replaceStringInFile(filename, s1, s2);

  return 0;
}
