int timer;

int buttonValue0;
int buttonValue1;

void setup() {

  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);

  pinMode(4, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(2, OUTPUT);
  
  timer = 2;
  
  Serial.begin(9600);
}

void loop() {
  buttonValue0 = analogRead(A0);
  buttonValue1 = analogRead(A1);

  if (buttonValue0 >= 5){
    display(13, 101);
    display(12, 10);
    display(11, 101);
  } else {
    
    display(13, 0);
    display(12, 0);
    display(11, 0);
  }
  
  if (buttonValue1 >= 5) {
    display(13, 10);
    display(12, 101);
    display(11, 10);
  } else {
    
    display(13, 0);
    display(12, 0);
    display(11, 0);
  }
  
//    Serial.print("Button1:");Serial.print(buttonValue1);Serial.print(" Button2:");Serial.print(buttonValue2);Serial.println();
//  Serial.print("Delay:");Serial.print(timer);Serial.println();
  }
void display(int row, long rowVal) {
//  Serial.print("Row:");Serial.print(row);Serial.print(" Value:");Serial.print(rowVal);Serial.println();
  
  digitalWrite(row, HIGH);
//  Serial.print("1");
  if (rowVal >= 100) {
    digitalWrite(2, LOW);
    rowVal = rowVal - 100;
  } else {
    digitalWrite(2, HIGH); 
  }
  
//    Serial.print("Row:");Serial.print(row);Serial.print(" Value:");Serial.print(rowVal);Serial.println();
//  Serial.print("2");
  if (rowVal >= 10) {
    digitalWrite(3, LOW);
    rowVal = rowVal - 10;
  } else {
    digitalWrite(3, HIGH); 
  }
  
//    Serial.print("Row:");Serial.print(row);Serial.print(" Value:");Serial.print(rowVal);Serial.println();
//  Serial.print("3");
  if (rowVal >= 1) {
    digitalWrite(4, LOW);
    rowVal = rowVal - 1;
  } else {
    digitalWrite(4, HIGH); 
  }
  
//    Serial.print("Done!");
//    Serial.print("Row:");Serial.print(row);Serial.print(" Value:");Serial.print(rowVal);Serial.println();
   
   delay(timer);
  
  digitalWrite(row, LOW);
}
