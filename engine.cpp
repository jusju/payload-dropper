// payload dropper jju

int firstNegativeAttachmentPin = 0;
int secondNegativeAttachmentPin = 2;
int firstPositiveAttachmentPin = 4;
int secondPositiveAttachmentPin = 7;
int generalMinusInputPin = 8;
int generalNegativeInputPin = 10;

boolean initialStateMinusDefault = true;
boolean initialStatePlusDefault = true;
int upCounter = 0;

void setup() {
  pinMode(firstNegativeAttachmentPin, OUTPUT);
  pinMode(secondNegativeAttachmentPin, OUTPUT);
  pinMode(firstPositiveAttachmentPin, OUTPUT);
  pinMode(secondPositiveAttachmentPin, OUTPUT);
  pinMode(generalMinusInputPin, OUTPUT);
  pinMode(generalNegativeInputPin, OUTPUT);
  digitalWrite(firstNegativeAttachmentPin, LOW);
  digitalWrite(secondNegativeAttachmentPin, LOW);
  digitalWrite(firstPositiveAttachmentPin, LOW);
  digitalWrite(secondPositiveAttachmentPin, LOW);
  digitalWrite(generalMinusInputPin, LOW);
  digitalWrite(generalNegativeInputPin, LOW);
}

void loop() {
  upCounter++;
  if (initialStateMinusDefault == true && initialStatePlusDefault == true) {
    digitalWrite(generalMinusInputPin, HIGH);
    digitalWrite(generalNegativeInputPin, HIGH);
    digitalWrite(firstNegativeAttachmentPin, HIGH);    
    digitalWrite(firstPositiveAttachmentPin, HIGH);    
  }
  delay(1000);
  if (initialStateMinusDefault == true && initialStatePlusDefault == true) {
    digitalWrite(generalMinusInputPin, LOW);
    digitalWrite(generalNegativeInputPin, LOW);
    digitalWrite(firstNegativeAttachmentPin, LOW);    
    digitalWrite(firstPositiveAttachmentPin, LOW);    
  }
  delay(1000);
  
  if(upCounter > 4) {
    delay(30000);
  }
}
