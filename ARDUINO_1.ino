
int input;
int byte1;
int byte2;

void setup() {
  Serial.begin(230400);           //  setup serial
}

void loop() {
  input = analogRead(A0);
  byte1 = 128;
  byte2 = compile(input);
  write();

  input = analogRead(A1);
  byte1 = 144;
  byte2 = compile(input);
  write();

  input = analogRead(A2);
  byte1 = 160;
  byte2 = compile(input);
  write();

  input = analogRead(A3);
  byte1 = 176;
  byte2 = compile(input);
  write();

  input = analogRead(A4);
  byte1 = 192;
  byte2 = compile(input);
  write();

  input = analogRead(A5);
  byte1 = 208;
  byte2 = compile(input);
  write();

  input = analogRead(A6);
  byte1 = 224;
  byte2 = compile(input);
  write();

  input = analogRead(A7);
  byte1 = 240;
  byte2 = compile(input);
  write();
}

int compile(int bits) {
  while (bits > 127)
  {
    bits = bits - 128;
    byte1 = byte1 + 1;
  }
  return bits;
}


void write()
{
  Serial.write(byte2);
  Serial.write(byte1);

}
