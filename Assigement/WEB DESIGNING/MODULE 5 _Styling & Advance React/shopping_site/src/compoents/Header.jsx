import React from 'react'
import header from '../style/header.css'
import { Row } from 'react-bootstrap'
import { Col } from 'react-bootstrap';
import SearchIcon from '@mui/icons-material/Search';
import FloatingLabel from 'react-bootstrap/FloatingLabel';
import Badge from '@mui/material/Badge';

import Form from 'react-bootstrap/Form';




function Header() {
    return (
        <div className='container'>

            <div className='header'>
                <div className='subnavbar' >
                    <a href='#'>About us |</a>
                    <a href='#'>My Account |</a>
                    <a href='#'>Wishlist |</a>
                    <a href='#'>Order-Tracking</a>
                </div>
                <div className='rightheader' >
                    <a href="#">Need help? Call Us : + 1800 900</a>
                    <a href="#">English</a>
                    <a href="#">USD</a>
                </div>
            </div>
            <div className="header-2">

                <div class="row" >
                    <div class="col-md">
                        <Col >
                            <img src='	https://nest-frontend-v6.netlify.app/assets/imgs/theme/logo.svg' alt="" height={69} style={{ marginTop: "39px" }} />

                        </Col>
                    </div>
                    <div class="col-md">

                        <Col   >
                            <FloatingLabel controlId="floatingInputGrid" label="Search-engine" style={{ marginTop: "42px", marginLeft: "-5vw", width: "40vw" }}>
                                <Form.Control type="text" placeholder="name@example.com" />
                            </FloatingLabel>
                            < SearchIcon style={{marginLeft : " 32vw" ,   position: "absolute" , top : "95px" , fontSize :"35px" }} />

                        </Col>
                            
                    </div>
                    <div class="col-md"><Col style={{ display: "flex", }}>
                        <div style={{ marginLeft: "0vw", marginTop: " 56px" }}>
                        <Badge badgeContent={3} color="success">
                            <img src="https://nest-frontend-v6.netlify.app/assets/imgs/theme/icons/icon-compare.svg" alt="" />
                        </Badge>
                            <span>Compare</span>
                        </div>                    
                        <div style={{ marginLeft: "4vh", marginTop: "56px" }}>
                            <Badge badgeContent={6} color="success">
                            <img src="https://nest-frontend-v6.netlify.app/assets/imgs/theme/icons/icon-heart.svg" alt="" />
                            </Badge>
                            <span>Whilist</span>
                        </div>

                        <div style={{ marginLeft: "4vh", marginTop: "56px" }}>
                            <Badge badgeContent={2} color="success">
                            <img src="https://nest-frontend-v6.netlify.app/assets/imgs/theme/icons/icon-cart.svg" alt="" />
                            </Badge>
                            <span> Cart</span>
                        </div>
                        
                        <div style={{ marginLeft: "4vh", marginTop: "56px" }}>
                            
                                <img src="https://nest-frontend-v6.netlify.app/assets/imgs/theme/icons/icon-user.svg" alt="" />
                           
                            <span>Account</span>
                        </div>
                    </Col></div>
                </div>
            </div >
          
        </div >


    )
}

export default Header