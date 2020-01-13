void setup() {

    /*set pinmode of GPIO pins */
    pinMode(2, OUTPUT);
    pinMode(3, OUTPUT);
    pinMode(4, INPUT);
    pinMode(5, INPUT);

    /*set baud rate*/
    Serial.begin(9600);

    /*set integers*/
    byte input1;
    byte input2;
    byte output1;
    byte output2;
}

void loop () {
    Serial.println("Please enter your numbers");    /*Client can interact*/

    byte input1 = Serial.read();
    byte input2 = Serial.read();
    
}

