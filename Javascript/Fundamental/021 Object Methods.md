# Object Methods

As we already seen, an object can hold another object any many other data types.But objects can also hold functions.

e.g.: <code>
const john={
age:25,
city:"New York",
job:"Developer",
friends:["Harry","Sally"],
calcAge:function(birthYear){
return 2023-birthYear;
}
}

console.log(john.calcAge(1983)); //output: 40
console.log(john['calcAge'](1983)); //output: 40

</code>

> NOTE: Function declaration6 does not work inside objects.

## How to access the properties of the object inside the object methods?

We can do this using **this** keyword.
The this keyword in the object context is equal to the object calling the method.

e.g.: <code>
const john={
age:25,

city:"New York",

birthYear:1983, //**new line**

job:"Developer",

friends:["Harry","Sally"],

calcAge:function(){
return 2023-this.birthYear;
}
}

console.log(john.calcAge()); //output: 40

</code>

## We can also use **this** keyword to store the values

e.g.: <code>
const john={

age:25,

city:"New York",

birthYear:1983, //**new line**

job:"Developer",

friends:["Harry","Sally"],

calcAge:function(){

this.age=2023-this.birthYear;

return this.age;

}

}

console.log(john.calcAge()); //output: 40

console.log(john.age); //output: 40
console.log(john.age); //output: 40

</code>

As seen above, this.age will create a new property for the object. It works like when we assign a property to a object (john.country="USA").

---

### Remember we used methods on **Arrays** like array.push(), array.pop(),etc. So basically arrays are also objects but they have inbuilt to manipulate them
