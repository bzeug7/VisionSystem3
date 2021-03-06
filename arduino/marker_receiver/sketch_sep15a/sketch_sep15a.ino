#include <SoftwareSerial.h>
#include "enes100.h"

//Declare the software serial which on pins 8,9 which
//are connected to the RF module tx and rx.
SoftwareSerial sSerial(8,9);

//Declare an enes100::RfClient which is the interface for
//receiving markers and sending messages to the vision system.
//  To use a hardware serial connection:
//    enes100::RfClient<HardwareSerial rf(&Serial1);
//                                            ^
//                              whatever serial is used
enes100::RfClient<SoftwareSerial> rf(&sSerial);

//Declare an enes100::Marker.  This marker will store the id,
//x, y, theta, and time values of a received marker.
enes100::Marker marker;

void setup() {
  //Configure pin states for the RF module.
  pinMode(7,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(12,OUTPUT);
  digitalWrite(7, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(12, LOW);
  
  //Initialize the software and hardware serial
  sSerial.begin(9600);
  Serial.begin(9600);
  
  delay(500);
  
  //Reset the state of the server, and send a message indicating
  //our status.
  rf.resetServer();
  rf.sendMessage("Team One Connected.");
}

//Every 100ms attempt to receive marker 5 from the server.
//If marker 5 is received with an x coordinate greater than
//1 meter, report to the system that we reached the right side
//of the arena.
void loop() {
  delay(100);
  //rf.ReceiveMarker returns true if a marker was received
  //before timing out, and false otherwise.
  if(rf.receiveMarker(&marker, 5)){
    Serial.println(marker.x);
    if(marker.x >= 1.0) {
      rf.sendMessage("t1 reached right side");
    }
  }
}
