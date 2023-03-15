# Bootstrap Modal

Bootstrap Modal is a JavaScript plugin that displays a modal dialog box/popup window on top of the page content. The modal can be used for various purposes such as displaying important messages, images, videos, forms, and more.

<img src="https://user-images.githubusercontent.com/95307102/221265434-84629fd4-56ed-4756-b533-21e29b5e1471.png">

## Usage

To create a modal, you need to add the following HTML code to your page:

````
<div class="modal" tabindex="-1">
  <div class="modal-dialog">
    <div class="modal-content">
      <div class="modal-header">
        <h5 class="modal-title">Modal title</h5>
        <button type="button" class="btn-close" data-bs-dismiss="modal" aria-label="Close"></button>
      </div>
      <div class="modal-body">
        <p>Modal body text goes here.</p>
      </div>
      <div class="modal-footer">
        <button type="button" class="btn btn-secondary" data-bs-dismiss="modal">Close</button>
        <button type="button" class="btn btn-primary">Save changes</button>
      </div>
    </div>
  </div>
</div>
````

This code creates a basic modal with a title, body, and footer. You can customize the modal by adding additional HTML elements and classes.

To display the modal, you need to add a button or a link with the `data-bs-toggle` and `data-bs-target` attributes:

````
<button type="button" class="btn btn-primary" data-bs-toggle="modal" data-bs-target="#exampleModal">
  Launch demo modal
</button>
````

In this example, the data-bs-target attribute specifies the ID of the modal to be displayed.

## Options

Bootstrap Modal provides several options to customize the behavior of the modal. You can set these options using JavaScript or data attributes.

### Options via JavaScript
To set the options using JavaScript, you need to create a new instance of the Modal class:

````
var myModal = new bootstrap.Modal(document.getElementById('exampleModal'), {
  backdrop: 'static',
  keyboard: false
});
````

In this example, we set the backdrop and keyboard options to static and false, respectively.

### Options via data attributes

To set the options using data attributes, you need to add the attributes to the button or link that triggers the modal:

````
<button type="button" class="btn btn-primary" data-bs-toggle="modal" data-bs-target="#exampleModal" data-bs-backdrop="static
````


In this example, we set the `data-bs-backdrop` and `data-bs-keyboard` attributes to `static` and `false`, respectively.

Here are some of the available options:

| Option       | Type      | Default   | Description                                                        |
| ------------ | --------- | --------- | ------------------------------------------------------------------ |
| `backdrop`   | boolean   | `true`    | Includes a modal-backdrop element.                                 |
| `keyboard`   | boolean   | `true`    | Closes the modal when escape key is pressed.                       |
| `focus`      | boolean   | `true`    | Focuses the modal when opened.                                     |
| `show`       | boolean   | `true`    | Shows the modal when initialized.                                  |
| `remote`     | string    | `null`    | Loads a remote URL instead of a static modal.                       |
| `backdrop`   | string    | `'static'` | Controls the behavior of the backdrop. Can be `'static'` or `'true'`. |
| `keyboard`   | string    | `'true'`  | Controls the behavior of the escape key. Can be `'true'` or `'false'`.  |

For a full list of options, please refer to the official Bootstrap Modal documentation: https://getbootstrap.com/docs/5.0/components/modal/#options

## Methods

Bootstrap Modal provides several methods to control the behavior of the modal. You can call these methods using JavaScript.

Here are some of the available methods:

| Method          | Description                                                      |
| --------------- | ---------------------------------------------------------------- |
| `toggle()`      | Toggles the modal between open and closed states.                |
| `show()`        | Shows the modal.                                                 |
| `hide()`        | Hides the modal.                                                 |
| `handleUpdate()`| Manually readjust the modal's position if the size changes.       |

To call a method, you need to create a new instance of the `Modal` class and then call the method:

```javascript
var myModal = new bootstrap.Modal(document.getElementById('exampleModal'));

myModal.show();

In this example, we create a new instance of the `Modal` class and then call the `show()` method to display the modal.

For a full list of methods, please refer to the official Bootstrap Modal documentation: https://getbootstrap.com/docs/5.0/components/modal/#methods

## Events

Bootstrap Modal provides several events that you can use to trigger custom actions. You can listen to these events using JavaScript.


To listen to an event, you need to create a new instance of the `Modal` class and then add an event listener:

````
var myModal = new bootstrap.Modal(document.getElementById('exampleModal'));

myModal.addEventListener('shown.bs.modal', function () {
  // Do something when the modal is shown
});
````

In this example, we create a new instance of the `Modal` class and then add an event listener for the `shown.bs.modal` event.

For a full list of events, please refer to the official Bootstrap Modal documentation: https://getbootstrap.com/docs/5.0/components/modal/#events