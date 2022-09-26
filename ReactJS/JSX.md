# JSX
- JS + XML
- React로 프로젝트를 개발할 때 사용함
- 공식적인 JS 문법이 아님

<br>

# 문법
## class
- class -> className

## 데이터 바인딩 (변수 -> HTML)
```javascript
function App() {
    let post = 'Hello';
    return {
        <h1>{post}</h1>
    }
}
```

## style
```javascript
function App() {
    return {
        <h1 style={{color:'red', fontSize:'16px'}}>Hello</h1>
    }
}
```

## state
- 값이 바뀌면 자동으로 html에 반영되게 만들고 싶으면 state를 사용해야 함
- 특징
    - 기존 state == 신규 state 의 경우 자동으로 변경 안 됨
- 사용하는 이유
    - 일반 변수와 다르게 값이 바뀌면 자동으로 html이 재랜더링됨
```javascript
let [title, f] = useState('남자 코트 추천');
// title을 가지고 오면 '남자 코트 추천' 값을 가지고 옴
// f는 state 변경 함수임
f('여자 코트 추천');
// => 남자 코트 추천 -> 여자 코트 추천 으로 state 변경
```

## Destructuring 문법
```javascript
let num = [1, 2];
let a = num[0];
let b = num[1];
// ->
let num = [1, 2];
let [a, b] = [1, 2];
```

## /* eslint-disable */
- warning 메시지를 없애줌
- 코드 맨 위에 작성