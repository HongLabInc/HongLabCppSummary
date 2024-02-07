# [홍정모 연구소](https://honglab.co.kr/)

- 온라인 강의노트에는 참고자료에 "[홍정모 연구소](https://honglab.co.kr/)"를 꼭 적어주세요.
- 다른 학생들의 공부를 위해서 실습 문제의 정답이나 풀이를 온라인에 공개하지 마세요.

## [코테용 C++ 요약 강의](https://honglab.co.kr/courses/cppsummary) FREE

- [파이썬 추월코스](https://honglab.co.kr/courses/python)로 약간의 프로그래밍 연습을 해보신 분들이 빠르게 C++을 터득하고 자료구조/알고리즘 공부를 시작하실 수 있도록 도와드리는 실습 중심 **요약** 강의입니다. 따배씨++와는 스타일이 완전히 다르니 오해 없으시길 바랍니다.
- 하나하나 다 설명해주는 방식이 아니라 머리를 깨워드리는 강의입니다. 어렵다거나 뭔가 이상하다면 혼자 고민하지 말고 [디스코드](https://discord.gg/kgR9xJkbsV)로 오세요. (주의: 예의 없는 행위시 경고 없이 즉시 영구 퇴장)
- 코테 준비 요령, 강의 목표, 환경 설정 ([유튜브 영상](https://youtu.be/UqCZda8DLGc))

## 예제 사용 방법
- **한글 사용이 어렵다면 VS2022나 enlish 폴더의 예제들을 사용하세요.**
- 한글 입출력이 없는 버전은 english 폴더 아래에 있습니다.
- VS2022: HongLabCppSummary.sln 더블클릭
- VSCode: 해당되는 환경의 .vscode_XXX 폴더를 .vscode로 변경 (강의 영상에 설명 있어요)

## 맥 사용 추가 안내
- 2024년 2월 6일 현재 VSCode가 1.86.0로 업데이트 되면서 문제가 생긴 것 같습니다.
- 현재 확인한 가장 간단한 해결책은 "C/C++ Runner v9.4.7 (제작자 franneck94)" 확장을 사용하는 것입니다. 사용법은 확장 자체 설명 영상 보시면 간단합니다.
- .vscode 폴더를 삭제한 후에 C/C++ Runner 확장 설치 후에 나타나는 하단의 톱니바퀴 아이콘을 클릭하면 .vscode 폴더가 다시 생기면서 .json 설정파일들이 만들어집니다. 이 파일들 안에 c++17 설정만 해주면 됩니다.

settings.json
```
"C_Cpp_Runner.cppStandard": "c++17",
```
c_cpp_properties.json
```
"cppStandard": "c++17",
```
launch.json
```
"args": ["-std=c++17"],
```

- 그 외에 XCode를 설치했는데 필수인지는 확인을 안해봤습니다. VCode 터미널에 XCode 사용 동의하라고 뜨면서 사용자 권한으로 다시하라고 명령어를 안내해줄텐데 맥 자체 터미널을 만들어서 그 명령어대로 실행하고 동의하면 됩니다.
- 혹시 더 좋은 방법 발견하신 분들은 [디스코드](https://discord.gg/kgR9xJkbsV)로 제보 부탁드립니다. 
