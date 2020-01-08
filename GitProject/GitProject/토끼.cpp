#define _CRT_SECURE_NO_WARNING
#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

class Rabbit
{
private:
		string rabbit_name;
		double rabbit_weight;
public:
	void set_name(string name)
	{
		rabbit_name= name;
	}
	void set_weight(double wei)
	{
		rabbit_weight = wei;
	}
	void get_name()
	{
		std::cout << rabbit_name << std::endl;
	}
	void get_weight()
	{
		std::cout << rabbit_weight << std::endl;
	}

};
int main()
{
    
}
