import React from "react";
import "./style.css";

function Button() {
  const onClick = () => {
    alert("I'm Clicked!");
  };

  return (
    <>
      <div className="button">
        <div></div>
        <button onClick={onClick}  className="button_style">로그인</button>
      </div>
    </>
  );
}

export default Button;
