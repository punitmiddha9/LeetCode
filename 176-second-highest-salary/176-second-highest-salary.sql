# Write your MySQL query statement below

# METHOD 1
# select max(salary) as SecondHighestSalary from Employee where salary < (select max(salary) from Employee);

# METHOD 2
select max(e2.salary) as SecondHighestSalary from Employee e1, Employee e2 where e1.salary > e2.salary;