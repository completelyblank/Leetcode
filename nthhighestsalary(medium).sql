CREATE FUNCTION getNthHighestSalary(N INT) RETURNS INT
DETERMINISTIC
BEGIN
  DECLARE val INT;

  SET val = N - 1;

  RETURN (
    select distinct salary from employee
    order by salary desc limit 1 offset val
  );
END;
