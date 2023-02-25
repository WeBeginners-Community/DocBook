# Alerts

Bootstrap alerts are a way to display important messages to users. They can be used to indicate success, warning, error, or other types of messages.

<img src="https://user-images.githubusercontent.com/95307102/221255628-4534d5b1-b1a8-41dc-b6d9-2a9231e238d1.png">


## Usage

To use an alert, you need to add the `alert` class to a `div` element, along with a class indicating the type of alert you want to display:

````
<div class="alert alert-primary" role="alert">
  This is a primary alert—check it out!
</div>
````

In this example, the `alert-primary` class is used to display a blue alert with a "Primary" label.

Here are the classes you can use to create different types of alerts:

- `.alert-primary`
- `.alert-secondary`
- `.alert-success`
- `.alert-danger`
- `.alert-warning`
- `.alert-info`
- `.alert-light`
- `.alert-dark`

You can also add a `dismiss` button to an alert by including a `button` element with the class `close` and the attribute `data-dismiss="alert"`:

````
<div class="alert alert-warning alert-dismissible fade show" role="alert">
  <strong>Warning!</strong> Better check yourself, you're not looking too good.
  <button type="button" class="close" data-dismiss="alert" aria-label="Close">
    <span aria-hidden="true">&times;</span>
  </button>
</div>
````

In this example, a yellow alert with a dismiss button is displayed.

## Options
### Dismissing alerts
To add a dismiss button to an alert, add the `.alert-dismissible` and `.fade` classes to the `div` element:

````
<div class="alert alert-warning alert-dismissible fade show" role="alert">
  <strong>Warning!</strong> Better check yourself, you're not looking too good.
  <button type="button" class="close" data-dismiss="alert" aria-label="Close">
    <span aria-hidden="true">&times;</span>
  </button>
</div>
````

### Additional content

You can add additional content to an alert by placing it inside the `div` element:

````
<div class="alert alert-info" role="alert">
  <h4 class="alert-heading">Well done!</h4>
  <p>Aww yeah, you successfully read this important alert message. This example text is going to run a bit longer so that you can see how spacing within an alert works with this kind of content.</p>
  <hr>
  <p class="mb-0">Whenever you need to, be sure to use margin utilities to keep things nice and tidy.</p>
</div>
````

In this example, a blue alert with a heading, paragraphs, and a horizontal rule is displayed.

### Link color

You can change the color of links within an alert by using the `.alert-link` class:

````
<div class="alert alert-primary" role="alert">
  This is a primary alert with <a href="#" class="alert-link">an example link</a>. Give it a click if you like.
</div>
````

In this example, a blue alert with a link is displayed.

Hence,
Bootstrap alerts are a simple and effective way to display important messages to users. By using the various classes and options provided, you can create alerts that are both informative and visually appealing.



