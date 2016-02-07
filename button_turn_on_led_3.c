//pic12f683
// https://www.youtube.com/watch?v=hkW5O5FCzMg
// Button turn on LED
//Binary converter: http://www.binaryconvert.com/convert_signed_char.html

unsigned char i = 0;

void main(void)
{
 TRISIO = 0b00000010; // TRISIO = 0x02;
 CMCON0 = 0b00000111; //Shutting of comparative module
 ANSEL = 0;        // tells micrcontroller if the port is analog or digital
 
 GPIO.B0 = 1; // Turning on port 0
 
    while(1==1)
    {
     i = GPIO.B1;

     if(i == 0)
     {
      GPIO.B2 = 0;
     }
     if(i == 1)
     {
     GPIO.B2 = 1;
     }
     Delay_ms(500);
    }
}
