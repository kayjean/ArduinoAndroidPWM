int ledout0=0;
int ledout1=2;
int ledout2=3;
int ledout3=4;
int ledout4=5;
int ledout5=6;
int ledout6=7;
int ledout7=8;
int ledout8=9;
int ledontime=100;
void setup()
{
pinMode(ledout0, OUTPUT);
pinMode(ledout1, OUTPUT);
pinMode(ledout2, OUTPUT);
pinMode(ledout3, OUTPUT);
pinMode(ledout4, OUTPUT);
pinMode(ledout5, OUTPUT);
pinMode(ledout6, OUTPUT);
pinMode(ledout7, OUTPUT);
pinMode(ledout8, OUTPUT);
digitalWrite(ledout0, HIGH);//HIGH LED TURN ON
digitalWrite(ledout1, LOW);//HIGH LED TURN OFF
digitalWrite(ledout2, LOW);
digitalWrite(ledout3, LOW);
digitalWrite(ledout4, LOW);
digitalWrite(ledout5, LOW);
digitalWrite(ledout6, LOW);
digitalWrite(ledout7, LOW);
digitalWrite(ledout8, LOW);
}
void loop()
{
ledontime=500;  

digitalWrite(ledout0, LOW);//HIGH LED TURN OFF  
digitalWrite(ledout1, HIGH);//HIGH LED TURN ON

delay(ledontime);
digitalWrite(ledout1, LOW);//HIGH LED TURN OFF  
digitalWrite(ledout2, HIGH);//HIGH LED TURN ON
delay(ledontime);

digitalWrite(ledout2, LOW);//HIGH LED TURN OFF  
digitalWrite(ledout3, HIGH);//HIGH LED TURN ON
delay(ledontime);

digitalWrite(ledout3, LOW);//HIGH LED TURN OFF  
digitalWrite(ledout4, HIGH);//HIGH LED TURN ON
delay(ledontime);

digitalWrite(ledout4, LOW);//HIGH LED TURN OFF  
digitalWrite(ledout5, HIGH);//HIGH LED TURN ON
delay(ledontime);

digitalWrite(ledout5, LOW);//HIGH LED TURN OFF  
digitalWrite(ledout6, HIGH);//HIGH LED TURN ON
delay(ledontime);

digitalWrite(ledout6, LOW);//HIGH LED TURN OFF  
digitalWrite(ledout7, HIGH);//HIGH LED TURN ON
delay(ledontime);

digitalWrite(ledout7, LOW);//HIGH LED TURN OFF  
digitalWrite(ledout8, HIGH);//HIGH LED TURN ON
delay(ledontime);

digitalWrite(ledout8, LOW);//HIGH LED TURN OFF  
digitalWrite(ledout0, HIGH);//HIGH LED TURN ON
delay(ledontime);


}
