FT_USER라는 환경변수를 사용해야되서 먼저 export FT_USER 을 해준다.
-G : display the different group ID
-n : -G, -g, -u option 사용 시 나오는 그룹이나 사용자 ID를 숫자대신 이름으로 표신한다.

위처럼 하면 한 line에 공백으로 분리하는데 tr 을 사용해서 공백을 , 로 바꾼다.
그리고 마지막 '\n' 삭제
