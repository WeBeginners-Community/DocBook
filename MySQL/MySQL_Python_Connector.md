## What is MySQL-Python Connector?
As the name says, it connects Python and MySQL. This Python driver is used for communicating with MySQL. It allows you to run queries and fetch data from MySQL using Python.

## Why MySQL-Python Connector required?
Let's understand it with a real-world application. As an example, if there is one software for a student attendance system, it would require **MySQL Database** to store student data (such as roll number, name, date of birth, etc.) and a **Python Program** to take attendance. <br>
So with the **MySQL-Connector**, you can easily do this.

## How to install MySQL-Python Connector?
Let's understand it with a real-world application. As an example, if there is one software for a student attendance system, it would require MySQL Database to store student data (such as roll number, name, date of birth, etc.) and a Python Program to take attendance. So with the MySQL-Connector, you can easily do this.

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
  
abc = mysql.connector.connect(
  host = "localhost",
  user = "root",
  passwd = "password",
  database= "students_details"
) #Passing all the necessary arguments to connect with the MySQL server
```
**Host** = The server name or IP address on which MySQL is running. If you are running MySQL on your local computer then use "**localhost**". <br>
**User** = It is your account username. The default username is "**root**". <br>
**Passwd** = It is a password for your account; by default, there is no password for the "**root**" user.<br>
**Database** = Name of the database which you want to connect <br> <br>
Note: "**abc**" is the connection name (or object) here.  For different methods, the connection name is required further in the code, so remembering it is useful. 

## Some basic MySQL methods in Python:

### cursor() 
Using the cursor method, you can execute SQL statements.

To create a cursor, use the cursor() method of a connection object:
```py
cur = abc.cursor() #Here abc is connection name
                   #And cur is cursor name
```
### execute() 
The execute() method runs the SQL query and returns the result.

This method executes the given database operation (query or command):
```py
cur.execute(data) # Here data is the query or command

#Example query or command:-
cur.execute("Select * from students1") #Here we are selecting all the records from table students1 
#All the records details will be stored in the cur (cursor name).                                     
```


### fetchall()


### close()


