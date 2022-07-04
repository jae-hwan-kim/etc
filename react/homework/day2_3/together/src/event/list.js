import React, { useState, useEffect } from "react";
import "./style.css";

function List() {
  const [jip, setJip] = useState(0);

  useEffect(() => {
    if (jip === 2)
      alert("2다.");  
    }, [jip]
  )

  const clicksetJip = () => {
    console.log(jip);
    setJip(jip + 1);
  }

  return (
    <>
        <div className="list">
          <div className="list_title"><h3>이벤트 생성하기</h3></div>
          <div className="list_contents">
            <li> 가상 이벤트1 </li>
            <li onClick={clicksetJip}> 가상 이벤트2 </li>
            <li> 가상 이벤트3 </li>
          </div>
        </div>
    </>
  );
}

export default List;

// - 이름의 상태값을 저장하는 공간 이름이 jip 이고, 해당 상태값의 setter는 setJip으로 만듭니다.
// - 상태값의 기초값은 0
// - ‘가상 이벤트2’를 누르면 상태값이 +1 됩니다.
// - ‘가상 이벤트2’를 누르다가 Jip이 2가 되면 해당 상태값 알림창으로 띄워줌