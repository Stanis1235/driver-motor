#include "arduino.h"

class driver {
    public:
        driver(byte input1, byte input2);

        void drive(int input1, int input2);
    private:
        byte _input1;
        byte _input2;
};