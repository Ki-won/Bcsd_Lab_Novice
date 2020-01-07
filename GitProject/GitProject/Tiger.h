#pragma once
#pragma once
//동물 class에 void getName()함수, void getWeight()함수를 구현해 주세요
#include<string>
#include<iostream>
using namespace std;
class Tiger {
private:
	string name;
	int weight;
public:
	Tiger(const string& name_in = "tiger", const int& weight_in = 50)
		:name(name_in), weight(weight_in)
	{}
	void getName() {
		cout << name << endl;
	}
	void getWeight() {
		cout << weight << endl;
	}
};