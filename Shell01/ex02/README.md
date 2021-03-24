file -> -type f.

name -> -name.

.sh로 끝나는 파일 -> '*.sh'.

이름만 출력 -> -exec basename '{}' \; | sed 's/.sh$/'.
