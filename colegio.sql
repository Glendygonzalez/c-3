-- crear base de datos ejemplo
create database ejemplo2;
-- poner en uso
use ejemplo2;
-- crear la tabla de la base de datos
create table alumno(
 codigo integer(11) auto_increment,
 nombre varchar(60),
 direccion varchar(60),
 telefono integer(20),
 primary key (codigo)
 );
 -- insertar registro
 insert into alumno (nombre,direccion,telefono) values ("Pedro Pocapiedra","zona 1",13124);
 -- visualizar registro
 select * from alumno;
 


