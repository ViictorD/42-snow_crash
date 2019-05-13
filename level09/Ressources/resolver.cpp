#include <string>
#include <iostream>
#include <sstream>
#include <fstream>

int		main(int ac, char **av)
{
	if (ac < 2)
	{
		std::cerr << "usage: ./a.out <file>" << std::endl;
		return (1);
	}

	std::ifstream	file(av[1]);
	if (file.good() == false)
	{
		std::cerr << "Bad file" << std::endl;
		return (1);
	}

	std::stringstream buffer;
	buffer << file.rdbuf();

	int		i = 0;
	std::string str = buffer.str();
	std::stringstream ret;

	while (i < str.size() - 1)
	{
		ret << static_cast<char>(str[i] - i);
		++i;
	}

	std::cout << "Key: " << ret.str() << std::endl;

	return 0;
}
