# HTML 

HTML - **H**yper **T**ext **M**arkup **L**anguage

HTML is the standard markup language for Web pages. With it you can create your own website. It uses tags to define structure which further have attributes which we will discuss in detail .

It is easy to learn - You will enjoy it!



## WHERE TO WRITE ?
 
 There are various editors available
    * Sublime Text
    * Notepad
    * VS CODE

:exclamation: Do not use MS WORD for the same

## HTML Tags and Attributes

Tags are used to mark up the start of an HTML element and they are usually enclosed in angle brackets (<>)

eg: ![1](https://cdo-curriculum.s3.amazonaws.com/media/uploads/html_element.png)

here title tag is opened and closed and text to be printed is written between them.

Attributes contain additional pieces of information. Attributes take the form of an opening tag and additional info is placed inside.

eg : ![2](https://dotnettutorials.net/wp-content/uploads/2021/10/word-image-115.png)

here we have added the src and alt attribute to the HTML IMG element.

so we can understand 

**TAGS** --> SKELETON/BODY 

**ATTRBUTES** --> FEATURE/CHARACTERISTICS


## Some rules to keep in mind

1. A tag is opened < tag_name > like this and closed using a forwardslash symobl (*/*) like < /tag_name >.

2. A tag opened must be closed unless not required . eg: we saw that title tag must be closed but img tag doesn't require a closing tag.

3. Wrap and indent the tags properly. The tag that open first closes last. Follwing is an example of a mistake.
![3](https://clearlydecoded.com/assets/images/posts/2017-09-04-anatomy-of-html-tag/close-opened-tags-first.png)

:exclamation: Since the div tag was opened last, it must be closed first, before the outer h1 tag is closed.

## Basic HTML Structure

A basic HTML file looks like this
![4](https://media.geeksforgeeks.org/wp-content/cdn-uploads/20220401160946/HTML-Basic-Format.png)

Line 1: All HTML documents must start with a <!DOCTYPE> declaration.
The declaration is not an HTML tag. It tells the version of HTML the page is written in.

Line 2 and 10: Opening and Closing HTML tag respectively (marking start and end of html doc)

Line 3 and 5:  Opening and Closing head tag respectively (marking start and end of head of file , defining title)

Line 4: Defining title tag , which contains title of the webpage

Line 6 and 9:  Opening and Closing body tag respectively (Hold content of HTML document)

Line 7: Defining h1 tag , which contains heading of the webpage

Line 8: Defining p tag , which contains paragraph of the webpage

## Some Important Tags 

1. To set text in **boldface** we use bold tag : < b > This is bold text < /b >
![5](https://www.includehelp.com/html/images/b-tag-output.jpg)

2. To set text in _italicface_ we use italic tag : < i > This is italic text < /i >

![6](https://www.roseindia.net/tutorialfiles/31298.htmlItalic.jpg)

3. To write a paragraph we use paragraph tag : < p > write your para < /p >

![7](https://developer.mozilla.org/en-US/docs/Learn/Getting_started_with_the_web/HTML_basics/grumpy-cat-small.png)

4. Headings have differnent tags depending upon the size 

eg: ![8](http://mason.gmu.edu/~smeruva/headings_snp.JPG)

Output: ![9](https://www.tutorialrepublic.com/lib/images/html/html-headings.png)

5. To aligh the text to the center of the page horizontally : < center > center aligned text < /center >

![10](https://i.ytimg.com/vi/1We9uDMDFQ8/maxresdefault.jpg)
6. To insert a line break < br > tag is used , it inserts a horizontal line

![11](https://www.w3docs.com/uploads/media/default/0001/01/83395ae551d92691b4319c507197339031f32414.png)

7. To insert images , < img > tag is used along with attributes discussed further

![12](https://cdo-curriculum.s3.amazonaws.com/media/uploads/img_tag.png)

8. To insert links we use < a > .... < /a> tag , the attributes used are shared ahead.

![13](https://pbs.twimg.com/media/FGdoueBUcAIqNef?format=jpg&name=900x900)


## Some Important Attributes

1. For img tag:
    src: to specify the path of file location
    alt: the name to be displayed in alternative
    width: to specify the width of the image (in pixels)
    height: to specify the height of the image (in pixels)

![14](https://cdo-curriculum.s3.amazonaws.com/media/uploads/img_tag.png)

2. For hyperlink tag:
    href : to specify the link 

![15](https://qph.cf2.quoracdn.net/main-qimg-ac4b8105b4a26a3a65490aae4504a1bc)

3. For body tag:
    background:It determines the background image for the document.
    bgcolor:It determines the background color of the content.
    text : It determines the text

![16](https://sapnesakar.com/HTML/lesson_03/Html_Body_Attribute.png)

## Creating a webpage using what we have learnt so far

![17](code.jpg)

![18](out3.jpg)
 













