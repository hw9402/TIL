## Import image from json

```json
{
    "banners": [ // data name
      { // value
        "id": 1,
        "img": "https://www.oss.kr/plugins/oss/components/Modules/DeveloperCompetition/assets/img/img_developer_challenge4_2022.jpg",
        "linkTo": ""
      },
      {
        "id": 2,
        "img": "https://yozm.wishket.com/media/news/985/image001.png",
        "linkTo": ""
      },
      {
        "id": 3,
        "img": "https://blog.kakaocdn.net/dn/d5hJKT/btqC6POJwrQ/q1KCkaOUcMqNa9LZEambF0/img.jpg",
        "linkTo": ""
      }
    ]
  }
```
```javascript
function App() {
  return (
    {
      BannerImage.banners?.map(index => {
        return ( // index => for문 i 같은 느낌 (내 생각)
          <div key={index.id}>
            <img src={index.img} />
          </div>
        );
      })
    }
  );
}

```

- javascript 코드 구조
```javascript
JsonFileName.DataName?.map(index => {
    return (
        <div key={index.id}>
            <img src={index.img} />
        </div>
    );
})
```
### 핵심
- map() 함수
- data name 뒤에 ? 붙이는 것