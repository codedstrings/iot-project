if( digitalRead(s1) && digitalRead(s2) && digitalRead(s3))   //1 ; all slot available
 {
  Serial.println("Welcome, Available: sLOT1, sLOT2,sLOT3");  //print slot1 and slo2 slot3 available
if (! slotstatus.publish(" SLOT 1,SLOT 2,SLOT 3 AVAILABLE"){}
  digitalWrite(slot1_l,HIGH);
  digitalWrite(slot2_l,HIGH);
  digitalWrite(slot3_l,HIGH);
  delay(1000);
   myservos.write(OPEN_ANGLE);
count=count+1;                             //increment count
   delay(3000);
   myservos.write(CLOSE_ANGLE);
   Serial.println("Car Entered ");
}

 if( !(digitalRead(s1)) && digitalRead(s2) && (digitalRead(s3)) )  //2 ; slot2 and slot3 available
  {
      Serial.println("Welcome, Available: sLOT2,sLOT3");
      if (! slotstatus.publish(" SLOT 2,SLOT 3 AVAILABLE"){}
      digitalWrite(slot1_l,LOW);
      digitalWrite(slot2_l,HIGH);
      digitalWrite(slot3_l,HIGH);
      delay(1000);
      myservos.write(OPEN_ANGLE);
   count=count+1;                             //increment count
      delay(3000);
      myservos.write(CLOSE_ANGLE);
      Serial.println("Car Entered ");
  }

   if( digitalRead(s1) && !(digitalRead(s2)) && digitalRead(s3))     //3 ; slot1 and slot3 available
   {
     Serial.println("Welcome, Available: sLOT1 and slot3");
     if (! slotstatus.publish(" SLOT 1,SLOT 3 AVAILABLE"){}
      digitalWrite(slot1_l,HIGH);
      digitalWrite(slot2_l,LOW);
      digitalWrite(slot3_l,HIGH);
      delay(1000);
      myservos.write(OPEN_ANGLE);
   count=count+1;                             //increment count
      delay(3000);
      myservos.write(CLOSE_ANGLE);
      Serial.println("Car Entered ");
   }
   if(digitalRead(s1)&& digitalRead(s2)&& !(digitalRead(s3))) //4  slot1 and slot2 AVAILABLE
     {
      Serial.println("Welcome, Available: sLOT1 and slot2");
      if (! slotstatus.publish(" SLOT 1,SLOT 2 AVAILABLE"){}
      digitalWrite(slot1_l,HIGH);
      digitalWrite(slot2_l,HIGH);
      digitalWrite(slot3_l,LOW);
      delay(1000);
      myservos.write(OPEN_ANGLE);
   count=count+1;                             //increment count
      delay(3000);
      myservos.write(CLOSE_ANGLE);
      Serial.println("Car Entered ");

     }
  if(!(digitalRead(s1)) && !(digitalRead(s2)) && digitalRead(s3)) //5 ; slot3 avilable
  {

Serial.println("Welcome, Available: slot3");
if (! slotstatus.publish(" SLOT 3 AVAILABLE"){}
      digitalWrite(slot1_l,LOW);
      digitalWrite(slot2_l,LOW);
      digitalWrite(slot3_l,HIGH);
      delay(1000);
      myservos.write(OPEN_ANGLE);
   count=count+1;                             //increment count
      delay(3000);
      myservos.write(CLOSE_ANGLE);
      Serial.println("Car Entered ");

  }
  if(!(digitalRead(s1)) && digitalRead(s2) && !(digitalRead(s3))) // 6 slot2 AVAILABLE
  {
Serial.println("Welcome, Available: SLOT2 ");
if (! slotstatus.publish(" SLOT 2 AVAILABLE"){}
      digitalWrite(slot1_l,LOW);
      digitalWrite(slot2_l,HIGH);
      digitalWrite(slot3_l,LOW);
      delay(1000);
      myservos.write(OPEN_ANGLE);
   count=count+1;                             //increment count
      delay(3000);
      myservos.write(CLOSE_ANGLE);
      Serial.println("Car Entered ");

  }

  if( digitalRead(s1) && !(digitalRead(s2)) && !(digitalRead(s3))) //7 ; slot1 available
  {

Serial.println("Welcome, Available: sLOT1 ");
if (! slotstatus.publish(" SLOT 1 AVAILABLE"){}
      digitalWrite(slot1_l,HIGH);
      digitalWrite(slot2_l,LOW);
      digitalWrite(slot3_l,LOW);
      delay(1000);
      myservos.write(OPEN_ANGLE);
   count=count+1;                             //increment count
      delay(3000);
      myservos.write(CLOSE_ANGLE);
      Serial.println("Car Entered ");

  }

    if( !(digitalRead(s1)) && !(digitalRead(s2)) && !(digitalRead(s3))) //8 ; no slot available
     {
       Serial.println("Welcome, Parking Full");// No slot available
       if (! slotstatus.publish("PARKING FULL"){}
        digitalWrite(slot1_l,LOW);
        digitalWrite(slot2_l,LOW);
        digitalWrite(slot3_l,LOW);
        delay(1000);

        Serial.println("Car not Entered ");
        //next for red led
        digitalWrite(gate_red,HIGH);
        delay(100);
        digitalWrite(gate_red,LOW);
        delay(100);
        digitalWrite(gate_red,HIGH);
        delay(100);
        digitalWrite(gate_red,LOW);


     }

 }
