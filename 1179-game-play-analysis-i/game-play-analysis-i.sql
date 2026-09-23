# Write your MySQL query statement below
select distinct(player_id) as player_id ,event_date as first_login 
from Activity a

where  event_date= (select min(b.event_date)
from Activity b
where a.player_id=b.player_id)