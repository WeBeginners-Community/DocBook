## What is MySQL-Python Connector?
As the name says, it connects Python and MySQL. This Python driver is used for communicating with MySQL. It allows you to run queries and fetch data from MySQL using Python.

## Why MySQL-Python Connector required?
Let's understand it with a real-world application. As an example, if there is one software for a student attendance system, it would require **MySQL Database** to store student data (such as roll number, name, date of birth, etc.) and a **Python Program** to take attendance. <br>
So with the **MySQL-Connector**, you can easily do this.

## How to install MySQL-Python Connector?
First, you need to make sure you install the correct version of the software. <br>

![Version_list](https://user-images.githubusercontent.com/93902835/220734133-7624863e-cbaf-4d7d-ad01-aaa76e56feb8.png)


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
**Database** = Name of the database which you want to connect. Here for example we are taking "**students_details**". <br> <br>
Note: Here, "**abc**" is the connection name (or object).  For using different methods, the connection name is required further in the code, so remembering it is useful. 

## Some basic MySQL methods in Python:

### cursor() 
Using the cursor method, you can execute SQL statements.

To create a cursor, use the cursor() method of a connection object:
```py
cur = abc.cursor() #Here "abc" is connection name (or object)
                   #And "cur" is cursor name
```
### execute() 
The execute() method runs the SQL query and returns the result.

This method executes the given database operation (query or command):
```py
cur.execute(data) # Here data is the query or command

#Example query or command:-
cur.execute("Select * from students1") #Here we are selecting all the records from table "students1" 
#All the fetched records will be stored in the "cur" (cursor name).                                     
```
### fetchall()
The fetchall() method is used to get the returned data from the cursor object ("cur" in our example).

This method read the query results:
```py
result_output = cur.fetchall() #here "cur" is the name of cursor
# And "result_output" will store list of tuples (rows from result)
```
Details of various types of fetch functions: <br>
<ul>
<li> <b>fetchall()</b>:- This method returns a list of tuples containing rows from a query result set. If no more rows are available in the query results, it returns an empty list.</li>
<li> <b>fetchmany(size=1)</b>:- With this method, you can specify the number of rows to fetch, and the number of rows returned is determined by the <b>"size argument"</b>. Default value of <b>"size argument"</b> is one. </li>
<li> <b>fetchone()</b>:- This method returns a single row of data, or <b>None</b> if no more rows are available. </li>
</ul>



### close()


