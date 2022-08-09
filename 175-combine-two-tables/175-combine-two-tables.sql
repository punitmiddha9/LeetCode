# Write your MySQL query statement below
select Person.firstName, Person.LastName, Address.city, address.state from Person left join Address on Person.personId = Address.personId;