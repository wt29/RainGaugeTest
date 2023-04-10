int bucket, rgTriggered=0;

void setup() {
  Serial.begin(115200);     // baud rate
  pinMode( D5, INPUT_PULLUP );
  attachInterrupt(digitalPinToInterrupt(D5), rainGauge_ISR, HIGH);

}

void loop() {
 Serial.print( "Count " );
 Serial.println( rgTriggered );
 delay( 250 );
 
}

IRAM_ATTR void rainGauge_ISR()
{
  rgTriggered += 1;
}