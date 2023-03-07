• Introduction:

Strings are useful for holding data that can be represented in text form. Some of the most-used operations on strings are to check their length, to build and concatenate them using the + and += string operators, checking for the existence or location of substrings with the indexOf() method, or extracting substrings with the substring() method.The String object is used to represent and manipulate a sequence of characters.

• Creating Strings:
Strings can be created as primitives, from string literals, or as objects, using the String() constructor:

const string1 = "A string primitive";
const string2 = 'Also a string primitive';
const string3 = `Yet another string primitive`;

• Methods Of String:

 1. JavaScript  String Length : The length property returns the length of a string:-
 Example : let text = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
                         let length = text.length;

2. JavaScript String slice() : slice() extracts a part of a string and returns the extracted part in a new string.The method takes 2 parameters: start position, and end position (end not included).
     Example : let text = "Apple, Banana, Kiwi";
               let part = text.slice(7, 13);

3. JavaScript String substring(): substring() is similar to slice().The difference is that start and end values less than 0 are treated as 0 in substring().
          Example : let str = "Apple, Banana, Kiwi";
                     let part = str.substring(7, 13);

4.  JavaScript String substr() : substr() is similar to slice().The difference is that the second parameter specifies the length of the extracted part.
        Example: let str = "Apple, Banana, Kiwi";
                let part = str.substr(7);

5. Replacing String Content : The replace() method replaces a specified value with another value in a string.
            Example : let text = "Please visit Microsoft!";
                      let newText = text.replace("MICROSOFT");

6. JavaScript String trim() : The trim() method removes whitespace from both sides of a string.
              Example : let text1 = "      Hello World!      ";
                        let text2 = text1.trim();

7. JavaScript String padStart() : The padStart() method is a string method.To pad a number, convert the number to a string first.
              Example : let numb = 5;
                        let text = numb.toString();
                        let padded = text.padStart(4,"0");

8. JavaScript String toUpperCase() : A string is converted to upper case with toUpperCase().
             Example : let text1 = "Hello World!";
                       let text2 = text1.toUpperCase();

9. JavaScript String split() : A string can be converted to an array with the split() method.
            Example : text.split(",")    // Split on commas
                      text.split(" ")    // Split on spaces
                      text.split("|")    // Split on pipe
