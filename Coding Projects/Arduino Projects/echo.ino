int ir_sensor=8;
void setup()
{
  pinMode(ir_sensor,INPUT);
  Serial.begin(9600);
}
void loop(){
  int output= analogRead(ir_sensor);
  Serial.println(output);
}