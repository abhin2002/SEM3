
create user 'user1'@'localhost'
identified by 'password';
grant select on company.employee to 'user1'@'localhost';
show grants for 'user1'@'localhost';
revoke select on employee from 'user1'@'localhost';
show grants for 'user1'@'localhost';
