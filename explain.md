Demo 1(flag.c):
Với máy tính 64bit khi argu đạt 29 byte lỗi buffer overflow được thể hiện
![stack_frame](https://user-images.githubusercontent.com/80744099/192136311-596332df-fada-4a4e-af20-63d24ee1c2ec.png)
Demo 2(getsFunc.c):
Với đầu vào < 32 bit thì toàn bộ sẽ là dữ liệu trong biến name còn nếu > 32 bit thì phần dư sẽ bị trần ra biến command
ex output: 01234567890123456789012345678901dir C:\
chương trình hiển thị các thư mục trong ổ C
