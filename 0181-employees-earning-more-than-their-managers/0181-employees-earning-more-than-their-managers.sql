SELECT e1.name as Employee FROM
Employee e1
JOIN Employee e2
ON e2.id = e1.managerId
WHERE e2.salary < e1.salary;