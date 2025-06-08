# Write your MySQL query statement below
select p.product_id , IFNULL(ROUND(SUM(p.price * s.units)/SUM(s.units) , 2),0) as average_price
from Prices p
LEFT JOIN UnitsSold s
on p.product_id = s.product_id
AND s.purchase_date >= p.start_date
AND s.purchase_date <= p.end_date
GROUP BY p.product_id