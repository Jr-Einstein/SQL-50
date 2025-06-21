-- Write your MySQL query statement below
SELECT 
    ROUND(SUM(tiv_2016), 2) AS tiv_2016
FROM 
    insurance n
WHERE 
    (lat, lon) NOT IN (
        SELECT lat, lon 
        FROM insurance i 
        WHERE n.pid != i.pid
    )
    AND tiv_2015 IN (
        SELECT tiv_2015 
        FROM insurance i 
        WHERE n.pid != i.pid
    );