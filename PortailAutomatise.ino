//#################################
//      © Quentin Montessuis      #
//      2SN2 - LPP St Joseph      #
//#################################

// Le code comprend le capteur de fin de course en commentaire.

void setup() {
  pinMode(8, OUTPUT); //ouverture
  pinMode(9, OUTPUT); //fermeture
  pinMode(5, INPUT); //bp
  pinMode(6, OUTPUT); //LED
//  pinMode(4, INPUT); //capteur fin de course
}

void loop() {
//appuie bp
if (digitalRead( 5))
{
//led
digitalWrite( 6 , HIGH);
//ouverture
digitalWrite( 8 , HIGH);
//if (digitalRead( 4))
//{
//digitalWrite( 8 , LOW);
//delay( 5000 )
//digitalWrite( 9 , HIGH);
//}
delay( 500 );
digitalWrite( 8 , LOW);
//atente
delay( 5000 );
//fermeture
digitalWrite( 9 , HIGH);
delay( 500 );
digitalWrite( 9 , LOW);
//led
digitalWrite( 6 , LOW);
}
}
