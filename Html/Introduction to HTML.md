# What is HTML?
HTML is a markup language that defines the structure of your content. HTML consists of a series of **elements**, which you use to enclose, or wrap, different parts of the content to make it appear a certain way, or act a certain way.

# Anatomy of an HTML document
```
<!DOCTYPE html>
<html lang="en-US">
  <head>
    <meta charset="utf-8" />
    <meta name="viewport" content="width=device-width" />
    <title>My test page</title>
  </head>
  <body>
    <img src="images/my_image.png" alt="My test image" />
  </body>
</html>
```

Here, we have the following:

- `<!DOCTYPE html>` -It is a required preamble. They are basically just needed to make sure your document behaves correctly.

- `<html></html>` - This element wraps all the content on the entire page and is sometimes known as the root element.

- `<head></head>` - This element acts as a container for all the stuff you want to include on the HTML page that isn't the content you are showing to your page's viewers.

- `<title></title>` - This sets the title of your page, which is the title that appears in the browser tab the page is loaded in.

- `<body></body>` - This contains all the content that you want to show to web users when they visit your page, whether that's text, images, videos, games, playable audio tracks, or whatever else.

# Anatomy of an HTML element

```
Opening tag                               Closing tag
    |                                          |
   <p class="p-tag"> This is a paragraph tag </p>
         |                     |
     Attribute              Content
   |____________________________________________|
                      Element
```

The main parts of our element are as follows:

1. **The opening tag:** This consists of the name of the element, wrapped in opening and closing **angle brackets**. This states where the element begins or starts to take effect.

2. **The closing tag:** This is the same as the opening tag, except that it includes a forward slash before the element name. This states where the element ends.

3. **The content:** This is the content of the element, which in this case, is just text.

4. **The element:** The opening tag, the closing tag, and the content together comprise the element.

5. **Attributes:** Attributes contain extra information about the element that you don't want to appear in the actual content.

# Images

```
<img src="images/my_image.png" alt="My test image" />
```

It embeds an image into our page in the position it appears. It does this via the `src` (source) attribute, which contains the path to our image file.

In the `alt` attribute, you specify descriptive text for users who cannot see the image.

# Marking up text
## Comments
Anything in HTML between `<!-- and -->` is an HTML comment. The browser ignores comments as it renders the code. In other words, they are not visible on the page. HTML comments are a way for you to write helpful notes about your code or logic.

```
<!-- This is a comment -->
```

## Headings
Heading elements allow you to specify that certain parts of your content are headings or subheadings. HTML contains 6 heading levels, `<h1> - <h6>`

```
<h1> My main title </h1>
<h2> My sub-heading </h2>
```

## Paragraphs
`<p>` elements are for containing paragraphs of text; you'll use these frequently when marking up regular text content.

```
<p> This is a single paragraph </p>
```

## Lists
A lot of the web's content is lists and HTML has special elements for these. The most common list types are ordered and unordered lists:

1. **Unordered lists** are for lists where the order of the items doesn't matter. These are wrapped in a `<ul>` element.

```
<ul>
  <li> Books </li>
  <li> Pens </li>
</ul>
```

2. **Ordered lists** are for lists where the order of the items does matter. These are wrapped in an `<ol>` element.

```
<ol>
  <li> Exercise </li>
  <li> Read </li>
</ol>
```

Each item inside the lists is put inside an `<li>` (list item) element.

# Links
Links are very important - they are what makes the web a web! To add a link, we need to use a simple element - `<a>` - "a" being the short form for "anchor".

To make text within your paragraph into a link, follow these steps:

1. Choose some text. We chose the text "DocBook".

2. Wrap the text in an `<a>` element, as shown below:
```
<a>DocBook</a>
```

3. Give the `<a>` element an href attribute, as shown below:
```
<a href="">DocBook</a>
```

4. Fill in the value of this attribute with the web address that you want the link to:
```
<a href="https://github.com/WeBeginners-Community/DocBook">DocBook</a>
```