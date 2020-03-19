    /*     Simple Stepper Motor Control Exaple Code
     *      
     *  by Dejan Nedelkovski, www.HowToMechatronics.com
     *  
     */
    // defines pins numbers
    const int stepPin = 3; 
    const int dirPin = 4; 
    long int chrono = 0; 
    void setup() {
      // Sets the two pins as Outputs
      Serial.begin(115200);
      pinMode(stepPin,OUTPUT); 
      pinMode(dirPin,OUTPUT);
      digitalWrite(dirPin,HIGH); // Enables the motor to move in a particular direction
    }
    void loop() {
 
      analogWrite(stepPin,128);
      delay(1000);

}
