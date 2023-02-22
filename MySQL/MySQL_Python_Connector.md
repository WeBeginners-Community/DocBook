## What is MySQL-Python Connector?
As the name says, it connects Python and MySQL. This Python driver is used for communicating with MySQL. It allows you to run queries and fetch data from MySQL using Python.

## How to install MySQL-Python Connector?
First, you need to make sure you install the correct version of the software.

![Version_list](https://user-images.githubusercontent.com/93902835/220413037-9663c450-34d1-47de-814a-c6885d2b6d04.png)

It is necessary to have Python and PIP installed on your system in order to install the Python-MySQL-connector module. <br>
If Python and Pip are not installed, follow the instructions given [<ins>here</ins>](https://www.activestate.com/resources/quick-reads/how-to-install-pip-on-windows/). <br>
<br>
If Python and Pip are already installed, run the following commands in the Terminal (CMD).
<br>
<code>pip3 install mysql-connector-python</code>

## How To connect to MySQL in Python?
Before running queries in Python, we need to connect the MySQL server with Python using some commands. <br>
We can connect to the MySQL server using the connect() method of **mysql.connector**.

```py
import mysql.connector #importing MySQL Connector
  
dataBase = mysql.connector.connect(
  host ="localhost",
  user ="root",
  passwd ="password"
) #Passing all the necessary arguments to connect with the MySQL server
```
**Host** = The server name or IP address on which MySQL is running. If you are running MySQL on your local computer then use "**localhost**". <br>
**User** = It is your account username. The default username is "**root**". <br>
**Passwd** = It is a password for your account; by default, there is no password for the "**root**" user.<br>

## Some basic MySQL query in Python:
