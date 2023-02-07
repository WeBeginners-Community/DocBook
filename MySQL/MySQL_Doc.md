## What is SQL (Structured Query Language)?
During the 1960s, Donald Chamberlin and Raymond F. Boyce developed **SQL** at **IBM**. It is a Query Language used for maintaining data or databases. Because **SQL** is not a programming language like **Python** or **C++**, it cannot be used for complex programming; it can only be used with databases.
<br> The original name of **SQL** was **SEQUEL** which is short form for **"Structured English Query Language"**. Later, it was renamed **SQL** because **SEQUEL** was a trademark of Hawker Siddeley Dynamics Engineering Limited.

## Why we need SQL?
Database operations, such as inserting, editing, and deleting records, are performed using **SQL**. With **SQL**, you can handle a lot of data very easily, and it's also fast when compared with other data analysis programs like **Microsoft Excel**. Queries in **SQL** are simple to understand because they are written in structured english that anyone can understand.

## What is MySQL?
**SQL** is not a database system, but it is a query language. **MySQL** is a database management system (**DBMS**) that uses **SQL**. In Simple words, **MySQL** is software that works with "**Structured Query Language**". The **Oracle Corporation** developed **MySQL** and it is open-source (free for everyone to use).

## Why we need MySQL?
A database is a structured collection of data. It may be anything from a simple shopping list to a picture gallery or the vast amounts of information in a corporate network. To add, access, and process data stored in a computer database, you need a database management system such as **MySQL**. Large databases could be handled much faster on **MySQL** than with existing solutions.

## Features of MySQL:
<ul>
<li> <b>Open Source:</b> Open Source means that it is possible for anyone to use and modify the software. Anybody can download the MySQL software from the Internet and use it without paying anything.</li>
<li> <b>Relational Databases:</b> A relational database stores data in distinct tables rather than in a single large storehouse. The database structures are grouped into tabels that are optimised for performance. </li>
<li> <b>Connectivity and Security:</b> Using MySQL, you can access databases remotely from anywhere on the World. Host-based authentication is enabled by passwords that are encrypted during connection.</li>
</ul>

## Some Examples of MySQL Query:
<ul>
<li> <b>Create Database in MySQL:</b> A Database is a collection of Tables that stores every Table in a single collection.</li>
<b>Query:-</b> <code>CREATE DATABASE movies;</code> <br>(<i>Here <b>"movies"</b> is the name of the Database.</i>)<p>

<li><b>Fetch Data from Database:</b> <code>SELECT</code> query is used to return tables from the databases in MySQL. A table is used to store the data in an Organized way.</li>
<b>Query:-</b> <code>SELECT cast FROM minions;</code> <br>(<i>Here <b>"minions"</b> is the name of the Table which is stored in the Database <b>"movies"</b>. And <b>"cast"</b> is the name of a column of table <b>"minions"</b></i>)<p>
  
  <li> <b>Add a row in the table:</b> To add a new row in the table <code>INSERT INTO</code> query is used. In the query, you need to specify the names of the columns that the new row contains and the values for those columns.</li>
<b>Query:-</b> <code>INSERT INTO minions(rating,cast,budget) values ('4/5','Steve Carell','$74000000');</code> <br>(<i>Here <b>(rating,cast,budget)</b> is the name of the columns and <b>('4/5','Steve Carell','$74000000')</b> is the values for the columns</i>)
</ul>

**Note:-** Every query must end with semi-colon (;).

### Example Table:
![table_image](https://user-images.githubusercontent.com/93902835/214905449-5724ac1c-249f-447a-acf2-836ee7692f1e.png)



## MySQL Download Link
https://dev.mysql.com/downloads/mysql/

## Fun Fact:
The official way to pronounce “MySQL” is “My Ess Que Ell” (not “my sequel”).

