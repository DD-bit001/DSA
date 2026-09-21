# Write your MySQL query statement below
select e1.name as Employee from Employee e1
join employee e2 
where e1.salary>e2.salary and e1.id<>e2.id and e1.managerid=e2.id;