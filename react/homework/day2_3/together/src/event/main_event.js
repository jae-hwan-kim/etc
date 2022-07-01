import React, { useState } from "react";
import Intro from "./intro";
import List from "./list";
import Create from "./create";
import Createinfo from "./create_info";
import "./style.css";

export default function Login() {
  const [page, setPage] = useState(true)
  
  return (
    <>
      <div className="box">
        <div className="box_position">
          <div className="event">
            <div onClick={() =>setPage(page ? false : true)}>
              <Intro />
            </div>
            <div className="event_detail">
              <List />
              {page ? <Create /> : <Createinfo />}
            </div>
          </div>
        </div>
      </div>
    </>
  );
}

// const App = () => {
//   const [page, setPage] = useState("about")

//   return (
//       <div className="nav">
//           <ul className="menu">
//               <li className="menu-item" onClick={() => setPage("about")}>About</li>
//               <li className="menu-item" onClick={() => setPage("projects")}>Projects</li>
//               <li className="menu-item" onClick={() => setPage("contact")}>Contact</li>
//           </ul>
//       </div>
//       <div className="container">
//           {page === "about" && <About />}
//           {page === "projects" && <Projects />}
//           {page === "contact" && <Contact />}
//       </div>
//   )
// };