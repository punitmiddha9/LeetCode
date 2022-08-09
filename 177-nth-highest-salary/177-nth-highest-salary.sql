CREATE FUNCTION getNthHighestSalary(N INT) RETURNS INT
BEGIN
declare M INT;
set M = N-1;
  RETURN (
      # Write your MySQL query statement below.

      # METHOD 1
      # select distinct salary from Employee order by salary desc limit M, 1
      
      # METHOD 2
      select distinct salary from Employee order by salary desc limit 1 offset M
  );
END