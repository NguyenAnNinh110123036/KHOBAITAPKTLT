create database QUANLYDIEMSV
use QUANLYDIEMSV

create table DMKHOA(
MAKHOA char(2) primary key not null,
TENKHOA nvarchar(30)
)
insert into DMKHOA values('AV', N'Anh văn'),
('TH', N'Tin học'),
('TR', N'Triết'),
('VL', N'Vật lý');

create table DMSV(
MASV char(3) primary key not null,
HOSV nvarchar(30),
TENSV nvarchar(20),
PHAI int,
NGAYSINH datetime,
NOISINH nvarchar(25),
MAKHOA char(2),
constraint MK foreign key (MAKHOA) references DMKHOA(MAKHOA),
HOCBONG float,
)
insert into DMSV values
('A01', N'Nguyễn Thị', N'Hải', '1', '02/23/1993', N'Hà Nội', 'TH', '130000'),
('A02', N'Trần Văn', N'Chính', '0', '12/24/1992', N'Bình Định', 'VL', '150000'),
('A03', N'Lê Thu Bạch', N'Yến', '1', '02/21/1993', N'TP HCM', 'TH', '170000'),
('A04', N'Trần Anh', N'Tuấn', '0', '12/20/1994', N'Hà Nội', 'AV', '80000'),
('B01', N'Trần Thanh', N'Mai', '1', '08/12/1993', N'Hải Phòng', 'TR', '0'),
('B02', N'Trần Thị Thu', N'Thủy', '1', '01/02/1994', N'TP HCM', 'AV', '0');


             
create table DMMH(
MAMH char(2) primary key not null,
TENMH nvarchar (30),
SOTIET int
)

insert into DMMH values
('01', N'Cơ sở dữ liệu', '45'),
('02', N'Trí tuệ nhân tạo ', '45'),
('03', N'Truyền tin', '45'),
('04', N'Đồ họa', '60'),
('05', N'Văn phạm', '60'),
('06', N'Kỹ thuật lập trình', '45');




create table KETQUA(
MASV char(3),
MAMH char(2),
LANTHI int,
DIEM decimal(4,2)
constraint RB_KEY primary key ( MASV, MAMH, LANTHI)
)
 insert into KETQUA values
 ('A01', '01', '1', '3'),
 ('A01', '01', '2', '6'),
 ('A01', '02', '2', '6'),
 ('A01', '03', '1', '5'), 
 ('A02', '01', '1', '4.5'),
 ('A02', '01', '2', '7'),
 ('A02', '03', '1', '10'),
 ('A02', '05', '1', '9'), 
 ('A03', '01', '1', '2'),
 ('A03', '01', '2', '5'),
 ('A03', '03', '1', '2.5'),
 ('A03', '03', '2', '4'), 
 ('A04', '05', '2', '10'),
 ('B01', '01', '1', '7'),
 ('B01', '03', '1', '2.5'),
 ('B01', '03', '2', '5'),
 ('B02', '02', '1', '6'),
 ('B02', '04', '1', '10');
 
 select MAMH as 'Mã_môn', TENMH as 'Tên_MH', SOTIET as 'Số_tiết'
 from DMMH
 where TENMH like N'T%'
 
 
 select HOSV as 'HỌ_SV', TENSV as 'Tên_SV', NGAYSINH as 'Ngày_sinh', PHAI as 'Phái'
 from DMSV
 where TENSV like N'%I'
 
 
 select MAKHOA as 'Mã_Khoa', TENKHOA as 'Tên_Khoa'
 from DMKHOA
 where TENKHOA like N'_n%'
 
 select HOSV as 'HỌ_SV', TENSV as 'Tên_SV'
 from DMSV
 where HOSV like N'%thị%'
 
 
  select MASV as 'Mã_SV' , HOSV as 'HỌ_SV', TENSV as 'Tên_SV', PHAI as 'Phái', HOCBONG as 'Học_bỏng'
 from DMSV
 where TENSV between 'a%' and 'm%'
 
 
   select HOSV as 'HỌ_SV', TENSV as 'Tên_SV', MAKHOA as 'MÃ_Khoa', NOISINH as 'Nơi_Sinh' ,HOCBONG as 'Học_bỏng'
 from DMSV
 where HOCBONG>=120000 and NOISINH=N'Hà Nội'
 
 
  select MASV as 'Mã_SV', NGAYSINH as 'Ngày_sinh' , NOISINH as 'Nơi_Sinh' ,HOCBONG as 'Học_bỏng'
 from DMSV
 where NGAYSINH between '1992/01/01' and '1993/06/05'

