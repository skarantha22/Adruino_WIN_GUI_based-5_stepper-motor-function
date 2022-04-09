import controlP5.*; //import ControlP5 library
import processing.serial.*;

Serial port;

ControlP5 cp5; //create ControlP5 object

void setup(){ //Same as setup in arduino
  
  size(500, 500);                          //Window size, (width, height)
  port = new Serial(this, "COM11", 9600);   //Change this to your port
  
  cp5 = new ControlP5(this);
  
  cp5.addButton("M1C")  //The button
    .setPosition(100, 100)  //x and y coordinates of upper left corner of button
    .setSize(50, 50)      //(width, height)
  ;     
  
  cp5.addButton("M1A")  //The button
    .setPosition(100, 160)  //x and y coordinates of upper left corner of button
    .setSize(50, 50)      //(width, height)
  ;     
cp5.addButton("M2C")  //The button
    .setPosition(160, 100)  //x and y coordinates of upper left corner of button
    .setSize(50, 50)      //(width, height)
  ;     
cp5.addButton("M2A")  //The button
    .setPosition(160, 160)  //x and y coordinates of upper left corner of button
    .setSize(50, 50)      //(width, height)
  ;  
  cp5.addButton("M3C")  //The button
    .setPosition(220, 100)  //x and y coordinates of upper left corner of button
    .setSize(50, 50)      //(width, height)
  ;     
cp5.addButton("M3A")  //The button
    .setPosition(220, 160)  //x and y coordinates of upper left corner of button
    .setSize(50, 50)      //(width, height)
  ; 
  cp5.addButton("M4C")  //The button
    .setPosition(280, 100)  //x and y coordinates of upper left corner of button
    .setSize(50, 50)      //(width, height)
  ;     
cp5.addButton("M4A")  //The button
    .setPosition(280, 160)  //x and y coordinates of upper left corner of button
    .setSize(50, 50)      //(width, height)
  ;  
  cp5.addButton("M5C")  //The button
    .setPosition(340, 100)  //x and y coordinates of upper left corner of button
    .setSize(50, 50)      //(width, height)
  ;     
cp5.addButton("M5A")  //The button
    .setPosition(340, 160)  //x and y coordinates of upper left corner of button
    .setSize(50, 50)      //(width, height)
  ;  
  
cp5.addButton("stop")  //The button
    .setPosition(410, 130)  //x and y coordinates of upper left corner of button
    .setSize(50, 50)      //(width, height)
  ;  

}

void draw(){  //Same as loop in arduino

  background(150, 0 , 150); //Background colour of window (r, g, b) or (0 to 255)
    
}

void M1C(){
  
  port.write('A');
  
}
void M1A(){
  
  port.write('B');
  
}
void M2C(){
  
  port.write('C');
  
}
void M2A(){
  
  port.write('D');
}
  
  void M3C(){
  
  port.write('E');
  
}
void M3A(){
  
  port.write('F');
  
}
void M4C(){
  
  port.write('G');
  
}
void M4A(){
  
  port.write('H');
}
  void M5C(){
  
  port.write('I');
  
}
void M5A(){
  
  port.write('J');
  
}
void stop(){
  
  port.write('K');
  
}
