#pragma once

using namespace std;

enum LIGHT_MODE {ON, OFF};

class Densflor
{
private:
	LIGHT_MODE lightMode;
	int width;
	int height;
	int area;

public:
	void lightOFF();
	void lightON();
	int getArea();

	Densflor& operator+(const Densflor & d);
	Densflor operator++(int); //postinkrementacja
	Densflor();
	Densflor(int w, int h);
	~Densflor();
};