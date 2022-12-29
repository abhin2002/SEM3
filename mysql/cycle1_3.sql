create user 'user'@localhost
    IDENTIFIED by 'password';

grant select on company.employee to 'user'@'localhost';

show grants for 'user'@'localhost';

revoke select on employee from 'user'@'localhost';
show grants;
select name from employee where name like "%a_";
select Sex,count(Sex) from employee group by Sex;
select avg(Salary) from employee where  Sex = "F" ;
select sum(Salary) from employee where  Sex = "M" ;
select max(Salary),min(Salary) from employee where  Sex = "M" ;
select * from employee where salary between 25000 and 50000;
select name from employee where salary = 30000 or salary = 40000 or salary = 50000;
update employee set salary = salary + 0.25* salary where Address = 'hn1,vadayam,kuttiadi,kozhikode';
select name,Dloc from employee,dlocation,works_on where dlocation.Dno = employee.Dno and works_on.SSN = employee.SSN and Hours > 1;
select Dloc,Pno from employee,works_on,dlocation
     where works_on.SSN = employee.SSN and
     dlocation.Dno = employee.Dno and works_on.Hours is NOT NULL;
select Name,Hours from employee,works_on,dlocation
     where works_on.SSN = employee.SSN and
     dlocation.Dno = employee.Dno and dlocation.Dloc is NOT NULL;
select works_on.Pno,employee.Name,dlocation.Dloc,employee.Dno,employee.SSN,works_on.hours from employee,works_on,dlocation
	where works_on.SSN = employee.SSN and
     dlocation.Dno = employee.Dno ;
