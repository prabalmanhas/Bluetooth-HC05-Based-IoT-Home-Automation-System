/*
 * PRABAL MANHAS (IOT HOME AUTOMATION PROJECT (BY VOICE ASSISTANT)
 * UID - 20BCS4513
 * CHANDIGARH UNIVERSITY (PROJECT EXHIBITION)
 */
String prabals_command;
void setup(){
Serial.begin(9600);
pinMode (6,OUTPUT);
pinMode (5,OUTPUT);
pinMode (4,OUTPUT);}

void loop() {
while(Serial.available()){
  delay(3);
  char c = Serial.read();
  prabals_command+=c;}

if(prabals_command.length() >0){
  Serial.println(prabals_command);
  if(prabals_command == "Please turn on the lights")
  {digitalWrite(6, HIGH);}
  else if(prabals_command == "Please turn off the lights")
  {digitalWrite(6, LOW);}
  else if(prabals_command == "Please turn on the fan")
  {digitalWrite(5, HIGH);}
  else if(prabals_command == "Please turn off the fan")
  {digitalWrite(5, LOW);}
  else if(prabals_command == "Good evening Turn on the night lamp")
  {digitalWrite(4, HIGH);}
  else if(prabals_command == "Good morning")
  {digitalWrite(4, LOW);}
  else if(prabals_command == "I am back home")
  {
    digitalWrite(4, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(6, HIGH);}
  else if(prabals_command == "Please disconnect")
  {
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);}
  prabals_command = "";}
}
