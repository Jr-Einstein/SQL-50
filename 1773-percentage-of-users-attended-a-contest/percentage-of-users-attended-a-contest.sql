# Write your MySQL query statement below
select contest_id , ROUND(count( distinct user_id)*100/(SELECT COUNT(user_id) FROM Users) , 2)
AS percentage
from Register
GROUP BY contest_id
ORDER BY percentage DESC , contest_id