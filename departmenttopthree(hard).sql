# Write your MySQL query statement below
with RankedSalaries as (
  select
    e.name as Employee,
    d.name as Department,
    e.salary as Salary,
    DENSE_RANK() over (
      partition by e.departmentId
      order by e.salary desc
    ) as salary_rank
  from Employee e
  join Department d on e.departmentId = d.id
)
select Department, Employee, Salary
from RankedSalaries
where salary_rank <= 3;

#dense rank assigns ranks to each row
# partition by means seperating each data by some column

