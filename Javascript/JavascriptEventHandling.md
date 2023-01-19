• Introduction:

Whenever there is any change in the state of an object is known as an Event. In html, there are various events which represents that some activity is performed by the user or by the browser. When javascript code is included in HTML, js react over these events and allow the execution. This process of reacting over the events is called Event Handling. Thus, js handles the HTML events via Event Handlers.

For example, when a user clicks over the browser, add js code, which will execute the task to be performed on the event.

Often, when events happen, you may want to do something.JavaScript lets you execute code when events are detected.HTML allows event handler attributes, with JavaScript code, to be added to HTML elements.

                            <element event='some JavaScript'>

            
• Sample code of Event Handling:

    <!DOCTYPE html>

    <html>

    <body>

    <button onclick="document.getElementById('dem').innerHTML=Date()">The time is</button>

    <p id="dem"></p>

    </body>

    </html>

• Code Explaination

In the above example ,whenever any user clicks on the button so at that time "onclick" event or action takes place which then JavaScript code changes the content of the element with id="demo".It will display the current date after executing the Date function which is present in the code.

• Mouse events:

![image](https://user-images.githubusercontent.com/59620280/213414436-e109fcfe-da74-4fd1-89d5-feb0363cf497.png)

• Keyboard events:




• JavaScript Event Handlers

     1)Event handlers can be used to handle and verify user input, user actions, and browser actions:

     2)Things that should be done every time a page loads.

     3)Things that should be done when the page is closed.

     4)Action that should be performed when a user clicks a button.

     5)Content that should be verified when a user inputs data.

