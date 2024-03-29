CREATE DATABASE QLSV
USE QLSV

CREATE TABLE CT_Daotao
(
MaCTDT varchar(10)NOT NULL,
TenCTDT nvarchar(50)
)



CREATE TABLE KhoaHoc
(
MaKH varchar(10)NOT NULL,
MaCTDT varchar(10)NOT NULL,
TenKH nvarchar(50)
)



CREATE TABLE Lophoc
(
MaLop varchar(10)NOT NULL,
MaKH varchar(10)NOT NULL,
TenLop nvarchar(50)
)


CREATE TABLE MonHoc
(
 MaMH varchar(10)NOT NULL,
 TenMH nvarchar(50)
 )


CREATE TABLE SinhVien
(
MaSV varchar(10)NOT NULL,
HoTen nvarchar(50)not null,
GioiTinh nvarchar(10)not null,
NgaySinh Datetime,
NoiSinh nvarchar(30)not null,
MaLop varchar(10)NOT NULL,
)


CREATE TABLE KetQuaThi
(
MaSV varchar(10)NOT NULL,
 MaMH varchar(10)NOT NULL,
 LanThi int not null,
 DiemThi float,
)
SELECT *
FROM CT_Daotao
SELECT *
FROM KhoaHoc
SELECT *
FROM Lophoc
 SELECT *
FROM MonHoc
  SELECT *
FROM SinhVien
  SELECT *
FROM KetQuaThi 

ALTER TABLE CT_DaoTao ADD CONSTRAINT PK_CTDaoTao PRIMARY KEY(MaCTDT)
ALTER TABLE KhoaHoc ADD CONSTRAINT PK_KhoaHoc PRIMARY KEY(MaKH)
ALTER TABLE Lophoc ADD CONSTRAINT PK_Lophoc PRIMARY KEY(MaLop)
ALTER TABLE MonHoc ADD CONSTRAINT PK_MonHoc PRIMARY KEY(MaMH)
ALTER TABLE SinhVien ADD CONSTRAINT PK_SinhVien PRIMARY KEY(MaSV)
ALTER TABLE KetQuaThi ADD CONSTRAINT PK_KetQuaThi PRIMARY KEY(MaSV,MaMH,LanThi)

--kiem tra
SP_PKEYS CT_DaoTao
SP_PKEYS KhoaHoc
SP_PKEYS Lophoc
SP_PKEYS MonHoc
SP_PKEYS SinhVien
SP_PKEYS KetQuaThi
--ran buoc khoa ngoai
ALTER TABLE KhoaHoc ADD CONSTRAINT FK_KH_MaCTDT FOREIGN KEY(MaCTDT) REFERENCES CT_DaoTao(MaCTDT)
ALTER TABLE Lophoc ADD CONSTRAINT FK_LopHoc_MaKH FOREIGN KEY(MaKH) REFERENCES KhoaHoc(MAKH)
ALTER TABLE SinhVien ADD CONSTRAINT FK_SinhVien_MaLop FOREIGN KEY(MaLop) REFERENCES Lophoc(MaLop)
ALTER TABLE KetQuaThi ADD CONSTRAINT FK_KetQuaThi_MaMH FOREIGN KEY(MaMH) REFERENCES MonHoc(MaMH)
ALTER TABLE KetQuaThi ADD CONSTRAINT FK_KetQuaThi_MaSV FOREIGN KEY(MaSV) REFERENCES SinhVien(MaSV)

INSERT INTO CT_Daotao VALUES('1',N'Cử Nhân')
INSERT INTO CT_Daotao VALUES('2',N'Cao Đẳng')
INSERT INTO CT_Daotao VALUES('3',N'Trung Cầp')
--
INSERT INTO MonHoc VALUES('TH101',N'Tin học đại cương')
INSERT INTO MonHoc VALUES('TH110',N'Toán rời rạc')
INSERT INTO MonHoc VALUES('TH102',N'Cơ sở dữ liệu')
--
SET DATEFORMAT DMY
INSERT INTO SinhVien VALUES('K116',N'Đinh Nguyễn Vân Anh',N'Nữ','18/12/1985',N'Bình Thuận','1')
INSERT INTO SinhVien VALUES('K117',N'Trần Hoàng Anh',N'Nữ','4/8/1986','Bình Dương','1')
INSERT INTO SinhVien VALUES('K118',N'Bùi Thanh Bình',N'Nam','23/10/1985',N'Đồng Nai','1')
INSERT INTO SinhVien VALUES('K119',N'Phạm Nhật Tân',N'Nam','15/1/1985',N'Đồng Tháp','2')
INSERT INTO SinhVien VALUES('K120',N'Định Thiện Hòa','Nam','8/12/1985',N'Vĩnh Long','3')
INSERT INTO SinhVien VALUES('K121',N'Nguyễn Anh Khoa','Nam','14/11/1985',N'Vũng Tàu','3')
INSERT INTO SinhVien VALUES('K122',N'Trương Mộng Thúy',N'Nữ','12/5/1986',N'Cần Thơ','2')
INSERT INTO SinhVien VALUES('K123',N'Võ Anh Thi',N'Nữ','23/5/1986',N'Bến Tre','2')
--
INSERT INTO Lophoc VALUES('1','1','K1_1')
INSERT INTO Lophoc VALUES('2','1','K2_1')
INSERT INTO Lophoc VALUES('3','1','K3_1')
INSERT INTO Lophoc VALUES('4','2','K3_2')
--
INSERT INTO KhoaHoc VALUES('1','1','Khóa 1 năm 2005')
INSERT INTO KhoaHoc VALUES('2','1','Khóa 2 năm 2006')
INSERT INTO KhoaHoc VALUES('3','2','Khóa 1 năm 2007')
INSERT INTO KhoaHoc VALUES('4','3','Khóa 1 năm 2008')
INSERT INTO KhoaHoc VALUES('5','2','Khóa 2 năm 2008')
--
INSERT INTO KetQuaThi VALUES('K116','TH101','1','8')
INSERT INTO KetQuaThi VALUES('K117','TH101','1','4')
INSERT INTO KetQuaThi VALUES('K118','TH101','1','6.5')
INSERT INTO KetQuaThi VALUES('K119','TH102','1','5')
INSERT INTO KetQuaThi VALUES('K120','TH102','1','7')
INSERT INTO KetQuaThi VALUES('K116','TH110','1','7')
INSERT INTO KetQuaThi VALUES('K118','TH102','1','9')
INSERT INTO KetQuaThi VALUES('K119','TH101','1','6')
INSERT INTO KetQuaThi VALUES('K120','TH101','1','5')
INSERT INTO KetQuaThi VALUES('K116','TH102','1','7.5')
INSERT INTO KetQuaThi VALUES('K117','TH101','2','7')