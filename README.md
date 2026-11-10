# TH2 – Timer và Deep Sleep trên ESP32

**Sinh viên:** Vi Tuấn Kiệt  
**Mã sinh viên:** 25112063  
**Vi điều khiển:** ESP32 DevKit V1  
**Môi trường thực hiện:** Wokwi Simulator  
**Hình thức:** Mô phỏng trực tuyến, không sử dụng kit vật lý.

---

## Bài 1 – So sánh các phương pháp định thời

### 1. Nội dung thực hiện

Thực hiện điều khiển LED bằng ba phương pháp:

- `delay()`
- `millis()`
- `Hardware Timer`

### 2. Kết quả quan sát

- **delay():** LED sáng và tắt theo chu kỳ. Trong thời gian delay, luồng chương trình bị chặn.
- **millis():** LED sáng và tắt theo chu kỳ nhưng chương trình vẫn có thể thực hiện các công việc khác trong thời gian chờ.
- **Hardware Timer:** Sử dụng bộ định thời phần cứng để tạo ngắt định kỳ, từ đó điều khiển trạng thái LED.

### 3. Kết luận

Mỗi phương pháp có ưu điểm riêng. `delay()` dễ sử dụng nhưng làm chương trình bị chặn. `millis()` phù hợp với các chương trình cần xử lý nhiều công việc đồng thời. Hardware Timer phù hợp với các tác vụ cần định thời chính xác và tạo sự kiện định kỳ.

### 4. Video minh chứng

- Video mô phỏng delay(): https://drive.google.com/file/d/1rBB1ZWKULzfrVqK4iHalweS3bQXjHIzZ/view?usp=sharing
- Video mô phỏng millis(): https://drive.google.com/file/d/1R4mi4dFq5kQTPKn0XVbB70fUgzKm5q2s/view?usp=sharing
- Video mô phỏng Hardware Timer: https://drive.google.com/file/d/1rQgmzkxc5cQwcMLuqP_u5Psr6Cu_J0s7/view?usp=sharing

---

## Bài 2 – Deep Sleep định giờ

### 1. Nội dung thực hiện

- Sử dụng chế độ Deep Sleep trên ESP32.
- Cấu hình thời gian ngủ 10 giây.
- Sử dụng Timer Wake-up để đánh thức ESP32.
- Quan sát quá trình khởi động lại sau khi thức dậy.

### 2. Kết quả quan sát

ESP32 được cấu hình đi vào chế độ Deep Sleep. Sau khoảng thời gian đã cài đặt, bộ định thời đánh thức thiết bị và chương trình được chạy lại từ đầu.

### 3. Kết luận

Deep Sleep giúp giảm hoạt động của vi điều khiển, phù hợp với các ứng dụng IoT cần tiết kiệm năng lượng. Tuy nhiên, mức tiêu thụ điện năng thực tế chưa được đo do bài thực hiện bằng mô phỏng Wokwi.

### 4. Video minh chứng

https://drive.google.com/file/d/19ztcJRntxwJa0QkoF3bWc5C8Tej_oTIh/view?usp=sharing

---

## Công cụ thực hiện

- ESP32 DevKit V1
- Wokwi Simulator
