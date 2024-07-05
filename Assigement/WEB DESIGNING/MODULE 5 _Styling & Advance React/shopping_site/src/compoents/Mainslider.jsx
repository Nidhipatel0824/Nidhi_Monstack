import React from 'react'
import slider from '../style/slider.css'

function Mainslider() {
    return (
        <>
        <div className='container'>
        <div id="demo" class="carousel slide" data-bs-ride="carousel">

{/* <!-- Indicators/dots --> */}
<div class="carousel-indicators">
  <button type="button" data-bs-target="#demo" data-bs-slide-to="0" class="active"></button>
  <button type="button" data-bs-target="#demo" data-bs-slide-to="1"></button>
  <button type="button" data-bs-target="#demo" data-bs-slide-to="2"></button>
</div>

{/* <!-- The slideshow/carousel --> */}
<div class="carousel-inner">
  <div class="carousel-item active">
    <img src="https://nest-frontend-v6.netlify.app/assets/imgs/slider/slider-1.png" alt="Los Angeles" class="d-block w-100"/>
    <h3 class="imgtext"> Don't miss amazing   <br/>  grocery deals</h3>
    <p class="ptext">Sign up for the daily newsletter</p>

    <form class="teml" >
          <input  type="email" placeholder="Your emaill address" />
          <button  type="submit">Subscribe</button>
    </form>
  </div>
  <div class="carousel-item">
    <img src="https://nest-frontend-v6.netlify.app/assets/imgs/slider/slider-2.png" alt="Chicago" class="d-block w-100"/>
  </div>
  <div class="carousel-item">
    <img src="https://nest-frontend-v6.netlify.app/assets/imgs/slider/slider-1.png" alt="New York" class="d-block w-100"/>
  </div>
</div>

{/* <!-- Left and right controls/icons --> */}
<button class="carousel-control-prev" type="button" data-bs-target="#demo" data-bs-slide="prev">
  <span class="carousel-control-prev-icon"></span>
</button>
<button class="carousel-control-next" type="button" data-bs-target="#demo" data-bs-slide="next">
  <span class="carousel-control-next-icon"></span>
</button>
</div>
           
        </div>
        
        </>

    )
}

export default Mainslider