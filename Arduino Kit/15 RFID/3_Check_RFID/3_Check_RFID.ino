#include <SPI.h>
#include <MFRC522.h>
#define SS_PIN 10
#define RST_PIN 9
#define LED 8
byte readCard[4];
String tag_UID = "29A8171B";  // Replace this with the UID of your tag!!!
String tagID = "";
MFRC522 mfrc522(SS_PIN, RST_PIN); // Create MFRC522 instance
void setup()
{ 
  pinMode(LED, OUTPUT);// initialize digital pin LED_BUILTIN as an output.
  pinMode(4, OUTPUT);
  digitalWrite(LED, LOW);    // turn the LED off by making the voltage LOW
  SPI.begin(); // SPI bus
  mfrc522.PCD_Init(); // Initialise MFRC522
}
void loop()
{
  //Wait until new tag is available
  while (readID())
  {
    if (tagID == tag_UID)
    {
      digitalWrite(LED, !digitalRead(LED));  // Turn on or off the onboard led
      digitalWrite(4, HIGH);
      delay(100);
      digitalWrite(4, LOW);
      delay(100);
      digitalWrite(4, HIGH);
      delay(100);
      digitalWrite(4, LOW);
      delay(100);
    }
    else{
      digitalWrite(4, HIGH);
      delay(1500);
      digitalWrite(4, LOW);
    }
  }
}
  //Read new tag if available
boolean readID()
  {
    //Check if a new tag is detected or not. If not return.
    if ( ! mfrc522.PICC_IsNewCardPresent())
    {
      return false;
    }
    //Check if a new tag is readable or not. If not return.
    if ( ! mfrc522.PICC_ReadCardSerial())
    {
      return false;
    }
    tagID = "";
    // Read the 4 byte UID
    for ( uint8_t i = 0; i < 4; i++)
    {
      //readCard[i] = mfrc522.uid.uidByte[i];
      tagID.concat(String(mfrc522.uid.uidByte[i], HEX)); // Convert the UID to a single String
    }
    tagID.toUpperCase();
    mfrc522.PICC_HaltA(); // Stop reading
    return true;
  }