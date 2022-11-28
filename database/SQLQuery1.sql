create database kaushal;
use kaushal;
create table kaushal(
eid int primary key identity(1,1),
ename varchar(20),
address varchar(20),
contact varchar(20)
);

select * from kaushal;
drop table kaushal;
insert into kaushal values('kaushal','kathmandu',9840389924);