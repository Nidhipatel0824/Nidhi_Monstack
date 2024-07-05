import React from 'react'
import DropdownButton from "react-bootstrap/DropdownButton";
import Dropdown from "react-bootstrap/Dropdown";
import { Row } from 'react-bootstrap';
import { Col } from 'react-bootstrap';
import ArrowDropDownIcon from '@mui/icons-material/ArrowDropDown';
import navbar from '../style/navbar.css'


function Navbar() {
    return (
        <div className='container'>

            <div class="row" >
                <div class="col-sm-3" >

                    <Col>
                        <DropdownButton class="dropbtn" id="dropdown-item-button" variant="success" title="Browse All Categories" style={{ padding: "5px",margin:"15px" }} >
                            <Dropdown.Item as="button">Action</Dropdown.Item>
                            <Dropdown.Item as="button">Another action</Dropdown.Item>
                            <Dropdown.Item as="button">Something else</Dropdown.Item>
                        </DropdownButton></Col>

                </div>

                <div class="col-md" >
                    <Col>
                        <nav class="navbar navbar-expand-lg navbar-light bg-light">
                            <ul class="navbar-nav me-auto mb-2 mb-lg-0">  
                             <img src="	https://nest-frontend-v6.netlify.app/assets/imgs/theme/icons/icon-hot.svg" alt="" />

                                <li class="nav-item">
                                    <a class="nav-link" href="#"> Deals</a>
                                </li>

                                <li class="nav-item dropdown">
                            <a class="nav-link dropdown-toggle" href="#" id="navbarDropdown" role="button" data-bs-toggle="dropdown" aria-expanded="false">
                               Home
                            </a></li>
                            <li class="nav-item">
                                    <a class="nav-link" href="#">About</a>
                                </li>

                                <li class="nav-item dropdown">
                            <a class="nav-link dropdown-toggle" href="#" id="navbarDropdown" role="button" data-bs-toggle="dropdown" aria-expanded="false">
                               Shop
                            </a></li>
                            <li class="nav-item dropdown">
                            <a class="nav-link dropdown-toggle" href="#" id="navbarDropdown" role="button" data-bs-toggle="dropdown" aria-expanded="false">
                            Vendors
                            </a></li>

                            <li class="nav-item dropdown">
                            <a class="nav-link dropdown-toggle" href="#" id="navbarDropdown" role="button" data-bs-toggle="dropdown" aria-expanded="false">
                            Mega menu
                            </a></li>
                            
                            <li class="nav-item dropdown">
                            <a class="nav-link dropdown-toggle" href="#" id="navbarDropdown" role="button" data-bs-toggle="dropdown" aria-expanded="false">
                           Blog
                            </a></li>

                            
                            <li class="nav-item dropdown">
                            <a class="nav-link dropdown-toggle" href="#" id="navbarDropdown" role="button" data-bs-toggle="dropdown" aria-expanded="false">
                            Pages
                            </a></li>

                            <li class="nav-item a">
                            <a class="nav-link dropdown-toggle" href="#" id="navbarDropdown" role="button" data-bs-toggle="dropdown" aria-expanded="false">
                            Contact
                            </a></li>
                            
                            </ul>
                           <div>
                            <img src="https://nest-frontend-v6.netlify.app/assets/imgs/theme/icons/icon-headphone.svg" alt=""  height={29}   />
                            
                            <span  style={{color : "#3BB77E" , fontSize : "19px", fontWeight:"900" ,marginTop:"50px", marginLeft:"-3px" }}>1900-888 </span>
                                <span style={{fontSize:"10px",marginLeft:"10px"}}>24/7 Support Center</span>
                             </div>
                        </nav>
                       
                    </Col>


                </div>
            </div>

        </div>





    )
}

export default Navbar