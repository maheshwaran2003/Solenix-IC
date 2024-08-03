int sensor1 = 7;   //senor1 pin number
int sensor2 = 6 ;   //senor2 pin number

int rotation = 0;
int old_rotation = 0;

int outputPin1 = 2;
int outputPin2 = 3;
int outputPin3 = 4;
int outputPin4 = 5;

void setup() {

  Serial.begin(9600);

  pinMode(sensor1, INPUT);
  pinMode(sensor2, INPUT);


  pinMode(outputPin1, OUTPUT);
  pinMode(outputPin2, OUTPUT);
  pinMode(outputPin3, OUTPUT);
  pinMode(outputPin4, OUTPUT);

}

void loop() {

  bool sensor1_value = digitalRead(sensor1);
  bool sensor2_value = digitalRead(sensor2);


  if (sensor1_value == LOW){
    Serial.print("Got input...");

    if (rotation == 0){
      rotation = 1;
    } else if (rotation == 1){
      rotation = -1;
    } else {
      rotation = 0;
    }

  }

  else if (sensor2_value == LOW){
      rotation = -1;
  } 

  else {
      rotation = old_rotation;
  }

  old_rotation = rotation;

  if (rotation == 1){
    Serial.print("sensor1 is working...\n");

    digitalWrite(outputPin1,HIGH);
    digitalWrite(outputPin2,LOW);
    digitalWrite(outputPin3,LOW);
    digitalWrite(outputPin4,HIGH);
  } else if (rotation == -1){
    Serial.print("sensor2 is working...");

    digitalWrite(outputPin1,LOW);
    digitalWrite(outputPin2,HIGH);
    digitalWrite(outputPin3,HIGH);
    digitalWrite(outputPin4,LOW);
  }
  else {
    Serial.print("no input...\n");

    digitalWrite(outputPin1,LOW);
    digitalWrite(outputPin2,LOW);
    digitalWrite(outputPin3,LOW);
    digitalWrite(outputPin4,LOW);
  }

}