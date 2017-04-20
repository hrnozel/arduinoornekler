/*Hello
 * This example for how to long data (4 bit than more) write into eeprom and read
 * Attention!
 * Your Arduino's eeprom lifecycle can changed, 
 * you would look your arduino's datasheet
 */

#include <EEPROMex.h>

int addr = 0;
uint32_t phoneID=5331231111;
uint32_t readVal=0;
void setup() {
  Serial.begin(9600);
}

void loop() {
 
    
  EEPROM.writeLong(addr,phoneID);
  delay(1000);
 
  readVal=EEPROM.readLong(addr);
  Serial.print("Your mom phone number: ");
  Serial.println(readVal);
  delay(10000);
  
}
