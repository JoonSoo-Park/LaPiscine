ifconfig 의 a option은 display all interfaces which are currently available, even if down

그래서 모든 이더넷을 보여준다.

ether가 들어간 것을 보여줘야 하기 때문에 ether가 들어간 문장을 찾아서,

sed로 "*ether " 부분을 없애주는 작업을 하는데, 이때 앞에 공백이 있기 때문에 이 공백은 *에 인식이 안된다.

임의의 문자를 읽도록 '.'를 붙여준다.

그래서 앞에 " " 이나 '.' 를 사용해서 앞에 있는 모든 빈칸을 없애준다.
