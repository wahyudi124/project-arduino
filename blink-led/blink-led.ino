void setup(){
    pinMode(13,OUTPUT);
    pinMode(14, INPUT);
    pinMode(27,OUTPUT);
    
}



void loop(){
    if(digitalRead(14) == 0){
        digitalWrite(13, HIGH);
        digitalWrite(27, HIGH);
    }
}