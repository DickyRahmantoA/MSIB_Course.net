SELECT * FROM TrTransactionDetail

SELECT TransaksiID FROM TrTransactionDetail
GROUP BY TransaksiID, BurgerID

SELECT DISTINCT TransaksiID FROM TrTransactionDetail


SELECT * FROM TrTransaction
ORDER BY TotalPembayaran DESC, TanggalTransaksi



-- Aggregate Function
-- Count
--SELECT COUNT(*) as 'Total' 
SELECT Total = COUNT(*)
FROM TrTransaction
WHERE CAST(TanggalTransaksi AS DATE) = '2023-10-11'

SELECT BurgerID, Total = COUNT(BurgerID)
FROM TrTransactionDetail
GROUP BY BurgerID

-- SUM
SELECT SUM(TotalPembayaran) FROM TrTransaction

-- AVG
SELECT AVG(TotalPembayaran) FROM TrTransaction

-- MAX
SELECT MAX(TotalPembayaran) FROM TrTransaction

-- MIN 
SELECT MIN(TotalPembayaran) FROM TrTransaction


-- STRING Function
--  LEFT
SELECT LEFT(Nama, 4), * FROM MsBurger

-- RIGHT
SELECT RIGHT(Nama, 4), * FROM MsBurger

-- REPLACE
SELECT REPLACE(Nama, 'Double', 'Triple'), * FROM MsBurger

-- UPPER
SELECT UPPER(Nama), * FROM MsBurger

-- LOWER
SELECT LOWER(Nama), * FROM MsBurger

-- LEN
SELECT LEN(Nama), Nama FROM MsBurger

-- CHARINDEX
SELECT CHARINDEX(' ', Nama), Nama FROM MsBurger

-- SUBSTRING
SELECT SUBSTRING(Nama, 1, CHARINDEX(' ', Nama)-1), Nama FROM MsBurger

-- LTRIM RTRIM
SELECT LTRIM(RTRIM(Nama)) FROM MsBurger


-- DATE Function

-- GETDATE
SELECT GETDATE()

-- GETUTCDATE
SELECT GETUTCDATE()

-- DATEADD
SELECT DATEADD(HOUR, +7, GETUTCDATE())

-- DATENAME
SELECT DATENAME(MONTH, GETDATE())

SELECT DATENAME(WEEKDAY, TanggalTransaksi) +  ' ' + DATENAME(MONTH, TanggalTransaksi) FROM TrTransaction


-- DATEPART
SELECT DATEPART(WEEKDAY, Tanggaltransaksi), DATEPART(DAY, Tanggaltransaksi), DATEPART(MONTH, Tanggaltransaksi), DATEPART(YEAR, Tanggaltransaksi)
FROM TrTransaction


-- JOIN


SELECT t.TransaksiID, t.TanggalTransaksi, t.TotalPembayaran, b.Nama, td.QTY,
	[Extra] = CASE WHEN e.Nama IS NULL THEN '' ELSE e.Nama END
FROM TrTransaction t
JOIN TrTransactionDetail td ON td.TransaksiID = t.TransaksiID
JOIN MsBurger b on b.BurgerID = td.BurgerID
LEFT JOIN MsExtra e on e.ExtraID = td.ExtraID
WHERE CAST(t.TanggalTransaksi AS DATE) = '2023-10-12'
UNION

SELECT t.TransaksiID, t.TanggalTransaksi, t.TotalPembayaran, b.Nama, td.QTY,
	[Extra] = CASE WHEN e.Nama IS NULL THEN '' ELSE e.Nama END
FROM TrTransaction t
JOIN TrTransactionDetail td ON td.TransaksiID = t.TransaksiID
JOIN MsBurger b on b.BurgerID = td.BurgerID
LEFT JOIN MsExtra e on e.ExtraID = td.ExtraID
WHERE CAST(t.TanggalTransaksi AS DATE) = '2023-10-11'




-- Subquery

SELECT * FROM MsBurger a
WHERE a.BurgerID IN (
	SELECT td.BurgerID FROM TrTransaction t
	JOIN TrTransactionDetail td on td.TransaksiID = t.TransaksiID
)

SELECT * FROM MsBurger a
WHERE EXISTS (
	SELECT td.BurgerID FROM TrTransaction t
	JOIN TrTransactionDetail td on td.TransaksiID = t.TransaksiID
	WHERE td.BurgerID = a.BurgerID
)

-- Alias subquery
SELECT a.*
FROM MsBurger a
JOIN (
	SELECT td.BurgerID FROM TrTransaction t
	JOIN TrTransactionDetail td on td.TransaksiID = t.TransaksiID
	GROUP BY td.BurgerID
) b on b.BurgerID = a.BurgerID

-- LIKE
SELECT * FROM MsBurger
WHERE Nama LIKE 'C%e_'



