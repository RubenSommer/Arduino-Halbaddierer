const int output0 = 2;
const int output1 = 3;

const int input0 = 4;
const int input1 = 5;

void setup() {
  // initialize serial:
  Serial.begin(9600);
}

void loop() {
  // if there's any serial available, read it:
  while (Serial.available() > 0) {
    // look for the next valid integer in the incoming serial stream:
    byte a = Serial.parseInt();
    // do it again:
    byte b = Serial.parseInt();
    // do it again:
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

      int s = digitalRead(input0);
      int ü = digitalRead(input1);

      if (Serial.read() == '\n') {
        Serial.println('s');
        Serial.println('ü');
      }
      
      }
    }
  }