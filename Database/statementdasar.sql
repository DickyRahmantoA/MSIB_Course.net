-- PERINTAH SELECT FROM

-- memilih semua data dari semua kolom ditabel :

-- SELECT * FROM skema.nama_tabel;

-- memilih semua data dari kolom tertentu :

-- SELECT nama_kolom1, nama_kolom2, ... FROM skema.nama_tabel;

-- membuat kolom tambahan diperintah SELECT :
-- SELECT nama_kolom1, nama_kolom2,
--        konstanta AS kolom_baru1,
--        operator AS kolom_baru2,
--        fungsi AS kolom_baru3, ...
-- FROM skema.nama_tabel;

-- PERINTAH SELECT DISTINCT

-- mengambil data unik dari sebuah kolom atau lebih.
-- jika memilih lebih dari 1 kolom, database akan
-- menampilkan data unik dari kombinasi semua kolom.

-- SELECT DISTINCT nama_kolom1
-- FROM skema.nama_tabel;

-- SELECT DISTINCT nama_kolom1,
--     nama_kolom2, ...
-- FROM skema.nama_tabel;

-- Mengenal fungsi 

-- tujuannya: menyederhanakn penarikan data yang memerlukan
-- pengolahan data lebih lanjut. 

-- 1. charindex()
-- 2. concat()
-- 3. left()
-- 4. right()
-- 5. substring()
-- 6. len()
-- 7. lower()
-- 8. upper()
-- 9. ltrim()
-- 10. rtrim()
-- 11. trim()

-- Fungsi teks
-- charindex(teks_yang_dicari, teks)
-- concat(teks1, teks2, ...)
-- left(teks_input, jumlah_yang_diambil)
-- substring(teks_input, digit_mulai, panjang_digit)

-- beberapa variasi select top 
-- tujuan : mengambil sejumlah data teratas

-- SQL server
-- SELECT TOP n * 
-- FROM nama_tabel;

-- oracle
-- SELECT *
-- FROM nama_tabel
-- WHERE ROWNUM <= n;

-- beberapa database lain
-- SELECT * 
-- FROM nama_tabel
-- LIMIT n;

-- Perintah WHERE
-- tujuan : membatasi data yang ingin diambil 
-- dapat digunakan untuk data numerik, teks dan tanggal 

-- operator
-- =   -> sama dengan
-- <>  atau != -> tidak sama dengan
-- >   -> lebih dari
-- <   -> kurang dari
-- >=  -> lebih dari sama dengan
-- <=  -> kurang dari sama dengan

-- logika AND dan OR 
-- tujuan : memutuskan hasil logis dari beberapa kondisi

-- Kondisi A  | Kondisi B | Logika AND | Logika OR
-- ---------- | ---------- | ---------- | ----------
-- true       | true       | true       | true
-- true       | false      | false      | false
-- false      | true       | false      | true
-- false      | false      | false      | false

-- urutan pengerjaan logika AND dan OR 
-- ingat aturan ini : (...) -> AND -> OR

-- membalik kondisi
-- awal    |   negasi
-- a > 5   |   a <= 5
-- a = 4   |   a != 4
--         |   a < 4 or a > 4
-- a > 5 and b >= 3  |   a <= 5 or B < 3
-- a = 3 or a>= 5 |   a != 3 and a < 5

-- Perintah IN
-- Tujuan : membatasi penarikan data sesuai daftar/ data tertentu saja

-- SELECT *
-- FROM nama_tabel
-- WHERE nama_kolom1 IN (data1, data2, ...);

-- SELECT *
-- FROM nama_tabel
-- WHERE nama_kolom1 NOT IN (data1, data2, ...);

-- NOT IN tidak direkomendasikan untuk data/ 
-- daftar yang banyak


-- Perintah LIKE
-- Tujuan : membatasi penarikan data dengan format teks tertentu

-- SELECT * 
-- FROM nama_tabel
-- WHERE nama_kolom1 LIKE 'format_teks';

-- SELECT * 
-- FROM nama_tabel
-- WHERE nama_kolom1 NOT LIKE 'format_teks';

-- Format teks
-- AB% = apapun yang diawali kata AB
-- %AB = apapun yang diakhiri kata AB
-- %AB% = apapun yang mengandung kata AB
-- %A%B% = apapun yang mengandung kata A dan B, diawali-, dipisahkan- atau diakhiri
-- dengan; serta A harus muncul sebelum B


-- serupa tapi tak sama
-- SELECT *
-- FROM nama_tabel
-- WHERE nama_kolom1 LIKE 'value1';

-- SELECT *
-- FROM nama_tabel
-- WHERE nama_kolom1 = 'value1';

-- kedua perintah diatas menghasilkan keluaran yang sama,
-- namun penggunaan like untuk menggantikan = tidak disarankan.
-- karena tidak sesuai dengan performance lebih berat menggunakan like daripada =.


-- perintah between
-- tujuan : membatasi penarikan data hanya untuk rentang minimum sampai maksimumnya. 
-- dapat digunakan pada data numerik, teks, dan tanggal.

-- SELECT *
-- FROM nama_tabel
-- WHERE nama_kolom1 BETWEEN value1 AND value2;

-- SELECT *
-- FROM nama_tabel
-- WHERE nama_kolom1 NOT BETWEEN value1 AND value2;



-- perintah ORDER BY 
-- tujuan : mengurutkan data dikolom tertentu,
-- baik kecil ke besar mau pun sebaliknya. dapat digunakan
-- pada data numerik, teks, dan tanggal

-- SELECT *
-- FROM nama_tabel
-- WHERE kondisi
-- ORDER BY nama_kolom1;

-- SELECT *
-- FROM nama_tabel
-- WHERE kondisi
-- ORDER BY nama_kolom1 DESC,
--          nama_kolom2 ASC;