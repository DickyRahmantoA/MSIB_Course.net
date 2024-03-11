
drop table tespelanggan;

create table tespelanggan
(
kodepelanggan varchar(50),
tanggal_lahir datetime,
umur int

constraint pk_pelanggan 
primary key (kodepelanggan)
);

sp_help tespelanggan

insert into tespelanggan 
values ('P001', '2018-05-01', 20)

insert into tespelanggan
(kodepelanggan, tanggal_lahir)
values ('P002', '01/05/2018') -- MM/DD/YYYY

alter table tespelanggan
add alamat varchar(50)

alter table tespelanggan
drop column alamat;

begin transaction
insert into tespelanggan 
values ('P003', '2017-05-05', 20, 'jalan A no 3')

rollback

select * from tespelanggan

alter table tespelanggan
add jumlah int