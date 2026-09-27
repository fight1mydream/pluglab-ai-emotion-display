# PLUGLAB AI Emotion Display

2026년 10월 1일 수업용 GitHub Pages 독립 배포 프로젝트입니다.

두 가지 제어 방식을 한 화면에서 선택할 수 있습니다.

1. **버튼으로 표정 선택**: 웃음·졸림·놀람·중립 버튼을 눌러 MAX7219에 바로 표시합니다.
2. **카메라 AI 인식**: MediaPipe Face Landmarker의 표정 계수를 이용해 표정을 분류하고 MAX7219에 표시합니다.

두 방식 모두 Web Serial을 이용해 Arduino UNO에 `SMILE`, `SLEEPY`, `SURPRISE`, `NEUTRAL` 명령을 전송합니다.

## 준비물

- Arduino UNO R3
- MAX7219 8×8 LED 매트릭스 1개
- USB 케이블
- Chrome 또는 Edge
- Arduino IDE와 LedControl 라이브러리

## 배선

| MAX7219 | Arduino UNO |
|---|---|
| VCC | 5V |
| GND | GND |
| DIN | D7 |
| CS | D6 |
| CLK | D5 |

## 실행 순서

1. Arduino IDE에서 arduino/pluglab_emotion_max7219.ino를 엽니다.
2. LedControl 라이브러리를 설치하고 UNO에 업로드합니다.
3. Arduino IDE의 시리얼 모니터를 닫습니다.
4. 웹앱을 HTTPS 또는 localhost에서 엽니다.
5. USB 연결에서 Arduino 포트를 선택합니다.
6. 상단에서 `버튼으로 표정 선택` 또는 `카메라 AI 인식`을 선택합니다.
7. 카메라 방식을 사용할 때만 카메라 시작과 인식 시작을 누릅니다.

## 주의

- Web Serial은 HTTPS 또는 localhost에서 지원됩니다.
- Safari와 Firefox에서는 Web Serial이 작동하지 않을 수 있습니다.
- 실제 감정이나 건강 상태를 판단하는 앱이 아닙니다.

## GitHub Pages 배포

1. GitHub에서 Public 저장소 `pluglab-ai-emotion-display`를 만듭니다.
2. 이 폴더의 파일과 폴더를 저장소 최상위에 업로드합니다.
3. 저장소의 **Settings → Pages**로 이동합니다.
4. **Build and deployment**에서 `Deploy from a branch`를 선택합니다.
5. Branch는 `main`, 폴더는 `/(root)`를 선택하고 저장합니다.
6. 배포 후 `https://GitHub아이디.github.io/pluglab-ai-emotion-display/`로 접속합니다.

수업 전 점검 방법은 `CLASS_CHECKLIST.md`를 확인하세요.
