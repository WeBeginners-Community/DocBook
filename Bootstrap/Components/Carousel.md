# Carousel 

This is a guide on how to use the Bootstrap Carousel component.

## Usage

To use the Carousel component in your website, you must first include the Bootstrap CSS and JavaScript files in your HTML. 
You can do this by adding the following code in your HTML head:

````
<!-- Bootstrap CSS -->
<link rel="stylesheet" href="https://maxcdn.bootstrapcdn.com/bootstrap/3.3.7/css/bootstrap.min.css">

<!-- Bootstrap JavaScript -->
<script src="https://maxcdn.bootstrapcdn.com/bootstrap/3.3.7/js/bootstrap.min.js"></script>
````

Once you have included the Bootstrap files, you can start using the Carousel component in your HTML markup. 
Here's an example:

````
<div id="myCarousel" class="carousel slide" data-ride="carousel">
  <!-- Indicators -->
  <ol class="carousel-indicators">
    <li data-target="#myCarousel" data-slide-to="0" class="active"></li>
    <li data-target="#myCarousel" data-slide-to="1"></li>
    <li data-target="#myCarousel" data-slide-to="2"></li>
  </ol>

  <!-- Wrapper for slides -->
  <div class="carousel-inner">
    <div class="item active">
      <img src="img_chania.jpg" alt="Chania">
      <div class="carousel-caption">
        <h3>Chania</h3>
        <p>The atmosphere in Chania has a touch of Florence and Venice.</p>
      </div>
    </div>

    <div class="item">
      <img src="img_chania2.jpg" alt="Chania">
      <div class="carousel-caption">
        <h3>Chania 2</h3>
        <p>The atmosphere in Chania has a touch of Florence and Venice.</p>
      </div>
    </div>

    <div class="item">
      <img src="img_flower.jpg" alt="Flower">
      <div class="carousel-caption">
        <h3>Flowers</h3>
        <p>Beautiful flowers in Kolymbari, Crete.</p>
      </div>
    </div>
  </div>

  <!-- Left and right controls -->
  <a class="left carousel-control" href="#myCarousel" data-slide="prev">
    <span class="glyphicon glyphicon-chevron-left"></span>
    <span class="sr-only">Previous</span>
  </a>
  <a class="right carousel-control" href="#myCarousel" data-slide="next">
    <span class="glyphicon glyphicon-chevron-right"></span>
    <span class="sr-only">Next</span>
  </a>
</div>
````

This will create a carousel with three slides, each containing an image and a caption.

## Options

You can customize the Carousel component by using the following options:

## Slide Transitions

You can add the `slide` or `fade` class to the Carousel component to change the slide transition:

````
<div id="myCarousel" class="carousel slide slide" data-ride="carousel">
<!-- or -->
<div id="myCarousel" class="carousel slide fade" data-ride="carousel">
````

## Autoplay

You can add the `data-interval` attribute to the Carousel component to enable autoplay and set the interval time in milliseconds:

````
<div id="myCarousel" class="carousel slide" data-ride="carousel" data-interval="2000">
````

## Controls

You can hide the left and right controls by adding the `data-wrap="false"` attribute to the Carousel component:

````
<div id="myCarousel" class="carousel slide" data-ride
````
