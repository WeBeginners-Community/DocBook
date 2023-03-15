# Utilities for Layout

Bootstrap provides a variety of utility classes that can be used to quickly adjust layout properties. These classes are useful for making small adjustments to the layout of a page or for applying responsive design principles to specific elements.

## Display

Bootstrap provides several classes for controlling the display property of an element, including hiding and showing elements based on screen size.

To hide an element, use the .d-none class. To show an element, use the `.d-block`, `.d-inline`, or `.d-inline-block` classes, depending on the desired display property.

````
<div class="d-none">This element is hidden</div>

<div class="d-block">This element is a block element</div>

<span class="d-inline">This element is an inline element</span>

<img class="d-inline-block" src="example.jpg" alt="Example Image">
````

In the example above, the first element is hidden, the second element is a block element, the third element is an inline element, and the fourth element is an inline-block element.

## Position

Bootstrap provides several classes for controlling the position property of an element, including fixed and absolute positioning.

To position an element fixed to the top or bottom of the screen, use the `.fixed-top` or `.fixed-bottom` classes, respectively. To position an element absolutely, use the `.position-absolute` class.

````
<div class="fixed-top">This element is fixed to the top of the screen</div>

<div class="fixed-bottom">This element is fixed to the bottom of the screen</div>

<div class="position-absolute top-0 end-0">This element is positioned absolutely in the top right corner of its parent element</div>
````

In the example above, the first element is fixed to the top of the screen, the second element is fixed to the bottom of the screen, and the third element is positioned absolutely in the top right corner of its parent element.

## Spacing
Bootstrap provides several classes for controlling the spacing of an element, including margin and padding.

To adjust the margin of an element, use the `.m-*` classes, where `*` is a number between 0 and 5. To adjust the padding of an element, use the `.p-*` classes, where `*` is a number between 0 and 5.

````
<div class="m-2">This element has a margin of 8px on all sides</div>

<div class="p-3">This element has a padding of 16px on all sides</div>
````

In the example above, the first element has a margin of 8px on all sides, and the second element has a padding of 16px on all sides.

## Sizing
Bootstrap provides several classes for controlling the size of an element, including width and height.

To adjust the width of an element, use the `.w-*` classes, where `*` is a number between 25 and 100 in increments of 25. To adjust the height of an element, use the `.h-*` classes, where `*` is a number between 25 and 100 in increments of 25.

````
<div class="w-50">This element has a width of 50%</div>

<div class="h-75">This element has a height of 75%</div>
````

In the example above, the first element has a width of 50%, and the second element has a height of 75%.

## Flexbox
Bootstrap provides several classes for working with flexbox, a powerful layout tool that allows for more complex and dynamic layouts.

To create a flexbox container, use the `.d-flex` class.
