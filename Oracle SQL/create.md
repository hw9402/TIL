# CREATE
## 사용법 및 예시
```sql
create table tbl_point_201905 (
	serial_no number(8) not null,
	artist_id char(4),
	mento_id char(4),
	score number(3),
	primary key(serial_no),
	foreign key(artist_id) references tbl_artist_201905(artist_id),
	foreign key(mento_id) references tbl_mento_201905(mento_id)
);
```
## 자료형
- number(자리수, 소수점 자리(생략하면 정수))
  - 유효자리 38자리 이하의 숫자를 표현
- char(자리수)
  - 문자열
- varchar2
  - 문자열
  - 문자열 길이가 가변적이기 때문에 자리수를 적어줄 필요 없음

## Etc.
```sql
not null
```
- null이 들어가면 안 되는 컬럼에 기입함
```sql
primary key(column_name)
```
- 기본키 설정
```sql
foreign key(column_name) references table_name(column_name)
```
- 외래키 설정