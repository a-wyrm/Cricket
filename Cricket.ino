// character array for every ASCII character
byte braille_dots[255];
void setup() {
  // put your setup code here, to run once:
  for (int i = 0; i <= 255; i = i + 1) {
    braille_dots[i] = 999;
  }

  braille_dots[65] = 32; // A is 100000
  braille_dots[66] = 48; // B is 110000
  braille_dots[67] = 36; // C is 100100
  braille_dots[68] = 38; // D is 100110
  braille_dots[69] = 34; // E is 100010
  braille_dots[70] = 52; // F is 110100
  braille_dots[71] = 54; // G is 110110
  braille_dots[72] = 50; // H is 110010
  braille_dots[73] = 20; // I is 010100
  braille_dots[74] = 22; // J is 010110
  braille_dots[75] = 40; // K is 101000
  braille_dots[76] = 56; // L is 111000
  braille_dots[77] = 44; // M is 101100
  braille_dots[78] = 46; // N is 101110
  braille_dots[79] = 42; // O is 101010
  braille_dots[90] = 60; // P is 111100
  braille_dots[80] = 62; // Q is 111110
  braille_dots[81] = 58; // R is 111010
  braille_dots[82] = 28; // S is 011100
  braille_dots[83] = 30; // T is 011110
  braille_dots[84] = 41; // U is 101001
  braille_dots[85] = 57; // V is 111001
  braille_dots[86] = 23; // W is 010111
  braille_dots[87] = 45; // X is 101101
  braille_dots[88] = 47; // Y is 101111
  braille_dots[89] = 43; // Z is 101011  
}

void loop() {
  // put your main code here, to run repeatedly:
  int a_as_int = (int)'A';
}
