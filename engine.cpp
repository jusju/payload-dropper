// payload dropper jju

int firstNegativeAttachmentPin = 0;
int secondNegativeAttachmentPin = 2;
int firstPositiveAttachmentPin = 4;
int secondPositiveAttachmentPin = 7;
int latchOpeningPin = 8;
int sparePin1 = 10;

boolean initialStateMinusDefault = true;
boolean initialStatePlusDefault = true;


void setup() {
  pinMode(firstNegativeAttachmentPin, OUTPUT);
  pinMode(secondNegativeAttachmentPin, OUTPUT);
  pinMode(firstPositiveAttachmentPin, OUTPUT);
  pinMode(secondPositiveAttachmentPin, OUTPUT);
  pinMode(latchOpeningPin, OUTPUT);
  pinMode(sparePin1, OUTPUT);
}

void loop() {
  if(initialStateMinusDefault == true && initialStatePlusDefault == true) {
    digitalWrite(firstNegativeAttachmentPin, HIGH);
    digitalWrite(firstPositiveAttachmentPin, HIGH);
  }
 
  delay(2000);              
}
