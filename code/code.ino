#include <LiquidCrystal_I2C.h>
const int buttonPin1 = 0;     // the number of the pushbutton pin
const int buttonPin2 = 1;
const int buttonPin3 = 6;
const int buttonPin4 = 7;
const int buttonPin5 = 8;

const int ledPin =  13;      // the number of the LED pin
//const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal_I2C lcd(0x3F, 2, 1, 0, 4, 5, 6, 7, 3, POSITIVE);

// variables will change:
int buttonState1 = 0 && 1;         // variable for reading the pushbutton status
int buttonState2 = 0 && 1;
int buttonState3 = 0;
int buttonState4 = 0 && 1;
int buttonState5 = 0 && 1;
void setup() {
  pinMode(buttonState1, INPUT);
  pinMode(buttonState2, INPUT);
  pinMode(buttonState3, INPUT);
  pinMode(buttonState4, INPUT);
  pinMode(buttonState5, INPUT);
  pinMode(ledPin, OUTPUT);
  lcd.begin(16, 2);
}
void loop()
{
  buttonState1 = digitalRead(buttonPin1);
  buttonState2 = digitalRead(buttonPin2);
  buttonState3 = digitalRead(buttonPin3);
  buttonState4 = digitalRead(buttonPin4);
  buttonState5 = digitalRead(buttonPin5);
  {
    if ((buttonState1 == HIGH && buttonState2 == HIGH && buttonState3 == HIGH && buttonState4 == HIGH && buttonState5 == LOW))   {
      lcd.print("A");
    }
    delay(500);
          if ((buttonState1 == HIGH && buttonState2 == HIGH && buttonState3 == HIGH && buttonState4 == HIGH && buttonState5 == LOW)) 
                {
                digitalWrite(ledPin,LOW);
                lcd.print("HOW ARE YOU ?");
                
                }
    else if (((buttonState1 == LOW && buttonState2 == LOW && buttonState3 == LOW  && buttonState4 == LOW  && buttonState5 == HIGH) ))
    {
      digitalWrite(ledPin, LOW);
      lcd.print("B");
    }
    else if (((buttonState1 == LOW && buttonState2 == LOW && buttonState3 == LOW && buttonState4 == HIGH && buttonState5 == LOW ) ))
    {
      lcd.print("D");
    }
    else if ((buttonState1 == LOW  && buttonState2 == LOW && buttonState3 == LOW && buttonState4 == HIGH && buttonState5 == HIGH  ))
    {
      digitalWrite(ledPin, LOW);
      lcd.print("F");
    }
    else if (((buttonState1 == HIGH && buttonState2 == HIGH && buttonState3 == LOW && buttonState4 == LOW && buttonState5 == HIGH ) ))
    {
      lcd.print("H");
    }
    else if (((buttonState1 == HIGH && buttonState2 == HIGH && buttonState3 == HIGH && buttonState4 == LOW && buttonState5 == LOW ) ))
    {
      lcd.print("L");
    }
    else if (((buttonState1 == LOW && buttonState2 == HIGH && buttonState3 == HIGH && buttonState4 == HIGH && buttonState5 == LOW) ))
    {
      lcd.print("Y");
    }
    else if (((buttonState1 == HIGH && buttonState2 == LOW && buttonState3 == LOW && buttonState4 == LOW && buttonState5 == HIGH) ))
    {
      lcd.print("W");
    }
    else if (((buttonState1 == HIGH && buttonState2 == HIGH && buttonState3 == HIGH && buttonState4 == HIGH && buttonState5 == HIGH) ))
    {
      lcd.print("FULL STOP");
    }

    else {
      digitalWrite(ledPin, HIGH);
      lcd.print("NO OUT");
    }
  }
}
