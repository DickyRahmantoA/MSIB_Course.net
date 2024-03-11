-- ketentuan penamaan 

-- 1. diawali selain angka
-- 2. disarankan huruf kecil(sebetulnya besar-kecil huruf akan diabaikan)
-- 3. tidak boleh ada spasi. gunakan _ (underscore) atau sambung saja (contohnya MsPelanggan atau Ms_Pelanggan)

-- format perintah create table
-- CREATE TABLE nama_tabel (
    -- nama_kolom1 tipe_kolom1,
    -- nama_kolom2 tipe_kolom2,
    -- nama_kolom3 tipe_kolom3
    -- ...
    -- CONSTRAINT nama_constraint PRIMARY KEY (nama_kolom) 
--)

-- jenis-jenis data
-- 1. teks 
--    - char(n)
--    - varchar(n)
-- 2. angka
--    - int
--    - float
--    - bigint
--    - real
-- 3.tanggal
--    - date
--    - datetimeS

-- format insert into values
-- menyisipkan data pada semua kolom:
-- INSERT INTO nama_tabel VALUES (isi_kolom1, isi_kolom2, isi_kolom3, ...)

-- menyisipkan data pada kolom tertentu:
-- INSERT INTO nama_tabel (nama_kolom1, nama_kolom2, ...) VALUES (isi_kolom1, isi_kolom2,  ...)


-- ubah kolom
-- 1. tambah kolom
-- ALTER TABLE nama_tabel ADD nama_kolom tipe_data, ...;

-- 2. hapus kolom
-- ALTER TABLE nama_tabel DROP COLUMN nama_kolom, ...;

-- perbedaan dialek SQl
-- 1. SQL server, ms access
-- ALTER TABLE nama_tabel 
-- ALTER COLUMN nama_kolom tipe_data, ...;

-- 2. Mysql, oracle versi < 10g
-- ALTER TABLE nama_tabel 
-- MODIFY COLUMN nama_kolom tipe_data, ...;

-- 3. oracle versi >= 10g
-- ALTER TABLE nama_tabel 
-- MODIFY nama_kolom tipe_data, ...;

-- DROP, TRUNCATE, DELETE
-- serupa tapi tak sama

-- 1. menghapus tabel + isi datanya
-- DROP TABLE nama_tabel;

-- 2. menghapus seluruh data di tabel
-- TRUNCATE TABLE nama_tabel;]

-- 3. menghapus data tertentu di tabel
-- DELETE FROM nama_tabel WHERE kondisi;

-- mengenal transaksi
-- 1. BEGIN TRANSACTION;
-- mengatur perubahan data yang selanjutnya dapat ditentukan, mau diterima atau diabaikan
-- dengan COMMIT atau ROLLBACK

-- 2. ROLLBACK;
-- untuk mengabaikan semua perubahab sejak BEGIN TRANSACTION diterbitkan

-- 3. COMMIT;
-- untuk menerima semua perubahan yang dilakukan. Dampak perubahannya menjadi permanen