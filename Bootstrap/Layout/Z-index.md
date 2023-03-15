# Z-Index

Z-index is a CSS property that determines the stacking order of elements on a web page. Elements with a higher z-index value will appear on top of elements with a lower z-index value.

Bootstrap provides several predefined z-index values that can be used to ensure that certain elements always appear on top of others.

### Naming Convention

Bootstrap uses a naming convention for its z-index values that helps to ensure consistency and avoid conflicts with other CSS styles.

The naming convention consists of two parts:

- A prefix that indicates the purpose of the z-index value
- A number that indicates the value of the z-index

The prefix is usually two or three letters that indicate the purpose of the z-index value. For example, `st` might indicate a z-index value for a sticky element, while `mo` might indicate a z-index value for a modal window.

The number indicates the actual value of the z-index. Lower numbers will appear below higher numbers in the stacking order.

## Predefined Values

Bootstrap provides several predefined z-index values that can be used in your own CSS styles.

Here are some of the most common z-index values:

- `0`: This is the default z-index value for most elements.
- `1`: This is a common z-index value for basic UI elements such as buttons and form controls.
- `10`: This is a common z-index value for dropdown menus and tooltips.
- `100`: This is a common z-index value for modals and other popups.
- `1000`: This is a common z-index value for elements that need to appear on top of everything else, such as overlays.

Here is an example of how to use a predefined z-index value:

````
.modal {
  z-index: 100;
}
````

In this example, the `.modal` class has a z-index value of 100, which ensures that the modal will appear on top of most other elements on the page.

## Custom Values

In addition to the predefined z-index values, you can also create your own custom z-index values using the naming convention described above.

For example, you might create a custom z-index value for a sticky navigation bar like this:

````
.sticky-nav {
  z-index: 1100; /* st (sticky) + 100 */
}
````

In this example, the .sticky-nav class has a z-index value of 1100, which ensures that the sticky navigation bar will appear on top of most other elements on the page, but below any overlays or popups with a z-index value of 1000 or higher.

Hence, 
Z-index is an important CSS property that can help you control the stacking order of elements on your web page. By using Bootstrap's predefined z-index values and naming convention, you can ensure that your CSS styles are consistent and easy to manage.



