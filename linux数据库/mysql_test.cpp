#define _CRT_SECURE_NO_WARNINGS 1

/*批量插入数据*/

drop table if exists actor;
CREATE TABLE actor(
	actor_id  smallint(5)  NOT NULL PRIMARY KEY,
	first_name  varchar(45) NOT NULL,
	last_name  varchar(45) NOT NULL,
	last_update  DATETIME NOT NULL)

insert into actor values(1, 'PENELOPE', 'GUINESS', '2006-02-15 12:34:33'), (2, 'NICK', 'WAHLBERG', '2006-02-15 12:34:33');