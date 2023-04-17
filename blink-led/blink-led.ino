void setup(){
    pinMode(13,OUTPUT);
    pinMode(14, INPUT);
}



void loop(){
    if(digitalRead(14) == 0){
        digitalWrite(13, HIGH);
    }
}