import React from "react";
import "./style.css";

function Footer() {

  return (
    <>
        <div className="list">
          <div className="list_title">

          </div>
          <div className="attendees_info">
            <div className="attendees">
              <div className="attendee_picture">

              </div>
              <div className="attendee_name">

              </div>
            </div>
          </div>
        </div>
    </>
  );
}

export default Footer;

// import React, { useState, useEffect } from "react";
// import "./style.css";

// function Event() {
//   const [jip, setJip] = useState(0);

//   console.log(jip);
//   useEffect(() => {
//     if (jip === 2)
//       alert("2다.");  
//     }, [jip]
//   )

//   const clicksetJip = () => {
//     setJip(jip + 1);
//   }

//   return (
//     <>
//         <div className="events">
//           <div className="events_title"><h3>이벤트 생성하기</h3></div>
//           <div className="events_contents">
//             <li> 가상 이벤트1 </li>
//             <li onClick={clicksetJip}> 가상 이벤트2 </li>
//             <li> 가상 이벤트3 </li>
//           </div>
//         </div>
//     </>
//   );
// }

// export default Event;
