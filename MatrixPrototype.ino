// 3x3 LED Matrix Arduino Script
#define PINS 6

// variable wait controls the delay between run display() function call 
int wait = 2;
// Shouldn't these be booleans?
int buttonValue0;
int buttonValue1;

void setup() {
  // Setup output pins
  int pinOuts[PINS] = {13, 12, 11, 4, 3, 2};
  for (int i=0; i < PINS; i++){
    pinMode(pinOuts[i], OUTPUT);
  }
  // Serial print for debugging purposes
  Serial.begin(9600);
}


// Checks if a button is pressed and then displays varying led image
void loop() {
  buttonValue0 = analogRead(A0);
  buttonValue1 = analogRead(A1);

  // checks if only one button is being pressed.
  // precident given to button 0
  // if no button is being pressed output 0.
  if (buttonValue0 >= 5){
    display(13, B101);
    display(12, B10);
    display(11, B101);
  } else if (buttonValue1 >= 5){
    display(13, B10);
    display(12, B101);
    display(11, B10);
  } else {
    display(13, 0);
    display(12, 0);
    display(11, 0);
  }
  
//  Serial.print("Button1:");Serial.print(buttonValue1);Serial.print(" Button2:");Serial.print(buttonValue2);Serial.println();
//  Serial.print("Delay:");Serial.print(timer);Serial.println();
}

// Powers row and leds based off of binary code
// E.g. display(12, B001) would power the right most
// LED connected to the row on pin 12.
void display(int row, byte rowVal) {

  if (rowVal & B100){
    digitalWrite(2, HIGH);
  } else {
    digitalWrite(2, LOW);
  }
  
  //  Serial.print("Row:");Serial.print(row);Serial.print(" Value:");Serial.print(rowVal);Serial.println();
  digitalWrite(row, HIGH);
  //  Serial.print("1");
  
  
  //  Serial.print("Row:");Serial.print(row);Serial.print(" Value:");Serial.print(rowVal);Serial.println();
  //  Serial.print("2");
  
  if (rowVal & B10) {
    digitalWrite(3, LOW);
  } else {
    digitalWrite(3, HIGH); 
  }
  
  //  Serial.print("Row:");Serial.print(row);Serial.print(" Value:");Serial.print(rowVal);Serial.println();
  //  Serial.print("3");
  if (rowVal & B1) {
    digitalWrite(4, LOW);
  } else {
    digitalWrite(4, HIGH); 
  }
  
  //    Serial.print("Done!");
  //    Serial.print("Row:");Serial.print(row);Serial.print(" Value:");Serial.print(rowVal);Serial.println();
   
  delay(wait);
  digitalWrite(row, LOW);
}
