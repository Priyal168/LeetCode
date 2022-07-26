# Write your MySQL query statement below
-- highest salary:

SELECT max(salary) as SecondHighestSalary 
from Employee 
WHERE salary!=(SELECT max(salary) from Employee); 

