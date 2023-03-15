# Columns


- Columns extend the flexbox design of the grid. Flexbox implies we may change individual columns as well as groups of columns at the row level. Columns can expand, decrease, or transform in any way you like.

- While creating grid layouts, all material is organised into columns. Bootstrap's grid hierarchy progresses from container to row to column to your content. You may blend content and column on rare instances, but be mindful that there may be unforeseen results.

- Bootstrap comes with readymade classes for quickly constructing responsive layouts. We have hundreds of classes already constructed for you to design your chosen layouts, with six breakpoints and a dozen columns at each grid layer. If you choose, you can deactivate this through Sass.

# Alignment
Using flexbox alignment utilities to vertically and horizontally align columns.

## Vertical alignment

Change the vertical alignment with any of the responsive align-items-* classes.

<img  src="https://user-images.githubusercontent.com/95307102/221245082-35ae97db-5bc2-41d1-8dcb-b6ab89a5613a.png">

````
<div class="container text-center">
  <div class="row align-items-start">
    <div class="col">
      One of three columns
    </div>
    <div class="col">
      One of three columns
    </div>
    <div class="col">
      One of three columns
    </div>
  </div>
</div>
````

## Horizontal alignment

<img src="https://user-images.githubusercontent.com/95307102/221245451-d72efea2-6a9d-4e35-a0a0-8ddc99efbd19.png">

````
<div class="container text-center">
  <div class="row justify-content-start">
    <div class="col-4">
      One of two columns
    </div>
    <div class="col-4">
      One of two columns
    </div>
  </div>
  <div class="row justify-content-center">
    <div class="col-4">
      One of two columns
    </div>
    <div class="col-4">
      One of two columns
    </div>
  </div>
  <div class="row justify-content-end">
    <div class="col-4">
      One of two columns
    </div>
    <div class="col-4">
      One of two columns
    </div>
  </div>
  <div class="row justify-content-around">
    <div class="col-4">
      One of two columns
    </div>
    <div class="col-4">
      One of two columns
    </div>
  </div>
  <div class="row justify-content-between">
    <div class="col-4">
      One of two columns
    </div>
    <div class="col-4">
      One of two columns
    </div>
  </div>
  <div class="row justify-content-evenly">
    <div class="col-4">
      One of two columns
    </div>
    <div class="col-4">
      One of two columns
    </div>
  </div>
</div>
````
# Reordering 
## Order classes
<img src="https://user-images.githubusercontent.com/95307102/221247281-5f80c4f7-dfc5-4ecd-96b4-261d036edd40.png">

Control the visual order of your content with.order- classes. Because these classes are responsive, you may sort them by breakpoint (e.g., .order-1.order-md-2). Support for 1 through 5 across all six grid levels is included. You can change the default number of.order-* classes if you need more.

````
<div class="container text-center">
  <div class="row">
    <div class="col">
      First in DOM, no order applied
    </div>
    <div class="col order-5">
      Second in DOM, with a larger order
    </div>
    <div class="col order-1">
      Third in DOM, with an order of 1
    </div>
  </div>
</div>
````

# Offsetting columns 

There are two approaches to offset grid columns: our responsive.offset- grid classes and our margin utilities. Grid classes are proportioned to match columns, whereas margins are more suitable for rapid layouts with changeable offset widths.

## Offset classes 
<img src="https://user-images.githubusercontent.com/95307102/221247768-3ba8e6d8-364e-4113-be15-fbd364faa38f.png">

With the.offset-md-* classes, you may move columns to the right. These classes extend a column's left margin by * columns. For instance,.offset-md-4 moves. Across four columns, use col-md-4.

````
<div class="container text-center">
  <div class="row">
    <div class="col-md-4">.col-md-4</div>
    <div class="col-md-4 offset-md-4">.col-md-4 .offset-md-4</div>
  </div>
  <div class="row">
    <div class="col-md-3 offset-md-3">.col-md-3 .offset-md-3</div>
    <div class="col-md-3 offset-md-3">.col-md-3 .offset-md-3</div>
  </div>
  <div class="row">
    <div class="col-md-6 offset-md-3">.col-md-6 .offset-md-3</div>
  </div>
</div>
````


# Standalone column classes
<img src="https://user-images.githubusercontent.com/95307102/221248136-d94bd329-c568-4a58-b0b3-85ac8d5e681b.png">

The.col-* classes can also be used outside of a.row to specify the width of an element. Paddings are not needed when column classes are used as non-direct children of a row.

````
<div class="col-3 p-3 mb-2">
  .col-3: width of 25%
</div>

<div class="col-sm-9 p-3">
  .col-sm-9: width of 75% above sm breakpoint
</div>
````










