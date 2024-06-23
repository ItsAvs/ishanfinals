#include "main.h"
#include "Constants.h"

using namespace pros;
using namespace Objects;

//Runs initialization code. This occurs as soon as the program is started.
void initialize() {
	pros::lcd::initialize();
	pros::lcd::set_text(1, "Hello PROS User!");
}

void turn(int degrees){
	while(!(degrees - 5 < imu.get_heading() < degrees + 5)){
		first.move(100);
		second.move(100);
		third.move(100);
		fourth.move(100);
	}
}

void move(int rotations){
	first.move_absolute(rotations, 200);
	second.move_absolute(rotations, 200);
	third.move_absolute(-rotations, 200);
	fourth.move_absolute(-rotations, 200);
}