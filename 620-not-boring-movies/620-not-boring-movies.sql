# Write your MySQL query statement below

select * from Cinema where not Mod(id, 2) = 0 and not description = 'boring' order by rating desc; 