# **INTRODUCTION:** 

JavaScript XML is abbreviated as JSX. It is simply a JavaScript syntax extension. It enables us to write HTML directly in React (within JavaScript code). It is simple to create a template in React using JSX, but it is not a simple template language; instead, it includes the full power of JavaScript. It is faster than regular JavaScript because it optimizes while translating to regular JavaScript.

SYNTAX: 

![jsx1](https://user-images.githubusercontent.com/101787864/213477503-18526671-4cbf-460a-bff1-f8d56a128046.jpg)

# **WHY JSX?**

•	It is faster than regular JavaScript because it optimizes the code while translating it to JavaScript.

•	React uses components that contain markup and logic, rather than separating technologies by putting markup and logic in separate files.

•	It facilitates the creation of templates.

•	It is type-safe, and most errors are caught during compilation.

# **CHARACTERISTICS OF JSX:** 

•	There are other ways to accomplish the same thing without using JSX, but using JSX makes developing a react application easier.

•	JSX allows you to write expressions in {}. Any JS expression or React variable can be used as the expression.

•	To insert a large block of HTML, we must use parenthesis, i.e. ().

•	JSX generates react elements.

•	JSX expressions are converted into regular JavaScript function calls after compilation.

•	For naming HTML attributes, JSX employs camelcase notation. TabIndex in JSX is equivalent to tabindex in HTML.

# **JSX ATTRIBUTES:**

JSX uses attributes with HTML elements in the same way that regular HTML does. Because class is a reserved keyword in JavaScript, JSX uses a camelcase naming convention for attributes rather than the standard naming convention of HTML. For example, a class in HTML becomes className in JSX. In JSX, we can also use our own custom attributes. We must use the data- prefix for custom attributes. We used a custom attribute data-demoAttribute as an attribute for the p> tag in the example below.


![jsx3](https://user-images.githubusercontent.com/101787864/213477795-50921f65-28f8-4bc7-983b-3f4b5890b317.jpg)


We can specify JSX attributes values in two ways:

1.	String Literals- Specifying values in double quotes.

![jsx4](https://user-images.githubusercontent.com/101787864/213477949-755306ff-3f25-4cac-b244-ce49e6a27b40.jpg)


2.	Expressions- Using curly braces, we can specify attribute values as expressions {}:
	
  
  ![jsx6](https://user-images.githubusercontent.com/101787864/213478088-79143a3b-500e-4ebd-aa1f-b21edc799c9b.jpg)


NESTED ELEMENTS IN JSX: If you want to use more than one element, you must wrap it in a container element. In this case, we're using div as a container element with three nested elements inside it.


![jsx2](https://user-images.githubusercontent.com/101787864/213478254-82ce200f-6983-49b5-8792-02791eac2e8e.jpg)


# **ADVANTAGES OF JSX:** 

•	JSX simplifies the creation of HTML in React.

•	HTML tags can be easily converted to react elements using JSX.

•	It runs faster than standard JavaScript.

•	We can use JSX to insert HTML elements into the DOM without using the appendChild() or createElement() methods.

•	 JSX is an expression, it can be used within if statements and for loops, assigned to variables, accepted as arguments, and returned from functions.

# **DISADVANTAGES OF JSX:**

•	If the HTML is incorrect, JSX throws an error.

•	HTML code in JSX must be wrapped in a single top-level element or else an error will occur.

•	JSX will throw an error if HTML elements are not properly closed.
