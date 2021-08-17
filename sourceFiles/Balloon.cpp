#include "Balloon.h"

Balloon::Balloon()
{
}

Balloon::Balloon(std::string col, float siz, float pre)
{
	colour = col;
	size = siz;
	pressure = pre;
}

Balloon::~Balloon()
{
}

std::string Balloon::getColour() const
{
	return colour;
}

void Balloon::setColour(std::string colourName)
{
	colour = colourName;
}

float Balloon::getSize() const
{
	return size;
}

void Balloon::setSize(float sizeDef)
{
	size = sizeDef;
}

float Balloon::getPressure() const
{
	return pressure;
}

void Balloon::setPressure(float pressureDef)
{
	pressure = pressureDef;
}

void Balloon::printBalloon(Balloon *balloonPtr)
{
	std::cout << "Balloon attributes:\n";
	std::cout << "Colour = " << balloonPtr->getColour() << "." << std::endl;
	std::cout << "Size = " << balloonPtr->getSize() << " cm." << std::endl;
	std::cout << "Pressure = " << balloonPtr->getPressure() << " Pascal.\n" << std::endl;
}