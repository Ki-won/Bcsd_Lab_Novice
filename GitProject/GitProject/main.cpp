#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
#include <string>
using namespace std;
// hello world;

class Pig {
private:
	char Pig_name[20];
	int Pig_weight;
	
public:
	void getName( const char* name)
	{
		strcpy(Pig_name, name);
		cout << Pig_name << endl;
	}

	void getWeight(int weight)
	{
		Pig_weight = weight;
		cout << Pig_weight << "Kg" << endl;
	}
};

int main(void)
{
	Pig a;

	a.getName("hello_pig");
	a.getWeight(200);
}
