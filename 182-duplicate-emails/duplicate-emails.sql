# Write your MySQL query statement below
SELECT DISTINCT p1.Email
from Person p1
Join Person p2
WHERE p1.Email = p2.Email and p1.Id <> p2.Id