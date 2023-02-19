# Containers

Containers are the most fundamental Bootstrap layout element and are necessary when utilising our default grid system. Select between a responsive, fixed-width container (whose maximum width changes at each breakpoint) and a fluid-width container (which is always 100% wide).


While containers can be nested, they are not required in most layouts.

<img src="https://user-images.githubusercontent.com/95307102/219938569-bd3fcd75-f048-404d-8d2d-b5ff82205782.PNG"> 

````
<div class="container">
  <!-- Content here -->
</div>
````


Use .container-fluid for a full width container, spanning the entire width of the viewport.

<img src="https://user-images.githubusercontent.com/95307102/219938828-b9a28d76-4c01-4464-9bb6-d73699f9ef4a.PNG"> 

````
<div class="container-fluid">
  ...
</div>
````

# Responsive breakpoints

Because Bootstrap is designed to be mobile-first, we employ a few media queries to set appropriate breakpoints for our layouts and interfaces. 
These breakpoints are largely based on viewport minimum widths and allow us to scale up items as the viewport changes.

In our source Sass files, Bootstrap largely employs the following media query ranges—or breakpoints—for our layout, grid system, and components.

````
// Extra small devices (portrait phones, less than 576px)
// No media query since this is the default in Bootstrap

// Small devices (landscape phones, 576px and up)
@media (min-width: 576px) { ... }

// Medium devices (tablets, 768px and up)
@media (min-width: 768px) { ... }

// Large devices (desktops, 992px and up)
@media (min-width: 992px) { ... }

// Extra large devices (large desktops, 1200px and up)
@media (min-width: 1200px) { ... }
````

Since we write our source CSS in Sass, all our media queries are available via Sass mixins:

````
@include media-breakpoint-up(xs) { ... }
@include media-breakpoint-up(sm) { ... }
@include media-breakpoint-up(md) { ... }
@include media-breakpoint-up(lg) { ... }
@include media-breakpoint-up(xl) { ... }

// Example usage:
@include media-breakpoint-up(sm) {
  .some-class {
    display: block;
  }
}
````

We occasionally use media queries that go in the other direction (the given screen size or smaller):

````
// Extra small devices (portrait phones, less than 576px)
@media (max-width: 575.98px) { ... }

// Small devices (landscape phones, less than 768px)
@media (max-width: 767.98px) { ... }

// Medium devices (tablets, less than 992px)
@media (max-width: 991.98px) { ... }

// Large devices (desktops, less than 1200px)
@media (max-width: 1199.98px) { ... }

// Extra large devices (large desktops)
// No media query since the extra-large breakpoint has no upper bound on its width
````

#### Note that since browsers do not currently support range context queries, we work around the limitations of min- and max- prefixes and viewports with fractional widths (which can occur under certain conditions on high-dpi devices, for instance) by using values with higher precision for these comparisons.

Once again, these media queries are also available via Sass mixins:

````
@include media-breakpoint-down(xs) { ... }
@include media-breakpoint-down(sm) { ... }
@include media-breakpoint-down(md) { ... }
@include media-breakpoint-down(lg) { ... }
````

There are additional media queries and mixins that can be used to target a single section of screen sizes by utilising the minimum and maximum breakpoint widths.


````
// Extra small devices (portrait phones, less than 576px)
@media (max-width: 575.98px) { ... }

// Small devices (landscape phones, 576px and up)
@media (min-width: 576px) and (max-width: 767.98px) { ... }

// Medium devices (tablets, 768px and up)
@media (min-width: 768px) and (max-width: 991.98px) { ... }

// Large devices (desktops, 992px and up)
@media (min-width: 992px) and (max-width: 1199.98px) { ... }

// Extra large devices (large desktops, 1200px and up)
@media (min-width: 1200px) { ... }
````
