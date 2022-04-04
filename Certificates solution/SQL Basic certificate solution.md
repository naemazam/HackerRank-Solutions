Structured Query Language (SQL) is one of the most important languages used in the industry. SQL is a standard language for storing, manipulating and retrieving data in database. SQL is a domain specific language used in programming and designed for managing data held in Relational Database Management System (RDBMS). It is particularly useful in handling structured data, i.e. data incorporating relations among entities and variables.

To solve student analysis problem you should join student_information table with examination_marks table on roll_number. Then group the results by roll number and find sum of total marks using having clause. Hackerrank student analysis sql solution is given below. It is highly recommended that please try yourself first then go to solution.

1.Student analysis SQL solution-

Select a.roll_number,a.name

from student_information a

inner join

examination_marks b

on a.roll_number = b.roll_number

group by b.roll_number

Having Sum(b.subject_one + b.subject_two + b.subject_three) < 100

Here other problem is to find a customers id, name, contact including country code and phone number from given customers table and country_codes table. And also you have to order the result by customer is. To solve this problem you have to left join country code table with customer table and order the result by customer id. Please try the solution yourself first.

2. Country codes SQL solution

select a.customer_id,a.name,concat("+",b.country_code,a.phone_number)

from customers as a

left join country_codes as b on a.country=b.country

order by a.customer_id

The other problem is Student Advisor from hackerrank. In this problem, A university has started a student-advisor plan which assigns a professor as an advisor to each student for academic guidance. Write a query to find the roll number and names of students who either have a male advisor with a salary of more than 15,000 or a female advisor with a salary of more than 20,000. There are two tables in the database: student_information and faculty_information. The primary key of student_information is roll_number whereas that of faculty_information is employee_ID. The solution of hackerrank student advisor is given below. You are recommended to try yourself first and then go to the solution.

3. Student Advisor SQL solution in MYSQL

select roll_number,name

from student_information a

inner join faculty_information b

on a.advisor = b.employee_ID

where (b.gender = 'M' and b.salary>15000) or (b.gender = 'F' and b.salary>20000)

Another problem from hackerrank sql basic certificate is Profitable stocks. In this problem, A stock is considered profitable if the predicted price is strictly greater than the current price. Write a query to find the stock_codes of all the stocks which are profitable based on this definition. Sort the output in ascending order. There are two tables in the database: price_today and price_tomorrow. Their primary keys are stock_code. The solution of hackerrank Profitable stocks is given below. You are recommended to try yourself first and then go to the solution.

4. Profitable Stocks SQL solution in MYSQL

select a.stock_code

from price_today a

inner join price_tomorrow b

on a.stock_code = b.stock_code

where b.price>a.price

order by stock_code asc

The solution of hackerrank sql basic certificate problem student analysis and country code is shared for your increasing knowledge. Please don’t copy the the code . You can use the code to make your understand clear.