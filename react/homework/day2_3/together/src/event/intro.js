import React, { useState } from "react";
import "./apply.js";
import "./style.css";

function Intro() {
  const [page, setPage] = useState(true);

  return (
    <>
      <div className="title">
        <div className="title_1">
          <h1>친바 신청하기</h1>
        </div>
        <div className="title_2">
          <button className="create_button" onClick={() =>setPage(page ? false : true)}>
            소모임 생성
          </button>
        </div>
      </div>
    </>
  );
}

export default Intro;
