create database QLDEAN
use QLDEAN
create table CHUYENMON
(
	MATDCM char(3) primary key not null,
	TenTDCm nvarchar(100) not null,

)
insert into CHUYENMON values ('A01', N'Kỹ sư Công nghệ thông tin ')
insert into CHUYENMON values ('A02', N'Kỹ sư Mạng máy tính và truyền thông ')
insert into CHUYENMON values ('A03', N'Kỹ sư Công nghệ phần mềm ')
insert into CHUYENMON values ('A04', N'Kỹ sư Hệ thống thông tin')
insert into CHUYENMON values ('B01', N'Kỹ sư Nông nghiệp ')
insert into CHUYENMON values ('C03', N'Cử nhân kế toán ')
insert into CHUYENMON values ('C02', N'Cử nhân Quản trị doanh nghiệp ')
insert into CHUYENMON values ('D01', N'Kỹ thuật viên thuyết kế, cài đặt mạng ')
insert into CHUYENMON values ('D02', N'Kỹ thuật viên thiết kế đồ họa ')
insert into CHUYENMON values ('D03', N'Kỹ thuật viên thu thập số liệu')




create table NHANVIEN
(
	MaNV char(10) primary key not null,
	HoNV nvarchar (20) not null,
	TenLotNV nvarchar (20) not null,
	TenNV nvarchar (20) not null,
	NgaySinh datetime,
	Phai nvarchar(3),
	DiaChi nvarchar (100),
	HeSoLuong dec(4,2),
	MATDCM char(3) constraint RB_TDCM foreign key (MATDCM) references CHUYENMON(MATDCM),
)

insert into NHANVIEN values ('A1.001',N'Nguyễn',N'Thanh',N'Tùng','08/12/1965',N'Nam',N'Trà Vinh','4.66','A01')
insert into NHANVIEN values ('A1.002', N'Nguyễn', N'Mạnh', N'Hùng', '09/15/1962', N'Nam', N'Vĩnh Long', '4.33', 'A02' )

insert into NHANVIEN values ('A1.003', N'Trần', N'Thanh', N'Tâm', '07/31/1972', N'Nữ', N'Vĩnh Long', '3.99', 'A03' )
insert into NHANVIEN values ('A1.004', N'Bùi', N'Ngọc', N'Hằng', '07/19/1987', N'Nữ', N'Cần Thơ', '3.00', 'A04' )

insert into NHANVIEN values ('A1.005', N'Lê', N'Quỳnh', N'Như', '07/20/1971', N'Nữ', N'Trà Vinh', '4.33', 'B01' )
insert into NHANVIEN values ('A1.006', N'Trần', N'Thị', N'Hương', '11/10/1975', N'Nữ', N'Cần Thơ', '3.99', 'C01' )

insert into NHANVIEN values ('A1.007', N'Trần', N'Hồng', N'Quang', '04/8/1979', N'Nữ', N'Trà Vinh', '3.66', 'C02' )
insert into NHANVIEN values ('A1.008', N'Phạm', N'Văn', N'Vinh', '11/10/1985', N'Nam', N'Vĩnh Long', '2.67', 'D01' )

insert into NHANVIEN values ('A2.001', N'Trần', N'Hồng', N'Thanh', '12/8/1967', N'Nữ', N'Trà Vinh', '4.66', 'D02' )
insert into NHANVIEN values ('A2.002', N'Nguyễn', N'Mạnh', N'Hùng', '09/15/1962', N'Nam', N'Vĩnh Long', '4.33', 'D03' )

insert into NHANVIEN values ('A2.003', N'Trần', N'Thanh', N'Hưng', '07/31/1972', N'Nam', N'Vĩnh Long', '4.33', 'A01' )
insert into NHANVIEN values ('A2.004', N'Lê', N'Ngọc', N'Hằng', '07/19/1987', N'Nữ', N'Trà Vinh', '3.00', 'A02' )

insert into NHANVIEN values ('A2.005', N'Lê', N'Quỳnh', N'Hương', '07/20/1971', N'Nữ', N'Trà Vinh', '4.33', 'A03' )
insert into NHANVIEN values ('A2.006', N'Phan', N'Thị', N'Hương', '11/10/1985', N'Nữ', N'Cần Thơ', '3.99', 'C02' )

insert into NHANVIEN values ('A2.007', N'Trần', N'Vinh', N'Quang', '04/8/1979', N'Nam', N'Cần Thơ', '3.66', 'D01' )
insert into NHANVIEN values ('A2.008', N'Trần', N'Văn', N'Anh', '11/10/1994', N'Nam', N'Trà Vinh', '3.33', 'D03' )
insert into NHANVIEN values ('A2.009', N'Phạm', N'Văn', N'Viễn', '11/10/1995', N'Nam', N'Trà Vinh', '3.33', 'D02' )

insert into NHANVIEN values ('A2.0010', N'Lê', N'Vinh', N'Quang', '04/8/1979', N'Nam', N'Cần Thơ', '3.66', 'D01' )
insert into NHANVIEN values ('A2.0011', N'Lê', N'Văn', N'Anh', '11/10/1994', N'Nam', N'Trà Vinh', '3.33', 'D03' )
insert into NHANVIEN values ('A2.0012', N'Lê', N'Văn', N'Viễn', '11/10/1995', N'Nam', N'Trà Vinh', '3.33', 'D02' )


create table PHONGBAN
(
	MaPB char(2) primary key not null,
	TenPB nvarchar(100) not null,

)
insert into PHONGBAN values  ('KT',N'Kỹ thuật')
insert into PHONGBAN  values ('KD',N'Kinh doanh')
insert into PHONGBAN  values ('SX',N'Sản xuất')

create table NHIEMVU
(
	MaNhiemVu char(2) primary key not null,
	TenNV nvarchar(100) not null,

)

insert into NHIEMVU values ('A1', N'Tổ trưởng tổ kỹ thuật')
insert into NHIEMVU values ('A2', N'Phó Tổ trưởng tổ kỹ thuật')

insert into NHIEMVU values ('A3', N'Tổ trưởng tổ sản xuất')
insert into NHIEMVU values ('A4', N'Phó Tổ trưởng tổ sản xuất')

insert into NHIEMVU values ('A5', N'Tổ trưởng tổ kinh doanh')
insert into NHIEMVU values ('A6', N'Phó Tổ trưởng tổ kinh doanh')


insert into NHIEMVU values ('B1',N'Kỹ thuật viên thuyết kế, cài đặt mạng ')
insert into NHIEMVU values ('B2', N'Kỹ thuật viên thiết kế đồ họa ')
insert into NHIEMVU values ('B3', N'Kỹ thuật viên thu thập số liệu')


create table NHANVIEN_NHIEMVU
(
	MaNV char(6),
	MaPhong char(2),
	MaNhiemVu char(2),
	NgayNhanNhiemVu date default getdate(),
	NgayKetThuc date default null,
	constraint RB_NV_P_MaNV primary key ( MaNV, MaPhong, MaNhiemVu ),
	
	
	constraint RB_MaNV foreign key (MaNV) references NHANVIEN(MaNV),
	
	constraint RB_MaPhong foreign key (MaPB) references PHONGBAN(MaPB),
	
	constraint RB_MaNhiemVu foreign key (MaNV) references NHIEMVU(MaNV),
	


);
drop table NHIEMVU

