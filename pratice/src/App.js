import { BrowserRouter, Route, Routes } from "react-router-dom";
import Home from "./wesite/Pages/Home";
import About from "./wesite/Pages/About";
import Contact from "./wesite/Pages/Contact";
import Service from "./wesite/Pages/Service";
import Project from "./wesite/Pages/Project";
import React from 'react';
// import Homedemo from './wesite/Homedemo';
import 'mdb-react-ui-kit/dist/css/mdb.min.css'

function App() {
  return (
    <div className="App">
      {/* <h1>hello.........</h1>
      <Homedemo/>
      <h1>hi...........</h1>
   */}


<BrowserRouter>
        <Routes>
        
          <Route path="/" element={<><Home/></>} />
          <Route path="/about" element={<><About /> </>} /> 
          <Route path="/contact" element={<><Contact/></>} />
          <Route path="/service" element={<><Service/></>} />  
          <Route path="/project" element={<><Project /></>} />
          {/* <Route path="/ulogin" element={<><Ulogin /></>} /> */}

{/* 
          <Route path="/Dashboard"  element={<><Adashboard /></>}/>
          <Route path="/addservice" element={<><Addservice /></>} />
          <Route path="/Mangesev" element={<><AMangeservice/></>} /> 
          <Route path="/usermanage" element={<><Usermange/></>} /> 
          <Route path="/Alogin" element={<><Alogin/></>} />  */}
        </Routes >
      </BrowserRouter>   
    </div>
  );
}

export default App;
