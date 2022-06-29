/**********************************************************************************
 * TITULO: RShieldTester.ino
 * AUTOR: Jhimmy Astoraque
 * DESCRIPCION: Este es un sketch para probar el correcto funcionamiento de los 2 relays del shield Jadsa
 * CANAL YOUTUBE: https://www.youtube.com/c/jadsatv
 * © 2022
 * *******************************************************************************/

const uint8_t k1 = 2;
const uint8_t k2 = 4;

void setup()
{
	Serial.begin(115200);

    pinMode(k1, OUTPUT);
    pinMode(k2, OUTPUT);
}

void loop()
{
	digitalWrite(k1, HIGH);
	digitalWrite(k2, LOW);
    delay(1500);
	digitalWrite(k1, LOW);
	digitalWrite(k2, HIGH);
    delay(1500);
}
