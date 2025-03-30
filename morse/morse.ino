const int OutPin = 5;
const int TimeUnit = 100;


void setup() {
  pinMode(OutPin, OUTPUT);
}

void dot() {
  digitalWrite(OutPin, HIGH);
  delay(TimeUnit);
  digitalWrite(OutPin, LOW);
  delay(TimeUnit);
}

void dash() {
  digitalWrite(OutPin, HIGH);
  delay(3 * TimeUnit);
  digitalWrite(OutPin, LOW);
  delay(TimeUnit);
}

void space_letter() {
  // one time unit delay is already present in the signal
  // so add up two more to make three in total
  delay(2 * TimeUnit);
}

void space_word() {
  // one time unit delay is already present in the signal
  // so add up six more to make seven in total
  delay(6 * TimeUnit);
}

void a() { dot(); dash(); }
void b() { dash(); dot(); dot(); dot(); }
void c() { dash(); dot(); dash(); dot(); }
void d() { dash(); dot(); dot(); }
void e() { dot(); }
void f() { dot(); dot(); dash(); dot(); }
void g() { dash(); dash(); dot(); }
void h() { dot(); dot(); dot(); dot(); }
void i() { dot(); dot(); }
void j() { dot(); dash(); dash(); dash(); }
void k() { dash(); dot(); dash(); }
void l() { dot(); dash(); dot(); dot(); }
void m() { dash(); dash(); }
void n() { dash(); dot(); }
void o() { dash(); dash(); dash(); }
void p() { dot(); dash(); dash(); dot(); }
void q() { dash(); dash(); dot(); dash(); }
void r() { dot(); dash(); dot(); }
void s() { dot(); dot(); dot(); }
void t() { dash(); }
void u() { dot(); dot(); dash(); }
void v() { dot(); dot(); dot(); dash(); }
void w() { dot(); dash(); dash(); }
void x() { dash(); dot(); dot(); dash(); }
void y() { dash(); dot(); dash(); dash(); }
void z() { dash(); dash(); dot(); dot(); }
void _0() { dash(); dash(); dash(); dash(); dash(); }
void _1() { dot(); dash(); dash(); dash(); dash(); }
void _2() { dot(); dot(); dash(); dash(); dash(); }
void _3() { dot(); dot(); dot(); dash(); dash(); }
void _4() { dot(); dot(); dot(); dot(); dash(); }
void _5() { dot(); dot(); dot(); dot(); dot(); }
void _6() { dash(); dot(); dot(); dot(); dot(); }
void _7() { dash(); dash(); dot(); dot(); dot(); }
void _8() { dash(); dash(); dash(); dot(); dot(); }
void _9() { dash(); dash(); dash(); dash(); dot(); }

// the SOS signal is not sent as three individual letters with spaces between the letters
// instead the SOS signal is sent as a single character
void sos() {
  s();
  o();
  s();
  space_letter();
}

void loop() {
  sos();
}
