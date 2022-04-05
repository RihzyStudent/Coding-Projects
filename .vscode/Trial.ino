
#define trigPin 12
#define echoPin 11
#define MAX_DISTANCE 200
int buzzer = 8;
int LED = 6;
float timeOut = MAX_DISTANCE*60;
int soundVelo = 340;
float getSonar();
void setup(){
    pinMode(trigPin,OUTPUT);
    pinMode(echoPin,INPUT);
    pinMode(buzzer,OUTPUT);
    pinMode(LED,OUTPUT);
    Serial.begin(9600);
}

void loop(){
    delay(100);
    Serial.print("Ping: ");
    Serial.print(getSonar());
    Serial.println("cm");
}

float getSonar(){
    unsigned long pingTime;
    float distance;
    digitalWrite(trigPin,HIGH);
    delayMicroseconds(10);
    digitalWrite(trigPin,LOW);
    pingTime = pulseIn(echoPin, HIGH,timeOut);
    distance=(float)pingTime*soundVelo /2 /1000;
        if (distance < 20)
        {
            digitalWrite(buzzer,HIGH);
            digitalWrite(LED,HIGH);
        }

        else{
            digitalWrite(LED,LOW);
            digitalWrite(LED,LOW);
        }
        
    return distance;
}