int timer;

int buttonValue0;
int buttonValue1;

void setup() {

  pinMode(16, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);

  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
  
  timer = 2;
  
  Serial.begin(9600);
}

void loop() {
  buttonValue0 = analogRead(A0);
  buttonValue1 = analogRead(A1);

  if (buttonValue1 >= 5){
    display(8, 101);
    display(9, 10);
    display(16, 101);
  } else {
    
    display(8, 0);
    display(9, 0);
    display(16, 0);
  }
  
  if (buttonValue0 >= 5) {
    display(8, 10);
    display(9, 101);
    display(16, 10);
  } else {
    
    display(8, 0);
    display(9, 0);
    display(16, 0);
  }
  
//    Serial.print("Button1:");Serial.print(buttonValue1);Serial.print(" Button2:");Serial.print(buttonValue2);Serial.println();
//  Serial.print("Delay:");Serial.print(timer);Serial.println();
  }
void display(int row, long rowVal) {
//  Serial.print("Row:");Serial.print(row);Serial.print(" Value:");Serial.print(rowVal);Serial.println();
  
  digitalWrite(row, HIGH);
//  Serial.print("1");
  if (rowVal >= 100) {
    digitalWrite(7, LOW);
    rowVal = rowVal - 100;
  } else {
    digitalWrite(7, HIGH); 
  }
  
//    Serial.print("Row:");Serial.print(row);Serial.print(" Value:");Serial.print(rowVal);Serial.println();
//  Serial.print("2");
  if (rowVal >= 10) {
    digitalWrite(6, LOW);
    rowVal = rowVal - 10;
  } else {
    digitalWrite(6, HIGH); 
  }
  
//    Serial.print("Row:");Serial.print(row);Serial.print(" Value:");Serial.print(rowVal);Serial.println();
//  Serial.print("3");
  if (rowVal >= 1) {
    digitalWrite(5, LOW);
    rowVal = rowVal - 1;
  } else {
    digitalWrite(5, HIGH); 
  }
  
//    Serial.print("Done!");
//    Serial.print("Row:");Serial.print(row);Serial.print(" Value:");Serial.print(rowVal);Serial.println();
   
   delay(timer);
  
  digitalWrite(row, LOW);
}
