create database company;
use company;
create table employee(SSN varchar(20),Name char(30),
Address varchar(60),sex char(10),salary int(90),superSSN varchar(20)
,DNo varchar(20));
desc employee;
create user 'user1'@'localhost'
identified by 'password';
grant select on company.employee to 'user1'@'localhost';
show grants for 'user1'@'localhost';
revoke select on employee from 'user1'@'localhost';
show grants for 'user1'@'localhost';
