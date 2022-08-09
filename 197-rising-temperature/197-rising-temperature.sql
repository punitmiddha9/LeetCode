# Write your MySQL query statement below

select y.id from Weather x, Weather y where datediff(y.recordDate, x.recordDate) = 1 and x.temperature < y.temperature;