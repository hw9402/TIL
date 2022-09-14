# 함수 표현식 (Function Expression)

## 익명 함수 (Anonymous Function Expression)
- 이름이 없는 함수 -> 선언할 때 이름을 붙이지 않음
- 함수 자체가 식(Expression)이기 때문에 익명 함수를 변수에 할당할 수 있음
  또한 다른 함수의 매개변수로 사용할 수도 있음
- 호이스팅이 적용되지 않음
- 사용하는 이유
    - 메모리 관리에 최적임
    - 한 번만 쓸 함수일 때 많이 사용함
- ex)
```javascript
var add = function(a, b) { // 함수 선언 후 변수 add에 할당
    return a + b;
}

var sum = add(10, 20);

console.log(sum); // 30 출력
```

<br>

## 즉시 실행 함수 (IIFE, Immediately Invoked Function Expression)
- 정의함과 동시에 실행하는 함수
- 한 번의 실행만 필요로 하는 초기화 코드 부분에 많이 사용됨
- 사용하는 이유
    - 변수를 전역으로 선언하는 것을 피하기 위함
- ex)
```javascript
var result = (function(a, b) {
    return a + b;
} (10, 20));

console.log(result); // 30
```

<br>

## 화살표 함수 (Arrow Function Expression)
- JS ES6 버전부터 => 표기법을 사용해 함수 선언을 더 간단하게 작성할 수 있음
- 익명 함수에서만 사용 가능함
- ex) 매개변수가 없을 때
```javascript
const hi = function() {
    return "안녕하세요?";
}

// -> 

const hi = () => {return "안녕하세요?"};
```
- ex) 매개변수가 있을 때
```javascript
let sum = (a, b) => {return a + b};
// 매개변수 여부에 상관없이 식이 하나라면 중괄호 생략 가능
// 매개변수가 하나라면 소괄호 생략 가능
```