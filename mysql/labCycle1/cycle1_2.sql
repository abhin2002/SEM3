SET FOREIGN_KEY_CHECKS=0;
insert into employee values('1001','Vasu','hn1,vadayam,kuttiadi,kozhikode',
'm',50000,'s001','d001',45);
insert into employee values('1002','Haridasan','hn2,vadayam,kuttiadi,kozhikode',
'm',55000,'s002','d002',51);
insert into employee values('1003','Sajeevan','hn3,vadayam,kuttiadi,kozhikode',
'm',59000,'s003','d003',48);
insert into employee values('1004','Dineshan','hn4,vadayam,kuttiadi,kozhikode',
'm',55000,'s004','d004',46);
insert into employee values('1005','Janaki','hn5,vadayam,kuttiadi,kozhikode',
'f',38000,'s005','d005',53);
insert into department values('d1','computer science','1005','2022-04-16');
insert into department values('d2','DOE','1002','2022-01-15');
insert into department values('d3','SMS','1001','2022-08-10');
insert into department values('d4','SLS','1003','2022-12-12');
insert into department values('d5','computer science','1004','2022-04-16');
insert into dlocation values('d1','near university library');
insert into dlocation values('d2','1st floor of dcs dept');
insert into dlocation values('d3','near sbi cusat');
insert into dlocation values('d4','oposite of cusat sports arena');
insert into works_on values('1001','p1','10:00:00');
insert into works_on values('1002','p3','06:00:00');
insert into works_on values('1003','p2','12:00:00');
insert into works_on values('1004','p5','09:00:00');
insert into works_on values('1005','p4','11:00:00');
SET FOREIGN_KEY_CHECKS=1;
use company;
select * from employee;
select * from department;
select * from works_on;
update employee set salary = 25000 where SSN = '1001';
select * from employee;
delete from employee where SSN = '1002';
