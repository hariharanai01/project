show databases;
use hari_ai;
create table eee_dpm_list(
s_no int not null primary key auto_increment,
student_name varchar(15),
age int not null,
gender varchar(10),
native varchar (20));
select * from eee_dpm_list;

DELIMITER $$
drop procedure if exists insertinto;$$
CREATE PROCEDURE insertinto(
in s_noparam int,
in student_nameparam varchar (100),
in ageparam int,
in genderparam varchar(40),
in nativeparam varchar(20))
begin
insert into eee_dpm_list (s_no,student_name,age,gender,native)
values (s_noparam,student_nameparam,ageparam,genderparam,nativeparam);
end $$
DELIMITER ;
call insertinto(3,'rahgul',22,'male','perambalur');
select * from kaasi_rowdy;





delimiter ##
drop procedure if exists updatevalue;##
create procedure updatevalue
(in tablename varchar (30),
in columnname varchar(30),
in valuechange varchar(30),
in idname varchar(30),
in id int)
begin
set @statement=concat(' update ', tablename ,' set ', columnname , ' =\'' , valuechange ,'\'',' where ', idname ,' = ',id);
prepare stmt from @statement;
execute stmt;
end ##
delimiter ;


call updatevalue('ai_batch01','first_name','Hari','S_NO',1);ai_batch01eee_dpm_list

select * from ai_batch01;
delimiter ##
drop procedure exists deletevalue; ##
create procedure deletevalue
(in tablename varchar (30),
in columnname varchar(30)
in id int)
begin
set @statement=concat(' delete from ',tablename ,' set ', columnname , ' =\'' ,' Where ', idname ,'
