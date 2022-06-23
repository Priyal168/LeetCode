# Write your MySQL query statement below
SELECT Name as Customers from Customers
WHERE Id NOT IN (SELECT CustomerId from Orders);
