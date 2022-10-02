# UPDATE
- 테이블의 값을 조건에 맞춰 업데이트 해줌
## 사용법
```sql
UPDATE table_name
SET
column1 = update_value,
column2 = update_value
WHERE
condition1;
```
## 예시
```sql
UPDATE COMPANY_TABLE
SET COMPANY_NAME = '삼성전자'
WHERE COMPANY_CODE = 1;
```
- WHERE절에 조건을 명시하지 않으면 테이블에 있는 모든 데이터의 컬럼 값이 변경됨