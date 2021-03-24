cat /etc/passwd | sed '/^#/d' | sed -n '2,$p' | awk -F ":" '{ print $1 }' | rev | sort -fnr | sed -n "${FT_LINE1},${FT_LINE2}p" | tr '\n' ',' | sed 's/,$/./' | sed 's/,/, /g' | tr -d '\n'

1. 주석 제거
    sed로 맨 앞의 #을 제거
2. 두 번째 줄부터 표시 
    sed로 '2,$p' 두 번째 줄부터 끝까지 나타내도록 한다.
3. awk로 먼저 : 를 delimeter로 분리한다. 그러면 맨 처음 값이 login 값이기 때문에 $1 을 출력
4. rev로 뒤집기
5. sort 옵션 중 r 로 역순, f로 알파벳을 모두 대문자로 변경(대소문자 때문에 -> 대소문자도 구분해야 되는거 아닌가???), n 옵션으로 숫자도 string으로 표현.
6. sed로 환경변수 FT_LINE1, FT_LINE2 의 범위로 줄인다.
7. '\n'을 모두 ','로 변경.
8. 마지막 , 를 .로 변경
9. '\n' 제거
