# Gutters

Gutters in Bootstrap refer to the horizontal and vertical space between columns and rows, respectively, in a grid layout. Gutters are used to create visual separation between elements in a layout and to ensure proper alignment.

Bootstrap provides several classes for adjusting gutters, including those for horizontal and vertical gutters, as well as for gutters between specific columns.

## Horizontal Gutters

To adjust horizontal gutters in a Bootstrap grid, use the `.gx-*` classes. The `*` in this class represents a number between 0 and 5, indicating the amount of gutter space to add.

For example, to add a small amount of horizontal gutter space, use the class `.gx-1`. To add a larger amount of gutter space, use the class `.gx-5`.

````
<div class="row gx-3">
  <div class="col">Column 1</div>
  <div class="col">Column 2</div>
  <div class="col">Column 3</div>
</div>
````

In the example above, each column will have 3px of horizontal gutter space between them.


## Vertical Gutters

To adjust vertical gutters in a Bootstrap grid, use the `.gy-*` classes. The `*` in this class represents a number between 0 and 5, indicating the amount of gutter space to add.

For example, to add a small amount of vertical gutter space, use the class `.gy-1`. To add a larger amount of gutter space, use the class `.gy-5`.

````
<div class="row gy-3">
  <div class="col">Column 1</div>
  <div class="col">Column 2</div>
  <div class="col">Column 3</div>
</div>
````

## Gutters Between Columns

To adjust gutters between specific columns in a Bootstrap grid, use the `.g-*-0` classes. The `* `in this class represents the breakpoint at which the gutter should be added (e.g. sm, md, lg, xl, or xxl). The 0 in this class indicates that no gutter should be added.

For example, to add a gutter between columns at the small breakpoint, use the class `.g-sm-1`. To add a gutter between columns at the extra large breakpoint, use the class `.g-xl-3`.

````
<div class="row">
  <div class="col">Column 1</div>
  <div class="col g-sm-2">Column 2</div>
  <div class="col">Column 3</div>
</div>
````

In the example above, a gutter of 2px will be added between columns 1 and 2 at the small breakpoint.

## Combining Gutters

You can also combine horizontal and vertical gutters, as well as gutters between specific columns, by using multiple gutter classes on the same element.

````
<div class="row gx-2 gy-3">
  <div class="col">Column 1</div>
  <div class="col g-sm-2">Column 2</div>
  <div class="col">Column 3</div>
</div>
````

In the example above, each column will have 2px of horizontal gutter space between them and each row will have 3px of vertical gutter space between them. Additionally, a gutter of 2px will be added between columns 1 and 2 at the small breakpoint.











