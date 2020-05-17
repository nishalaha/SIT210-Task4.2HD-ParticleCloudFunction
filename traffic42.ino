int Red = D6;
int Green = D5;
int Blue = D4;

void setup() {
    
    pinMode(Red, OUTPUT);
    pinMode(Green, OUTPUT);
    pinMode(Blue, OUTPUT);
    
    
    Particle.function("switchled", switchled);
    
}

int switchled(String colour){
    
    if(colour == "red"){
        
        digitalWrite(Red, HIGH);
        digitalWrite(Green, LOW);
        digitalWrite(Blue, LOW);
        return 1;
        
    }
    else if(colour == "green"){
        
        digitalWrite(Green, HIGH);
        digitalWrite(Blue, LOW);
        digitalWrite(Red, LOW);
        return 1;
        
    }
    else if(colour == "blue"){
        
        digitalWrite(Blue, HIGH);
        digitalWrite(Green, LOW);
        digitalWrite(Red, LOW);
        return 1;
    }    
    else if(colour == "none"){
        
        digitalWrite(Blue, LOW);
        digitalWrite(Green, LOW);
        digitalWrite(Red, LOW);
        return 1;
    }
    else{
        return -1;
    }
}