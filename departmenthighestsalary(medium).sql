# Write your MySQL query statement below
select d.name as Department, e.name as Employee, e.salary as Salary
from employee e
join department d on d.id=e.departmentId
where (e.salary, e.departmentId) in (
  select max(salary), departmentId
  from Employee
  group by departmentId
);
#max means highest
#in means belongs to
