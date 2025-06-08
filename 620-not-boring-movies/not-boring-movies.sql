# Write your MySQL query statement below
SELECT c.id , c.movie , c.description , c.rating
FROM Cinema c
WHERE id%2 != 0 AND c.description != 'boring' 
ORDER BY c.rating DESC