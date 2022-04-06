int pot = 0;

void setup() {
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
}

void loop() {
  pot = analogRead(0);
  if(pot < 146){
      analogWrite(9,255);
      analogWrite(10,0);
      analogWrite(11, 200);
  }else{
    if(pot < 292){
      analogWrite(9,0);
      analogWrite(10,0);
      analogWrite(11, 255);
    }else{
      if(pot < 438){
      analogWrite(9,51);
      analogWrite(10,198);
      analogWrite(11, 255);
      }else{
        if(pot < 584){
      analogWrite(9,0);
      analogWrite(10,255);
      analogWrite(11, 255);
        }else{
          if(pot < 730){
      analogWrite(9,0);
      analogWrite(10,255);
      analogWrite(11, 0);
          }else{
            if(pot < 876){
      analogWrite(9,255);
      analogWrite(10,0);
      analogWrite(11, 0);
            }else{
              if(pot < 1022){
      analogWrite(9,255);
      analogWrite(10,0);
      analogWrite(11, 255);
              }
            }
          }
        }
      }
    }
  }
  }

