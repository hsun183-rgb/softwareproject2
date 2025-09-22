void setup() {
  pinMode(7, OUTPUT);
}

void loop() {
  // 1초 동안 LED 켜기
  digitalWrite(7, HIGH);
  delay(1000);
  digitalWrite(7, LOW);
  delay(1000);

  // 5번 깜빡이기 (while 사용)
  int count = 0;
  while (count < 5) {
    digitalWrite(7, HIGH);  // LED 켜기
    delay(100);                  // 100ms 대기
    digitalWrite(7, LOW);   // LED 끄기
    delay(100);                  // 100ms 대기
    count++;
  }

  // LED 확실히 끄기
  digitalWrite(7, LOW);

  // 여기서 무한 루프 (LED는 꺼진 채로 유지)
  while (1) {
    // 아무 것도 하지 않음
  }
}
