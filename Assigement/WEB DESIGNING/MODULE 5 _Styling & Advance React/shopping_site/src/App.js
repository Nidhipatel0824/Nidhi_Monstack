
import React from "react";
import Navbar from "./compoents/Navbar";
import Header from "./compoents/Header";
import Mainslider from "./compoents/Mainslider";
import Cardtitle from "./compoents/Cardtitle";
import Cart from "./compoents/Cart";



function App() {
  return (
    <div className="App">
      
      <Header/>
      <Navbar/>
      <Mainslider/>
      <Cardtitle/>
      <Cart/>
    </div>
  );
}

export default App;
