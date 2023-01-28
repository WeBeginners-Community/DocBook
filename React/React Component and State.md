## React Components
A Component is one of the core building blocks of React. Components are independent and reusable bits of code. They serve the same purpose as JavaScript functions, but work in isolation and return HTML.Components make the task of building UIs much easier. You can see a UI broken down into multiple individual pieces called components and work on them independently and merge them all in a parent component which will be your final UI. 
You can see Google’s custom search at the top can be seen as an individual component, the navigation bar can be seen as an individual component, the sidebar is an individual component, the list of articles or post is also an individual component and finally, we can merge all of these individual components to make a parent component which will be the final UI for the homepage.
Components come in two types, Class components and Function components. That’s are discussed below. 
When creating a React component, the component's name MUST start with an upper case letter.
# Class Component
A class component must include the extends React.Component statement. This statement creates an inheritance to React.Component, and gives your component access to React.Component's functions.
The component also requires a render() method, this method returns HTML.
# Example
Create a Class component called Car

![image](https://user-images.githubusercontent.com/103322378/215274502-fec834aa-fb3a-44e2-9fda-9c0f41f9a4eb.png)


# Function Component
Here is the same example as above, but created using a Function component instead.
A Function component also returns HTML, and behaves much the same way as a Class component, but Function components can be written using much less code, are easier to understand.
# Example

Create a Function component called Car
 
 ![image](https://user-images.githubusercontent.com/103322378/215274523-28e1a92a-4804-4444-b739-f062f25e1701.png)

 
# Rendering a Component
Now your React application has a component called Car, which returns an <h2> element.To use this component in your application, use similar syntax as normal HTML: <Car />
  
# Example
  
Display the Car component in the "root" element:
 
  ![image](https://user-images.githubusercontent.com/103322378/215274543-06a44197-7486-4e0c-a37f-d65520f9d6a9.png)

  
# Composing Components
Components can refer to other components in their output. This lets us use the same component abstraction for any level of detail. A button, a form, a dialog, a screen: in React apps, all those are commonly expressed as components.
For example, we can create an App component that renders Welcome many times:
function Welcome(props) {
  return <h1>Hello, {props.name}</h1>;
}

function App() {
  return (
    <div>
      <Welcome name="Sara" />
      <Welcome name="Cahal" />
      <Welcome name="Edite" />
    </div>
  );
}
# Props
Components can be passed as props, which stands for properties.
Props are like function arguments, and you send them into the component as attributes.
Example
Use an attribute to pass a color to the Car component, and use it in the render() function:
  
  ![image](https://user-images.githubusercontent.com/103322378/215274586-0e83cd0c-0b44-49b0-a140-dda817ba90dc.png)

  
 Components in Components
We can refer to components inside other components:
Example
Use the Car component inside the Garage component: 
 
## React State
The state is an updatable structure that is used to contain data or information about the component. The state in a component can change over time. The change in state over time can happen as a response to user action or system event. A component with the state is known as stateful components. It is the heart of the react component which determines the behavior of the component and how it will render. They are also responsible for making a component dynamic and interactive.
A state must be kept as simple as possible. It can be set by using the setState() method and calling setState() method triggers UI updates. A state represents the component's local state or information. It can only be accessed or modified inside the component or by the component directly. To set an initial state before any interaction occurs, we need to use the getInitialState() method.
For example, if we have five components that need data or information from the state, then we need to create one container component that will keep the state for all of them.
# Defining State
To define a state, you have to first declare a default set of values for defining the component's initial state. To do this, add a class constructor which assigns an initial state using this.state. The 'this.state' property can be rendered inside render() method.
# Example
The below sample code shows how we can create a stateful component using ES6 syntax.
import React, { Component } from 'react';  
class App extends React.Component {  
 constructor() {  
      super();        
      this.state = { displayBio: true };  
      }  
      render() {  
          const bio = this.state.displayBio ? (  
              <div>  
                  <p><h3> The state is a built-in React object that is used to contain data or information about the component. A component’s state can change over time; whenever it changes, the component re-renders.</h3></p>   
            </div>  
              ) : null;  
              return (  
                  <div>  
                      <h1> Hello World!! </h1>  
                      { bio }   
                  </div>  
              );  
     }  
}  
export default App;  

To set the state, it is required to call the super() method in the constructor. It is because this.state is uninitialized before the super() method has been called.

# Changing the State
We can change the component state by using the setState() method and passing a new state object as the argument. Now, create a new method toggleDisplayBio() in the above example and bind this keyword to the toggleDisplayBio() method otherwise we can't access this inside toggleDisplayBio() method.
1.	this.toggleDisplayBio = this.toggleDisplayBio.bind(this);  
Example
In this example, we are going to add a button to the render() method. Clicking on this button triggers the toggleDisplayBio() method which displays the desired output.

import React, { Component } from 'react';  
class App extends React.Component {  
 constructor() {  
      super();        
      this.state = { displayBio: false };  
      console.log('Component this', this);  
      this.toggleDisplayBio = this.toggleDisplayBio.bind(this);  
      }  
      toggleDisplayBio(){  
          this.setState({displayBio: !this.state.displayBio});  
          }  
      render() {  
          return (  
              <div>  
                  <h1>Hello World!!</h1>  
                  {  
                      this.state.displayBio ? (   
                          <div>  
                              <p><h4> The state is a built-in React object that is used to contain data or information about the component. A component’s state can change over time; whenever it changes, the component re-renders.</h4></p>  
                              <button onClick={this.toggleDisplayBio}> Show Less </button>  
                        </div>  
                          ) : (  
                              <div>  
                                  <button onClick={this.toggleDisplayBio}> Read More </button>  
                              </div>  
                          )  
                  }  
             </div>  
        )  
    }  
}  
export default App;  
































































