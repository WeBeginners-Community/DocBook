

# Pagination

Bootstrap Pagination is a component provided by the Bootstrap framework to allow users to navigate through multiple pages of content. 
It is widely used in web applications where large amounts of data need to be displayed in a structured manner.

<img src="https://user-images.githubusercontent.com/95307102/221269720-e5fb8627-d523-4ff6-9de6-55fbe81fb8b8.png">

This documentation will guide you through the basic usage of Bootstrap Pagination, as well as its advanced options.

## Basic Usage

To use Bootstrap Pagination, you need to include the necessary files in your HTML document. You can do this by adding the following code to your `<head>` section:

````
<!-- CSS -->
<link rel="stylesheet" href="https://stackpath.bootstrapcdn.com/bootstrap/4.5.0/css/bootstrap.min.css"
  integrity="sha384-OgVRvuATP1z7JjHLkuOU7Xw704+h835Lr+J13KjX/yjBQ5NQ6UvoQUkYYgJpvoBp"
  crossorigin="anonymous">

<!-- JS -->
<script src="https://code.jquery.com/jquery-3.5.1.slim.min.js"
  integrity="sha384-DfXdz2htPH0lsSSs5nCTpuj/zy4C+OGpamoFVy38MVBnE+IbbVYUew+OrCXaRkfj"
  crossorigin="anonymous"></script>
<script src="https://cdn.jsdelivr.net/npm/@popperjs/core@2.10.1/dist/umd/popper.min.js"
  integrity="sha384-h+07tjRUo/V2D09t1f/PX9v9peOcNGrPmbiXXLwkCTd95H91jGwOgOQ98hFTbJz"
  crossorigin="anonymous"></script>
<script src="https://stackpath.bootstrapcdn.com/bootstrap/4.5.0/js/bootstrap.min.js"
  integrity="sha384-OgVRvuATP1z7JjHLkuOU7Xw704+h835Lr+J13KjX/yjBQ5NQ6UvoQUkYYgJpvoBp"
  crossorigin="anonymous"></script>
  ````
  
After including the necessary files, you can create a pagination component by adding the following code to your HTML document:

````
<nav aria-label="Page navigation example">
  <ul class="pagination">
    <li class="page-item"><a class="page-link" href="#">Previous</a></li>
    <li class="page-item"><a class="page-link" href="#">1</a></li>
    <li class="page-item"><a class="page-link" href="#">2</a></li>
    <li class="page-item"><a class="page-link" href="#">3</a></li>
    <li class="page-item"><a class="page-link" href="#">Next</a></li>
  </ul>
</nav>
````

This will create a basic pagination component with five pages and a "Previous" and "Next" button.

## Advanced Options

Bootstrap Pagination provides several advanced options to customize the pagination component according to your needs.

### Sizing

You can change the size of the pagination component by adding one of the following classes to the `<ul>` element:

- `.pagination-lg`: large size
- `.pagination-sm`: small size

For example:


````
<nav aria-label="Page navigation example">
  <ul class="pagination pagination-lg">
    <li class="page-item"><a class="page-link" href="#">Previous</a></li>
    <li class="page-item"><a class="page-link" href="#">1</a></li>
    <li class="page-item"><a class="page-link" href="#">2</li>
    <li class="page-item"><a class="page-link" href="#">3</a></li>
    <li class="page-item"><a class="page-link" href="#">Next</a></li>
  </ul>
</nav>
````


### Alignment

You can align the pagination component to the left, center, or right of its container by adding one of the following classes to the `<nav>` element:

- `.justify-content-start`: aligns to the left
- `.justify-content-center`: aligns to the center
- `.justify-content-end`: aligns to the right

For example:

````
<nav aria-label="Page navigation example" class="justify-content-center">
  <ul class="pagination">
    <li class="page-item"><a class="page-link" href="#">Previous</a></li>
    <li class="page-item"><a class="page-link" href="#">1</a></li>
    <li class="page-item"><a class="page-link" href="#">2</a></li>
    <li class="page-item"><a class="page-link" href="#">3</a></li>
    <li class="page-item"><a class="page-link" href="#">Next</a></li>
  </ul>
</nav>
````

### Disabled and Active States

You can disable a page link by adding the `.disabled` class to the `<li>` element:

````
<nav aria-label="Page navigation example">
  <ul class="pagination">
    <li class="page-item disabled"><a class="page-link" href="#">Previous</a></li>
    <li class="page-item"><a class="page-link" href="#">1</a></li>
    <li class="page-item"><a class="page-link" href="#">2</a></li>
    <li class="page-item"><a class="page-link" href="#">3</a></li>
    <li class="page-item"><a class="page-link" href="#">Next</a></li>
  </ul>
</nav>
````

You can highlight the current page by adding the `.active` class to the `<li>` element:

````
<nav aria-label="Page navigation example">
  <ul class="pagination">
    <li class="page-item disabled"><a class="page-link" href="#">Previous</a></li>
    <li class="page-item"><a class="page-link" href="#">1</a></li>
    <li class="page-item active"><a class="page-link" href="#">2</a></li>
    <li class="page-item"><a class="page-link" href="#">3</a></li>
    <li class="page-item"><a class="page-link" href="#">Next</a></li>
  </ul>
</nav>
````

### Customization
You can customize the pagination component further by adding your own styles to the relevant Bootstrap classes or by creating your own classes and applying them to the relevant HTML elements.

Hence, 
Bootstrap Pagination is a powerful component that allows you to create intuitive navigation for your web application. By following the instructions in this documentation, you can easily create pagination components that are tailored to your specific needs.



