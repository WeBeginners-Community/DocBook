# Spinners

Bootstrap provides a set of spinners that can be used to indicate loading or processing. Spinners can be used with buttons, forms, and more.

<img src="https://user-images.githubusercontent.com/95307102/221271321-ac80c8cd-2f5e-4449-a8c1-383e023ea65d.png">


## Usage
To use a spinner, add the `.spinner-border` or `.spinner-grow` class to a `div` element:

````
<div class="spinner-border" role="status">
  <span class="sr-only">Loading...</span>
</div>
````

````
<div class="spinner-grow" role="status">
  <span class="sr-only">Loading...</span>
</div>
````

## Colors

You can change the color of the spinner by adding the `.text-*` class to the spinner element. Replace `*` with the desired color, such as `primary`, `secondary`, `success`, `danger`, `warning`, `info`, `light`, or `dark`.

````
<div class="spinner-border text-primary" role="status">
  <span class="sr-only">Loading...</span>
</div>
````

### Sizing

You can change the size of the spinner by adding the `.spinner-border-*` or `.spinner-grow-*` class to the spinner element. 
Replace `*` with `sm` for small or `lg` for large.

````
<div class="spinner-border spinner-border-sm" role="status">
  <span class="sr-only">Loading...</span>
</div>
````

### Buttons
You can use a spinner inside a button to indicate that the button is in a loading state. To do this, add the `.spinner-border` or `.spinner-grow` class to a `span` element inside the button element:

````
<button type="button" class="btn btn-primary">
  <span class="spinner-border spinner-border-sm" role="status" aria-hidden="true"></span>
  <span class="sr-only">Loading...</span>
  Submit
</button>
````

````
<button type="button" class="btn btn-primary">
  <span class="spinner-grow spinner-grow-sm" role="status" aria-hidden="true"></span>
  <span class="sr-only">Loading...</span>
  Submit
</button>
````

### Centering

To center a spinner horizontally and vertically, use the following CSS:

````
.spinner-center {
  display: flex;
  justify-content: center;
  align-items: center;
  height: 100vh;
}
````

Then add the `.spinner-center` class to a parent element of the spinner:

````
<div class="spinner-center">
  <div class="spinner-border" role="status">
    <span class="sr-only">Loading...</span>
  </div>
</div>
````

Hence,
Bootstrap Spinners are a simple and effective way to indicate loading or processing in your web application. By following the instructions in this documentation, you can easily use and customize the spinners to suit your specific needs.



