int M1driverPUL = 12;    // motor1 Pulse pin
int M1driverDIR = 11;    // motor1 Direection pin


int M2driverPUL = 10;    // motor2 Pulse pin
int M2driverDIR = 9;    // motor2 Direection pin

int M3driverPUL = 8;    // motor2 Pulse pin
int M3driverDIR = 7;    // motor2 Direection pin

int M4driverPUL = 6;    // motor2 Pulse pin
int M4driverDIR = 5;    // motor2 Direection pin

int M5driverPUL = 4;    // motor2 Pulse pin
int M5driverDIR = 3;    // motor2 Direection pin

char c;
int i,j,k,l;
int full_cycle=400;
int half_cycle=200;
int stepsPerTurn = 200;
int RPM = 160;
float stepsPerSecond = (stepsPerTurn*RPM)/60;
float waitInMilliseconds = (1/stepsPerSecond)*1000;

void setup() {
//  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(9600);
  pinMode (M1driverPUL, OUTPUT);
  pinMode (M1driverDIR, OUTPUT);
  pinMode (M2driverPUL, OUTPUT);
  pinMode (M2driverDIR, OUTPUT);
  pinMode (M3driverPUL, OUTPUT);
  pinMode (M3driverDIR, OUTPUT);
  pinMode (M4driverPUL, OUTPUT);
  pinMode (M4driverDIR, OUTPUT);
  pinMode (M5driverPUL, OUTPUT);
  pinMode (M5driverDIR, OUTPUT);
  Serial.println("motor state:initialize");
  delay(200);
  
}

void loop() {
   while (Serial.available() > 0)
  c = Serial.read();
  {
    if (c=='A')
      {
      Serial.println("motor1 clkwise");
      digitalWrite(M1driverDIR,LOW);
      for(i=0;i<full_cycle;i++)
        {
        digitalWrite(M1driverPUL,HIGH);
        delay(waitInMilliseconds);
        digitalWrite(M1driverPUL,LOW);
        delay(waitInMilliseconds);
        }
      }
        else if (c=='B')
          {
          Serial.println("motor1 anticlkwise");
          digitalWrite(M1driverDIR,HIGH);
          for(j=0;j<full_cycle;j++)
              {
              digitalWrite(M1driverPUL,HIGH);
              delay(waitInMilliseconds);
              digitalWrite(M1driverPUL,LOW);
              delay(waitInMilliseconds);
              }
           }
            else if (c=='C')
                { 
                  Serial.println("motor2 clkwise");
                  digitalWrite(M2driverDIR,HIGH);
                  for(k=0;k<full_cycle;k++)
                      {
                      digitalWrite(M2driverPUL,HIGH);
                      delay(waitInMilliseconds);
                      digitalWrite(M2driverPUL,LOW);
                      delay(waitInMilliseconds);
                      }
                 }   
                  else if (c=='D')
                    { 
                      Serial.println("motor2 anticlkwise");  
                      digitalWrite(M2driverDIR,LOW);
                      for(l=0;l<full_cycle;l++)
                        {
                        digitalWrite(M2driverPUL,HIGH);
                        delay(waitInMilliseconds);
                        digitalWrite(M2driverPUL,LOW);
                        delay(waitInMilliseconds);
                        }
                    }   

                      else if (c=='E')
                        { 
                          Serial.println("motor3 clkwise");
                          digitalWrite(M3driverDIR,HIGH);
                          for(k=0;k<full_cycle;k++)
                            {
                            digitalWrite(M3driverPUL,HIGH);
                            delay(waitInMilliseconds);
                            digitalWrite(M3driverPUL,LOW);
                            delay(waitInMilliseconds);
                            }
                        }   
                          else if (c=='F')
                            { 
                              Serial.println("motor3 anticlkwise");  
                              digitalWrite(M3driverDIR,LOW);
                              for(l=0;l<full_cycle;l++)
                                {
                                digitalWrite(M3driverPUL,HIGH);
                                delay(waitInMilliseconds);
                                digitalWrite(M3driverPUL,LOW);
                                delay(waitInMilliseconds);
                                }
                            }  

                              else if (c=='G')
                                { 
                                  Serial.println("motor4 clkwise");
                                  digitalWrite(M4driverDIR,HIGH);
                                  for(k=0;k<full_cycle;k++)
                                    {
                                    digitalWrite(M4driverPUL,HIGH);
                                    delay(waitInMilliseconds);
                                    digitalWrite(M4driverPUL,LOW);
                                    delay(waitInMilliseconds);
                                    }
                                }   
                                  else if (c=='H')
                                    { 
                                      Serial.println("motor4 anticlkwise");  
                                      digitalWrite(M4driverDIR,LOW);
                                      for(l=0;l<full_cycle;l++)
                                        {
                                        digitalWrite(M4driverPUL,HIGH);
                                        delay(waitInMilliseconds);
                                        digitalWrite(M4driverPUL,LOW);
                                        delay(waitInMilliseconds);
                                        }
                                      }   

                                       else if (c=='I')
                                          { 
                                            Serial.println("motor5 clkwise");
                                            digitalWrite(M5driverDIR,HIGH);
                                            for(k=0;k<full_cycle;k++)
                                              {
                                              digitalWrite(M5driverPUL,HIGH);
                                              delay(waitInMilliseconds);
                                              digitalWrite(M5driverPUL,LOW);
                                              delay(waitInMilliseconds);
                                              }
                                           }   
                                              else if (c=='J')
                                                { 
                                                  Serial.println("motor5 anticlkwise");  
                                                  digitalWrite(M5driverDIR,LOW);
                                                  for(l=0;l<full_cycle;l++)
                                                    {
                                                    digitalWrite(M5driverPUL,HIGH);
                                                    delay(waitInMilliseconds);
                                                    digitalWrite(M5driverPUL,LOW);
                                                    delay(waitInMilliseconds);
                                                    }
                                                }   
}
}
