# Write your MySQL query statement below
select w.id
from Weather w
INNER JOIN  Weather  wt
ON
DATEDIFF(w.recordDate , wt.recordDate) = 1
AND w.temperature > wt.temperature
