#include "driver.h"

driver::driver(byte input1, byte input2){
    pinMode(input1, OUTPUT);
    pinMode(input2, OUTPUT);
    _input1  = input1;
    _input2 = input2;
};

void driver::drive(int input1, int input2){
    int control1 = input1;
    int control2 = input2;

    control1 = constrain(control1, 0, 360);
    control2 = constrain(control2, 0, 360);

    control1 = map(control1, 0, 90, 255, 0);
    control2 = map(control2, 90, 360, 0, 255);

    analogWrite(_input1, control1);
    analogWrite(_input2, control2);
}