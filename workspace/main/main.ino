//arduino 1.8.8
//choose mega ( even it is frearduino V2.0
//copy two directory to C:\Program Files (x86)\Arduino\libraries
//USB_Host_Shield and AndroidAccessory


#include <Max3421e.h>
 #include <Usb.h>
 #include <AndroidAccessory.h>
 #define  LED_PIN  13
 #define  LED_PIN2  14
 #define  LED_PIN3  15
 AndroidAccessory acc("Manufacturer",
   "Model",
   "Description",
   "1.0",
   "http://example.com",
                 "0000000012345678");

 int brightness = 0;

 void setup()
 {
   // set communiation speed
   Serial.begin(115200);
   pinMode(LED_PIN, OUTPUT);
   pinMode(LED_PIN2, OUTPUT);
   pinMode(LED_PIN3, OUTPUT);      
   acc.powerOn();
 }
  
 void loop()
 {
   byte msg[4];
   if (acc.isConnected()) {
     int len = acc.read(msg, sizeof(msg), 1); // read data into msg variable
     if (len > 0) {
       if (msg[0] == 1) // compare received data
       {
         //digitalWrite(LED_PIN,HIGH); // turn on light
         brightness = 255*msg[1]/100;
         analogWrite(LED_PIN, brightness);

         brightness = 255*msg[2]/100;
         analogWrite(LED_PIN2, brightness);

         brightness = 255*msg[3]/100;
         analogWrite(LED_PIN3, brightness);
         
       }
       else
         digitalWrite(LED_PIN,LOW); // turn off light
         digitalWrite(LED_PIN2,LOW); // turn off light
         digitalWrite(LED_PIN3,LOW); // turn off light
     }
   } 
   else
   {
     digitalWrite(LED_PIN , LOW); // turn off light
     digitalWrite(LED_PIN2 , LOW); // turn off light
     digitalWrite(LED_PIN3 , LOW); // turn off light
   }
 }
 
