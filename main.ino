//Set pins
const int output0 = 2;
const int output1 = 3;

const int input0 = 4;
const int input1 = 5;

void setup() {
  //set baud-rate
  Serial.begin(9600);
}

void loop() {
  // Wait for serial console
  while (Serial.available() > 0) {
    // Cilient interaction
    byte a = Serial.parseInt();
    // do it again:
    byte b = Serial.parseInt();
    // do it again:

      //Check if serial input finished
      //Output
      if (Serial.read() == '\n') {
        if (a == 0){
          digitalWrite(output0, LOW);
        }
        
        if (a == 1) {
          digitalWrite(output0, HIGH);
        }

        if (b == 0) {
          digitalWrite(output1, LOW);
        }

        if (b == 1){
          digitalWrite(output1,HIGH);
        }

      //wait for input via GPIO-pin
      int s = digitalRead(input0);
      int ü = digitalRead(input1);

      //print result
      if (Serial.read() == '\n') {
        Serial.println('s');
        Serial.println('ü');
      }
      
      }
    }
  }