select s.MASV, s.HOSV, s.TENSV, s.NGAYSINH, s.PHAI, k.TENKHOA, s.HOCBONG
from DMSV as s, DMKHOA as k
where HOCBONG between '80000' and '150000' and s.MAKHOA=k.MAKHOA

select s.MASV, s.HOSV, s.TENSV, s.PHAI, k.TENKHOA
from DMSV as s, DMKHOA as k
where s.MAKHOA=k.MAKHOA
and s.PHAI='1' and (k.TENKHOA=N'Tin học' or k.TENKHOA=N'Anh văn')

select s.MASV , s.HOSV , s.TENSV, s.PHAI, k.DIEM
 from KETQUA as k, DMSV as s, DMMH as d
 where k.MASV=s.MASV and k.MAMH=d.MAMH
 and k.MAMH='01' and  k.DIEM<5
 
 select s.MASV , s.HOSV , s.TENSV, d.TENKHOA, s.NOISINH, s.HOCBONG
 from DMSV as s, DMKHOA as d
 where s.MAKHOA=d.MAKHOA 
 and s.MAKHOA=N'AV' and s.HOCBONG='0'
 
  select s.MASV , s.HOSV , s.TENSV, s.NGAYSINH, s.NOISINH
 from DMSV as s
 order by s.TENSV asc
 
 
 
  select s.MASV , s.HOSV+' '+ s.TENSV as HOTEN, s.NGAYSINH, s.NOISINH
 from DMSV as s
 where s.TENSV like '%[a-m]%'
 order by s.TENSV asc
 
  select s.MASV , s.HOSV , s.TENSV, k.DIEM, k.LANTHI, d.MAMH
 from DMSV as s, DMMH as d, KETQUA as k
 where s.MASV=k.MASV and d.MAMH=k.MAMH
 and k.LANTHI='1' and k.DIEM<'5'
 order by MASV desc
 
 select s.MASV , s.HOSV , s.TENSV , k.TENKHOA , s.HOCBONG
from DMSV as s, DMKHOA as k
where s.MAKHOA = k.MAKHOA
and s.HOCBONG > '100000'
order by k.MAKHOA asc

select s.MASV ,  s.HOSV , s.TENSV , s.NOISINH , S.NGAYSINH
from DMSV as s
where s.NOISINH like N'Hà Nội' and MONTH(s.NGAYSINH)=2

select s.MASV ,  s.HOSV , s.TENSV , YEAR(getdate())- YEAR(s.NGAYSINH) as TUOI ,  s.HOCBONG
from DMSV as s
where YEAR(getdate())- YEAR(s.NGAYSINH)>29

select s.MASV ,  s.HOSV , s.TENSV , YEAR(getdate())- YEAR(s.NGAYSINH) as TUOI ,  k.TENKHOA
from DMSV as s, DMKHOA as k
where s.MAKHOA = k.MAKHOA
and YEAR(getdate())- YEAR(s.NGAYSINH) >= 29 and YEAR(getdate())- YEAR(s.NGAYSINH)<= 30


select s.MASV , s.HOSV , s.TENSV, k.MAMH,  k.LANTHI, k.DIEM,
KETQUA = case when k.DIEM < 5
then N'Trượt' else N'Đậu' end
from DMSV as s, KETQUA as k
where s.MASV = k.MASV 






