#pragma once

#include <iostream>
#include <string>

class Balloon
{
public:
	Balloon();
	Balloon(std::string c, float s, float p);
	~Balloon();

	std::string getColour() const;
	void setColour(std::string colourName);

	float getSize() const;
	void setSize(float sizeDef);

	float getPressure() const;
	void setPressure(float pressureDef);

	void printBalloon(Balloon *balloonPtr);

private:
	std::string colour;
	float size;
	float pressure;
};