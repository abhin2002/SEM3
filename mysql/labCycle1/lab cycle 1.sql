create database company;
use company;
create table employee(SSN varchar(20),Name char(30),
Address varchar(60),sex char(10),salary int(90),superSSN varchar(20)
,DNo varchar(20));
desc employee;
create table department(DNo varchar(20),Dname char(50),
MgrSSN varchar(30),MgrStartDate  date);
desc department;
create table dlocation(DNo varchar(30),DLoc varchar(90));
desc dlocation;
create table project(PNo varchar(30),Pname char(90),
Plocation varchar(80),DNo varchar(50));
desc project;
create table works_on(SSN varchar(60),PNo varchar(50),Hours time);
desc works_on;
alter table employee add constraint primary key(SSN);
alter table department add constraint primary key(DNo);
alter table project add constraint primary key(PNo);
alter table employee add column Age int;
desc employee;
drop table project; 
desc department;
alter table employee add foreign key(DNo) references department(DNo);
alter table department add foreign key(MgrSSN)
references employee(SSN);
alter table dlocation add foreign key(DNo) references employee(DNo);
alter table works_on add foreign key(SSN) references employee(SSN);
desc employee;