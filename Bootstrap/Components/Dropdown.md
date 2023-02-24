# Dropdown

This is a guide on how to use the Bootstrap Dropdown component.

<img src="https://user-images.githubusercontent.com/95307102/221261004-ced866e5-7a40-4f30-97ce-f07734034014.png">


## Usage

To use the Dropdown component in your website, you must first include the Bootstrap CSS and JavaScript files in your HTML.
You can do this by adding the following code in your HTML head:

````
<!-- Bootstrap CSS -->
<link rel="stylesheet" href="https://maxcdn.bootstrapcdn.com/bootstrap/3.3.7/css/bootstrap.min.css">

<!-- Bootstrap JavaScript -->
<script src="https://maxcdn.bootstrapcdn.com/bootstrap/3.3.7/js/bootstrap.min.js"></script>
````

Once you have included the Bootstrap files, you can start using the Dropdown component in your HTML markup.
Here's an example:

````
<div class="dropdown">
  <button class="btn btn-default dropdown-toggle" type="button" id="dropdownMenu1" data-toggle="dropdown" aria-haspopup="true" aria-expanded="true">
    Dropdown
    <span class="caret"></span>
  </button>
  <ul class="dropdown-menu" aria-labelledby="dropdownMenu1">
    <li><a href="#">Action</a></li>
    <li><a href="#">Another action</a></li>
    <li><a href="#">Something else here</a></li>
    <li role="separator" class="divider"></li>
    <li><a href="#">Separated link</a></li>
  </ul>
</div>
````

This will create a Dropdown button with a list of items that appear when the button is clicked.

## Options

You can customize the Dropdown component by using the following options:

### Dropdown Directions

You can add the `dropup` or `dropdown` class to the Dropdown component to change its direction:

````
<div class="dropdown dropup">
<!-- or -->
<div class="dropdown dropdown">
````

### Dropdown Alignment

You can add the `pull-right` class to the Dropdown component to align it to the right:

````
<div class="dropdown pull-right">
````

### Disabled Dropdown

You can add the `disabled` class to the Dropdown button to disable it:

````
<button class="btn btn-default dropdown-toggle disabled" type="button" id="dropdownMenu1" data-toggle="dropdown" aria-haspopup="true" aria-expanded="true">
````

### Dropdown Dividers

You can add the `divider` class to a li element in the Dropdown menu to create a divider:

````
<li role="separator" class="divider"></li>
````

### Dropdown Headers

You can add the `dropdown-header` class to a li element in the Dropdown menu to create a header:

````
<li class="dropdown-header">Header Text</li>
````

## Methods

You can also control the Dropdown component programmatically using JavaScript.

### Show and Hide Dropdown

You can show or hide a Dropdown component using the `show()` and `hide()` methods:


````
$('#myDropdown').show();
$('#myDropdown').hide();
````


### Toggle Dropdown

You can toggle a Dropdown component using the toggle() method:


````
$('#myDropdown').toggle();
````


## Events

You can also listen for events on the Dropdown component using JavaScript.

## Show and Hide Events

You can listen for the `show.bs.dropdown` and `hide.bs.dropdown` events, which are fired when the Dropdown component is about to be shown or hidden:


````
$('#myDropdown').on('show.bs.dropdown', function () {
  // do something...
});

$('#myDropdown').on('hide.bs.dropdown', function () {
  // do something...
});
````


### Shown and Hidden Events
You can listen for the `shown.bs.dropdown` and `hidden.bs.dropdown` events, which are fired after the Dropdown component is shown or hidden:


````
$('#myDropdown').on('shown.bs.dropdown', function () {
  // do something...
});

$('#myDropdown').on('hidden.bs.dropdown', function () {
  // do something...
});
````


Hence,
The Bootstrap Dropdown component is a versatile tool that can be used to create dropdown menus, navigation bars, and more. By using the options, methods, and events provided by Bootstrap, you can create custom dropdowns that fit the needs of your website or application.