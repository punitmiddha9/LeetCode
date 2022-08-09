# Write your MySQL query statement below

-- METHOD 1
UPDATE salary SET sex = CASE sex
    WHEN 'f' THEN 'm'
    WHEN 'm' THEN 'f'
END

-- METHOD 2
# Update salary SET sex = IF(sex ='f',"m","f");