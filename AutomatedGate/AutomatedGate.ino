//######################################################################
//                        Quentin Montessuis                           #
//                        2SN2 - LPP St Joseph                         #
//    Creative Commons Attribution-NonCommercial 4.0 International     #
//######################################################################

// The code includes the limit switch in comment. Read the README file to enable it

void setup() {
  pinMode(8, OUTPUT); //opening
  pinMode(9, OUTPUT); //closing
  pinMode(5, INPUT); //Push Button
  pinMode(6, OUTPUT); //LED
//  pinMode(4, INPUT); //limit switch
}

void loop() {
//press push button
if (digitalRead( 5))
{
//led
digitalWrite( 6 , HIGH);
//opening
digitalWrite( 8 , HIGH);
//if (digitalRead( 4))
//{
//digitalWrite( 8 , LOW);
//delay( 5000 )
//digitalWrite( 9 , HIGH);
//}
delay( 500 );
digitalWrite( 8 , LOW);
//Waiting
delay( 5000 );
//closing
digitalWrite( 9 , HIGH);
delay( 500 );
digitalWrite( 9 , LOW);
//led
digitalWrite( 6 , LOW);
}
}
