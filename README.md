# Programming Training
> 프로그래밍 및 실습 - 권민혜 교수님

### Directory Structure
```
week#
├── NOTEBOOK
├── ...
├── code
│   ├── CODE
│   └── ...
└── lecture-note
    ├── LECTURENOTE_PDF
    └── ...
```

* 모든 C 코드들은 `Ubuntu 20.04 LTS`, `gcc` 환경에서 테스트 되었습니다.
* Local에서 테스트 하여 Google Colab으로 코드와 실행 결과를 정리해 두었습니다.
* `gcc`에서 `-o` 플래그로 실행 파일의 이름을 지정하지 않을 시 `a.out`이라는 파일 이름으로 실행 파일이 생성됩니다. `.gitignore`파일에서 해당 파일을  _Untrack_ 하였으므로 `gcc`를 이용해 플래그 지정 없이 컴파일 하시면 코드의 실행파일이 git에 트래킹 되지 않습니다.
```bash
gcc FILENAME
./a.out
```
* Jupyter Notebook(Colab)사용으로 인해 C언어 코드 작성에 불편함이 있다면, 이 레포지토리를 클론하여 `build`폴더를 생성 후 그 밑에서 테스트 하시면 편리합니다.<br />
![image](https://user-images.githubusercontent.com/46417868/193275544-8a2faa24-f927-45e2-b6d1-5c2a139fcc3c.png)

***코드 참고시, 주석에 "20222975 송지호"의 도움을 받았다고 작성 부탁드립니다.🙏❤️***
