# Grid system

Using a twelve column structure, six preset responsive tiers, Sass variables and mixins, and dozens of predefined classes, you can create layouts of all shapes and sizes with the powerful mobile-first flexbox grid.

# Example 

````
<div class="container text-center">
  <div class="row">
    <div class="col">
      Column
    </div>
    <div class="col">
      Column
    </div>
    <div class="col">
      Column
    </div>
  </div>
</div>
````

Using the established grid classes, this provides three equal-width columns across all devices and viewports. The columns are aligned with the parent.container on the page.

# Grid options 
Bootstrap's grid system can adjust to all six default breakpoints as well as any breakpoints you define. 
The following are the six default grid tiers:

- Extra small (xs)
- Small (sm)
- Medium (md)
- Large (lg)
- Extra large (xl)
- Extra extra large (xxl)

# Auto-layout columns

## Equal-width 
These are two grid layouts that work for any device and viewport size from xs to xxl. Add as many unit-less classes as you need for each breakpoint, and every column will be the same width.

<img src="https://user-images.githubusercontent.com/95307102/221239463-8ec9d74f-8f55-442e-9b93-d419282699b9.png">

````
<div class="container text-center">
  <div class="row">
    <div class="col">
      1 of 2
    </div>
    <div class="col">
      2 of 2
    </div>
  </div>
  <div class="row">
    <div class="col">
      1 of 3
    </div>
    <div class="col">
      2 of 3
    </div>
    <div class="col">
      3 of 3
    </div>
  </div>
</div>
````

# Responsive classes
The grid in Bootstrap contains six levels of preset classes for creating complicated responsive layouts. Adjust the size of your columns on extra tiny, small, medium, big, or extremely large devices as needed.

## All breakpoints
<img src="https://user-images.githubusercontent.com/95307102/221241036-7e63443c-7d2d-4809-805e-aed14c5fce84.png">

Use the.col and.col-* classes to create grids that are the same from the smallest to the largest devices. When you require a certain column size, use a numbered class; otherwise, stick to.col.

````
<div class="container text-center">
  <div class="row">
    <div class="col">col</div>
    <div class="col">col</div>
    <div class="col">col</div>
    <div class="col">col</div>
  </div>
  <div class="row">
    <div class="col-8">col-8</div>
    <div class="col-4">col-4</div>
  </div>
</div>
````

## Nesting
<img src="https://user-images.githubusercontent.com/95307102/221241556-f143fbf1-d20e-4f1c-a028-be6fd5890f97.png">

Add a new.row and set of.col-sm-* columns within an existing.col-sm-* column to nest your content with the default grid. Nested rows should have a collection of columns that totals 12 or less (it is not required that you use all 12 available columns).

````
<div class="container text-center">
  <div class="row">
    <div class="col-sm-3">
      Level 1: .col-sm-3
    </div>
    <div class="col-sm-9">
      <div class="row">
        <div class="col-8 col-sm-6">
          Level 2: .col-8 .col-sm-6
        </div>
        <div class="col-4 col-sm-6">
          Level 2: .col-4 .col-sm-6
        </div>
      </div>
    </div>
  </div>
</div>
````

# Sass 

While utilising Bootstrap's source Sass files, you may construct bespoke, semantic, and responsive page layouts by using Sass variables and mixins. These same variables and mixins are used by the preset grid classes to give a full suite of ready-to-use classes for fast responsive layouts.

# Variables

The number of columns, gutter width, and media query point at which to begin floating columns are all determined by variables and maps. They are used to create the default grid classes mentioned above, as well as the custom mixins indicated below.

````
$grid-columns:      12;
$grid-gutter-width: 1.5rem;
$grid-row-columns:  6;
````


````
$grid-breakpoints: (
  xs: 0,
  sm: 576px,
  md: 768px,
  lg: 992px,
  xl: 1200px,
  xxl: 1400px
);
````

# Mixins 
Mixins are used in conjunction with the grid variables to generate semantic CSS for individual grid columns.

````
// Creates a wrapper for a series of columns
@include make-row();

// Make the element grid-ready (applying everything but the width)
@include make-col-ready();

// Without optional size values, the mixin will create equal columns (similar to using .col)
@include make-col();
@include make-col($size, $columns: $grid-columns);

// Offset with margins
@include make-col-offset($size, $columns: $grid-columns);
````














