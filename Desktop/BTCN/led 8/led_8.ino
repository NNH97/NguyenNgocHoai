byte ledPin[] = {0,1,2,3,4,5,6,7,8}; 
byte n; 
void setup() {
  n = sizeof(ledPin);  
  for (int i=0;i< n ;i++) {
    pinMode(ledPin[i],OUTPUT);  
    digitalWrite(ledPin[i],LOW); 
  }
}
void loop() {
 
  for (int i=0; i <= n ; i++) {
    digitalWrite(ledPin[i],HIGH);
    delay(100);
  }
  
  for (int i = 0;i <= n; i ++) {
    digitalWrite(ledPin[i],LOW);
    delay(100);
  }
   for (int i= n-1; i>=0; i--) {
    digitalWrite(ledPin[i],HIGH);
    delay(100);
  }
  for (int i= n-1; i>=0; i--) {
    digitalWrite(ledPin[i],LOW);
    delay(100);
  }
}
