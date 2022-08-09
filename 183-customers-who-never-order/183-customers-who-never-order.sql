# Write your MySQL query statement below

select n.name as Customers from Customers n left join Orders m on n.id = m.customerid where m.id is NULL;