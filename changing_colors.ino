const int BLUE = 2;
const int GREEN = 4;
const int RED = 5;

void setup() {

  pinMode(RED, OUTPUT);
  pinMode(GREEN, OUTPUT);
  pinMode(BLUE, OUTPUT);

}

int blueValue = 0;
int greenValue = 0;
int redValue = 255;

void loop() {

  analogWrite(RED, redValue);

  for (int i = 0; i<=255; i++){
    analogWrite(RED, redValue);
    redValue -= 1;
    analogWrite(BLUE, blueValue);
    blueValue += 1;
    delay(1);
  } 

  for (int i = 0; i<=255; i++){
    analogWrite(BLUE, blueValue);
    blueValue -= 1;
    analogWrite(GREEN, greenValue);
    greenValue += 1;
    delay(1);
  };

  for (int i = 0; i<=255; i++){
    analogWrite(GREEN, greenValue);
    greenValue -= 1;
    analogWrite(RED, redValue);
    redValue += 1;
    delay(1);
  };

}