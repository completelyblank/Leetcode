# Write your MySQL query statement below
select (
    select distinct salary from employee order by salary desc limit 1 offset 1
)
 as SecondHighestSalary;
 #offset skips
 #distinct gives different vals
 #order by desc => use some column and give results in the order given (big to small here)
