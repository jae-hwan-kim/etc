import React from "react";
import Intro from "./intro";
import List from "./list";
import Create from "./create";
import "./style.css";

export default function Login() {
  return (
    <>
      <div className="box">
        <div className="box_position">
          <div className="event">
            <Intro />
            <div className="event_detail">
              <List />
              <Create />
            </div>
          </div>
        </div>
      </div>
    </>
  );
}
