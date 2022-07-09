import React, { useState, useEffect } from "react";
import "./style.css";

function Event() {
  const [jip, setJip] = useState(0);

  console.log(jip);
  useEffect(() => {
    if (jip === 2)
      alert("2다.");  
    }, [jip]
  )

  const clicksetJip = () => {
    setJip(jip + 1);
  }

  return (
    <>
        <div className="events">
          <div className="events_title"><h3>신청 가능 목록</h3></div>
          <div className="events_contents">
            <li> 가상 이벤트1 </li>
            <li onClick={clicksetJip}> 가상 이벤트2 </li>
            <li> 가상 이벤트3 </li>
          </div>
        </div>
    </>
  );
}

export default Event;
