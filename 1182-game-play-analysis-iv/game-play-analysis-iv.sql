# Write your MySQL query statement below
select 
    round(count(distinct a1.player_id)/(select count(distinct player_id) from   activity),2) as fraction
    from activity a1 join activity a2
    on a1.player_id = a2.player_id
    and a1.event_date = date_sub(a2.event_date,interval 1 day)
    where a1.event_date = (
        select min(event_date) from activity a3
        where a1.player_id = a3.player_id)