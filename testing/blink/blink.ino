int ledPin = 13; // 把 LED 接上 PWM pin3
int ledPin2 = 12; // 把 LED 接上 PWM pin3
void setup()
{
pinMode(ledPin, OUTPUT); // 設定 pin 3 為輸出
pinMode(ledPin2, OUTPUT); // 設定 pin 3 為輸出
}
// 下面這個 loop 會讓 LED 燈由暗變為一半亮度，最後變成最大亮度
void loop()
{
  for( int i = 0 ; i < 240 ;  )
  {
analogWrite(ledPin, i);  // LED 不亮
analogWrite(ledPin2, i);  // LED 不亮
delay (200);
i += 10;
  }
}
