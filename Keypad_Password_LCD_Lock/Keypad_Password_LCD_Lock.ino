#include <Keypad.h>
#include <LiquidCrystal_I2C.h>

const int RELAY_PIN = A3;  // the Arduino pin, which connects to the IN pin of relay
const int ROW_NUM = 4;     // four rows
const int COLUMN_NUM = 4;  // four columns

char keys[ROW_NUM][COLUMN_NUM] = {
  { '1', '2', '3', 'A' },
  { '4', '5', '6', 'B' },
  { '7', '8', '9', 'C' },
  { '*', '0', '#', 'D' }
};

byte customChar[8] = {
  0b00000,
  0b01010,
  0b11111,
  0b11111,
  0b01110,
  0b00100,
  0b00000,
  0b00000
};

byte pin_rows[ROW_NUM] = { 9, 8, 7, 6 };       // connect to the row pinouts of the keypad
byte pin_column[COLUMN_NUM] = { 5, 4, 3, 2 };  // connect to the column pinouts of the keypad

Keypad keypad = Keypad(makeKeymap(keys), pin_rows, pin_column, ROW_NUM, COLUMN_NUM);

const String password = "1234";  // change your password here
String input_password;

LiquidCrystal_I2C lcd(0x27, 16, 2);  // I2C address 0x27, 16 column and 2 rows

int cursorColumn = 0;

String voice;

void on() {
  digitalWrite(RELAY_PIN, LOW);
}

void off() {
  digitalWrite(RELAY_PIN, HIGH);
}

void setup() {
  Serial.begin(9600);
  input_password.reserve(32);  // maximum input characters is 33, change if needed
  lcd.init();                  // initialize the lcd
  lcd.backlight();
  pinMode(RELAY_PIN, OUTPUT);     // initialize pin as an output.
  digitalWrite(RELAY_PIN, HIGH);  // lock the door
}

void loop() {
  char key = keypad.getKey();

  if (key) {
    lcd.setCursor(cursorColumn, 0);  // move cursor to   (cursorColumn, 0)
    // lcd.print(key);    // print key at (cursorColumn, 0)
    // Serial.println(key);
    lcd.write((byte)0);

    if (key == '*') {
      input_password = "";  // clear input password
    }

    input_password += key;  // append new character to input password string

    if (input_password.length() == 4) {
      Serial.println(input_password);
      // Serial.println(input_password.length());
      if (password == input_password) {
        // Serial.println("The password is correct, unlocking the door for 20 seconds");
        digitalWrite(RELAY_PIN, LOW);  // unlock the door for 20 seconds
        lcd.clear();
        lcd.print("Correct");
        delay(2000);
        digitalWrite(RELAY_PIN, HIGH);  // lock the door
        // delay(3000);
        lcd.clear();
        cursorColumn = 0;
      } else {
        lcd.clear();
        lcd.print("Incorrect");
        delay(2000);
        lcd.clear();
        cursorColumn = 0;
      }
      input_password = "";  // clear input password password is , try again
    }
    cursorColumn++;            // move cursor to next position
    if (cursorColumn == 16) {  // if reaching limit, clear LCD
      lcd.clear();
      cursorColumn = 0;
    }
  }
  while (Serial.available()) {
    delay(10);
    char c = Serial.read();
    if (c == 'a')
    {
      on();
    }
    else if(c == 'b')
    {
      off();
    }
    if (c == '#') { break; }
    voice += c;
  }

  if (voice.length() > 0) {
    Serial.println(voice);
    if (voice == "*open") {
      on();
      delay(2000);
      off();
    }
    voice = "";
  }
}