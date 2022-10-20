# use state

## use state 배열 복사
- use state가 array 또는 object일 때 다른 변수에 복사할 때 [...변수] 라고 지정해야함
<br>

## Too many re-renders 오류
```javascript
// 오류 코드
import { useState } from "react";

function Todolist() {
    const [todolist, setTodolist] = useState(0);
    const Counter = () => {
        setTodolist(todolist+1);
        console.log(todolist);
    }
    return (
        <div>
            <h1>{todolist}</h1>
            <div onClick={Counter()}>눌러보셈</div>
        </div>
    );
}

export default Todolist;
```
```javascript
// 해결한 코드
import { useState } from "react";

function Todolist() {
    const [todolist, setTodolist] = useState(0);
    const Counter = () => {
        setTodolist(todolist+1);
        console.log(todolist);
    }
    return (
        <div>
            <h1>{todolist}</h1>
            <div onClick={() => Counter()}>눌러보셈</div>
        </div>
    );
}

export default Todolist;
```
- 문제
    - 렌더링 과정에서 state를 변화시키는 함수때문에 무한 반복에 빠짐
- 해결
    - onClick함수를 화살표 함수 형태로 바꿔야 함