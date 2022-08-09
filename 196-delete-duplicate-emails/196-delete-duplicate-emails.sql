# Please write a DELETE statement and DO NOT write a SELECT statement.
# Write your MySQL query statement below

delete y from Person x join Person y on x.email = y.email where x.id < y.id;