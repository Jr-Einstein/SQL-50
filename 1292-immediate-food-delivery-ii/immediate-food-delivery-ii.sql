# Write your MySQL query statement below

select round(sum(if(order_date = customer_pref_delivery_date , 1 , 0))*100/count(distinct customer_id),2) as immediate_percentage
FROM Delivery
WHERE(customer_id , order_Date) IN
  ( select customer_id , MIN(order_date) AS first_order_date
  FROM Delivery
  group by customer_id
)