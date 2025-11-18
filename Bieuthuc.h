#pragma once
#include <iostream>
using namespace std;
#include <cstdlib>
#include <ctime>

class Bieuthuc
{
protected:
	int a, b;
	char pheptoan; // +, -, *
public:
	Bieuthuc(int level);
	friend ostream& operator<<(ostream& out, Bieuthuc bt); // a + b
	bool kiemtra(float traloi);
	float giatri();
};
