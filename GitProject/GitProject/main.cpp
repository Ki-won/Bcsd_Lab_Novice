#include <iostream>
#include <string>
using namespace std;

class cow {
private:
	string name;
	int weight;
public:
	cow() : name(""), weight(0) {}
	~cow() {}
	void setName(string n) { name = n; }
	void setWeight(int w) { weight = w; }
	string getName() { return name; }
	int getWeight() { return weight; }
};

int main()
{
	cow c1;
	c1.setName("doohan");
	c1.setWeight(4);

	cout << "name: " << c1.getName() << " weight: " << c1.getWeight() << endl;

	return 0;
}