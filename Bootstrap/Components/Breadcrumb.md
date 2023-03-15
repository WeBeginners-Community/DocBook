# BreadCrumb
This is a guide on how to use the Bootstrap BreadCrumb component.

<img src="https://user-images.githubusercontent.com/95307102/221256443-4f139e16-52e3-4aa1-bfc0-b6e1d4e65133.png">


## Usage
To use the BreadCrumb component in your website, you must first include the Bootstrap CSS and JavaScript files in your HTML. You can do this by adding the following code in your HTML head:

````
<!-- Bootstrap CSS -->
<link rel="stylesheet" href="https://maxcdn.bootstrapcdn.com/bootstrap/3.3.7/css/bootstrap.min.css">

<!-- Bootstrap JavaScript -->
<script src="https://maxcdn.bootstrapcdn.com/bootstrap/3.3.7/js/bootstrap.min.js"></script>
````

Once you have included the Bootstrap files, you can start using the BreadCrumb component in your HTML markup. 
Here's an example:

````
<nav aria-label="breadcrumb">
  <ol class="breadcrumb">
    <li class="breadcrumb-item"><a href="#">Home</a></li>
    <li class="breadcrumb-item"><a href="#">Library</a></li>
    <li class="breadcrumb-item active" aria-current="page">Data</li>
  </ol>
</nav>
````
This will create a simple BreadCrumb component with three items: "Home", "Library", and "Data". The "Data" item is the active item and has the `active` class.

## Options

You can customize the BreadCrumb component by using the following options:

### Separator

By default, the BreadCrumb component uses a slash (/) as a separator between items. You can customize the separator by adding the `separator` attribute to the `ol` element:

````
<nav aria-label="breadcrumb">
  <ol class="breadcrumb" separator="-">
    <li class="breadcrumb-item"><a href="#">Home</a></li>
    <li class="breadcrumb-item"><a href="#">Library</a></li>
    <li class="breadcrumb-item active" aria-current="page">Data</li>
  </ol>
</nav>
````
This will use a dash (-) as a separator between items.

### Link Attributes

You can add additional attributes to the `a` elements in each item by adding the `data-*` attribute to the `ol` element:

````
<nav aria-label="breadcrumb">
  <ol class="breadcrumb" data-toggle="tooltip" data-placement="bottom">
    <li class="breadcrumb-item"><a href="#">Home</a></li>
    <li class="breadcrumb-item"><a href="#">Library</a></li>
    <li class="breadcrumb-item active" aria-current="page">Data</li>
  </ol>
</nav>
````

This will add a tooltip to the a elements in each item.

Hence, 
The BreadCrumb component in Bootstrap is a useful navigation tool that helps users understand their location within a website. With the options available, you can customize the component to fit your website's design and functionality.
