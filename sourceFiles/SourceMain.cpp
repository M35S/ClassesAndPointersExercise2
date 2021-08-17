#include "Balloon.h"

using namespace std;

int main()
{
	Balloon RedBalloon;
	RedBalloon.setColour("Red");
	RedBalloon.setSize(11.7f);
	RedBalloon.setPressure(2.9f);

	Balloon BlueBalloon = { "Blue", 12.2f, 5.2f };

	Balloon *balloonPtr1, *balloonPtr2;
	balloonPtr1 = &RedBalloon;
	balloonPtr2 = &BlueBalloon;

	RedBalloon.printBalloon(balloonPtr1);
	BlueBalloon.printBalloon(balloonPtr2);

	system("pause");

	return 0;
}