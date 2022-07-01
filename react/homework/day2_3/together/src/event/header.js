import React from "react";
import logo from '../logo.png';
import "./style.css";

function Header() {
  return (
    <>
      <div className="header">
        <div className="header_image">
          <img src={logo} alt= "Logo"/>
        </div>
      </div>
    </>
  );
}

export default Header;

// import React from 'react';
// import logo from './logo.png'; // Tell webpack this JS file uses this image

// console.log(logo); // /logo.84287d09.png

// function Header() {
//   // Import result is the URL of your image
//   return <img src={logo} alt="Logo" />;
// }