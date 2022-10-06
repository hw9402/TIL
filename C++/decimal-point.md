# 소수점 설정

- ver1
```c++
double num = 12.34567;
std::cout.precision(3); // 3자리로 설정
std::cout << num << std::endl; 
// 출력: 12.3
```

- ver2
```c++
double num = 12.34567;
std::cout << std::fixed; // 소수점 고정시켜서 표현
std::cout.precision(3); // 3자리로 설정
std::cout << num << std::endl; 
// 출력: 12.345
```