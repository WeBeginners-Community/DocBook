# Buttons

This is a guide on how to use the Bootstrap Buttons component.

<img src="https://user-images.githubusercontent.com/95307102/221257609-2b1fb9a1-714a-4baf-bfc4-e41cac13d4ca.png">


## Usage
To use the Buttons component in your website, you must first include the Bootstrap CSS and JavaScript files in your HTML. You can do this by adding the following code in your HTML head:

````
<!-- Bootstrap CSS -->
<link rel="stylesheet" href="https://maxcdn.bootstrapcdn.com/bootstrap/3.3.7/css/bootstrap.min.css">

<!-- Bootstrap JavaScript -->
<script src="https://maxcdn.bootstrapcdn.com/bootstrap/3.3.7/js/bootstrap.min.js"></script>
````

Once you have included the Bootstrap files, you can start using the Buttons component in your HTML markup. 
Here's an example:

````
<button type="button" class="btn btn-primary">Primary</button>
````

This will create a primary button.

## Options

You can customize the Buttons component by using the following options:

## Button Sizes

You can add the `btn-lg`, `btn-md`, or `btn-sm` class to change the size of the button:

````
<button type="button" class="btn btn-primary btn-lg">Large</button>
<button type="button" class="btn btn-primary">Default</button>
<button type="button" class="btn btn-primary btn-sm">Small</button>
````

### Button Colors

You can add one of the following classes to change the color of the button:

- `btn-primary`
- `btn-secondary`
- `btn-success`
- `btn-danger`
- `btn-warning`
- `btn-info`
- `btn-light`
- `btn-dark`
- `btn-link`


````
<button type="button" class="btn btn-primary">Primary</button>
<button type="button" class="btn btn-secondary">Secondary</button>
<button type="button" class="btn btn-success">Success</button>
<button type="button" class="btn btn-danger">Danger</button>
<button type="button" class="btn btn-warning">Warning</button>
<button type="button" class="btn btn-info">Info</button>
<button type="button" class="btn btn-light">Light</button>
<button type="button" class="btn btn-dark">Dark</button>
<button type="button" class="btn btn-link">Link</button>
````

## Button States

You can add the disabled attribute to disable the button:

````
<button type="button" class="btn btn-primary" disabled>Disabled</button>
````

## Button Block
You can add the btn-block class to make the button full width:

````
<button type="button" class="btn btn-primary btn-block">Full width button</button>
````

Hence,
The Buttons component in Bootstrap is a versatile tool that helps you create beautiful and functional buttons. With the options available, you can customize the component to fit your website's design and functionality.



