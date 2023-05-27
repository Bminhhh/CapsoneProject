% Khởi tạo các giá trị ban đầu
x = out.dispx; % các giá trị tọa độ x
y = out.dispy; % các giá trị tọa độ y
n = 60000; % số điểm trong chuỗi

% Khởi tạo tổng độ dài ban đầu
total_distance = 0;

% Tính tổng độ dài của chuỗi đường thẳng
for i = 1:n-1    % Tạo ma trận chứa tọa độ của hai điểm đầu mút của đoạn thẳng
    P = [x(i), y(i); x(i+1), y(i+1)];

    % Tính khoảng cách giữa hai điểm đầu mút của đoạn thẳng
    d = pdist2(P);

    % Cộng khoảng cách này vào tổng độ dài
    total_distance = total_distance + d;
end

% Hiển thị kết quả
fprintf('Tong do dai cua chuoi duong thang la: %.28f meter\n', total_distance);