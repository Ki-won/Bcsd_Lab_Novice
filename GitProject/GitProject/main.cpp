#include <iostream>
#include <string>

class cat
{
public:
	cat(std::string cat_Name, double cat_Weight)
	{
		this->cat_Name = cat_Name;
		this->cat_Weight = cat_Weight;
	}

	void get_Name()
	{
		std::cout << cat_Name << std::endl;
	}

	void get_Weight()
	{
		std::cout << cat_Weight << std::endl;
	}

private:
	std::string cat_Name;
	double cat_Weight;
};
